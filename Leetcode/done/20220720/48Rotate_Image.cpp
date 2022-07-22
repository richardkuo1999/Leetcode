#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> new_matrix = matrix;
        int matrix_size = matrix.size();
        cout << matrix_size<<endl;
        int move = matrix_size - 1;
        for (int row = 0; row < matrix_size; row++){
            for (int column = 0; column < matrix_size; column++){
                matrix[column][move] = new_matrix[row][column];
            }
            move--;
        }
    }
};



int main(){
    vector<vector<int>> matrix {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    Solution ans;
    ans.rotate(matrix);

    return 0;
}
