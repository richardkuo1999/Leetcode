#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, int> umap;
        // row
        for(int row = 0; row < 9; row++){
            for(int column = 0; column < 9; column++){
                umap[board[row][column]]++;
                if(umap[board[row][column]] > 1)
                    if(board[row][column] != '.')
                        return false;
            }
            umap.clear();
        }
        // column
        for(int column = 0; column < 9; column++){
            for(int row = 0; row < 9; row++){
                umap[board[row][column]]++;
                if(umap[board[row][column]] > 1)
                    if(board[row][column] != '.')
                        return false;
            }
            umap.clear();
        }
        // 3 x 3
        for(int row9x9 = 0; row9x9 < 9; row9x9+=3){
            for(int column9x9 = 0; column9x9 < 9; column9x9+=3){
                for(int row = 0; row < 3; row++){
                    for(int column = 0; column < 3; column++){
                        umap[board[row9x9+row][column9x9+column]]++;
                        if(umap[board[row9x9+row][column9x9+column]] > 1)
                            if(board[row9x9+row][column9x9+column] != '.')
                                return false;
                        }
                    }
                umap.clear();
            }
        }

        return true;   
    }
};


int main(){
    // vector<int> nums = {1,2,3}; // Input array
    

    vector<vector<char>> board{
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    Solution ans;
  
    cout << ans.isValidSudoku(board) << endl;

    return 0;
}
