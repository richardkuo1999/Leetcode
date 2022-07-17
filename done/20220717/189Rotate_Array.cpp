#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int move = k % nums.size();
        reverse((nums.end()-move),nums.end());
        reverse(nums.begin(),(nums.begin()+nums.size()-move));
        reverse(nums.begin(),nums.end());
    }
};

//leetcode 不允許跟改指標位置//leetcode 不允許跟改指標位置//leetcode 不允許跟改指標位置
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int move = k % nums.size();
//         nums.insert(nums.begin(),(nums.end()-move),nums.end());
//         nums.erase((nums.end()-move),nums.end());
//     }
// };
//leetcode 不允許跟改指標位置//leetcode 不允許跟改指標位置//leetcode 不允許跟改指標位置

// Time Limit Exceeded// Time Limit Exceeded// Time Limit Exceeded
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         for (int i = 0; i < k; i++){
//             nums.insert(nums.begin(),nums.back());
//             nums.pop_back();
//         }
//     }
// };
// Time Limit Exceeded// Time Limit Exceeded// Time Limit Exceeded

int main(){
    vector<int> nums = {1,2,3,4,5}; // Input array
    int k = 3;

    Solution ans;
    ans.rotate(nums, k);
    // cout << ans.rotate(nums, k) << endl;

    return 0;
}
