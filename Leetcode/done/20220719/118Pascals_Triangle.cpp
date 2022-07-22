#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle = {{1}};
        if (numRows != 1){
            for (int i = 1; i < numRows; i++) {
                vector<int> row;
                row.push_back(1);
                for (int j = 1; j < i; j++) {
                    row.push_back(triangle[i-1][j-1]+triangle[i-1][j]);
                }
                row.push_back(1);
                triangle.push_back(row);
            }
        }
        return triangle;
    }
};


int main(){
    vector<int> nums = {4,1,2,1,2}; // Input array
    int numRows = 5;
    Solution ans;
    // ans.generate(nums);
    for(auto i:ans.generate(numRows)){
        for(auto j:i)
            cout << j << " ";
        cout << endl;
    }
        
    // cout << ans.singleNumber(nums) << endl;

    return 0;
}
