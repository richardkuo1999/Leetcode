#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int max = nums.size();
        int n = 1;
        int slow = 0;
        if(max<2){
            n = max;
        }
        else{
            for(int i = 1; i < max; i++) {
                if(nums[i]!=nums[slow]){
                    slow++;
                    nums[slow] = nums[i];
                    n++;
                }
            }
        }
        return n;
    }
};
// best Solution
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int n = nums.size();
//         int k = 0;
        
//       for (int i =0; i<n; i++)
//       {
//           if(nums[i] != nums[k])
//           {
//               k++;
//               nums [k] = nums[i];
//           }
//       }
//         return k+1;
//     }
    
// };

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4}; // Input array
    Solution ans;

    cout << ans.removeDuplicates(nums) << endl;

    return 0;
}