#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> umap;
        for(auto num:nums){
           umap[num]++; 
        }
        for(auto i :umap){
            if(i.second == 1){
                return i.first;
            }
        }
        return 0;
    }
};

// best solution
// class Solution
// {
// public:
//     int singleNumber(vector<int> &nums)
//     {
//         int n = nums.size();
//         int unique = nums.at(0);
//         for (int i = 1; i < n; i++)
//         {
//             unique ^= nums.at(i);
//         }
//         return unique;
//     }
// };


int main(){
    vector<int> nums = {4,1,2,1,2}; // Input array

    Solution ans;
    // ans.singleNumber(nums);
    cout << ans.singleNumber(nums) << endl;

    return 0;
}
