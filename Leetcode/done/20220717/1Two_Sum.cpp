#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map> 

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x = 0, y = 0;
        for (x = 0; x < nums.size(); x++) {
            int resume = target - nums[x];
            for (y = x+1; y < nums.size(); y++) {
                if(nums[y] == resume)
                    return {x,y};
            }
        }
        return {x,y};
    }
};

// best solution
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int, int> m;
//         for(int i=0; i<nums.size();i++){
//             auto it = m.find(target-nums[i]);
//             if(it != m.end())
//             {
//                 return {i, it->second};
//             }
//             m[nums[i]]=i;
//         }
//         return {};
//     }
// };

int main(){
    vector<int> nums = {3,5,3}; // Input array
    int target = 6;
    Solution ans;

    for(auto i :ans.twoSum(nums,target))
        cout << i << endl;

    return 0;
}
