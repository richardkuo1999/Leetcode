#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> umap;
        vector<int> result;
        for (int i = 0; i < nums1.size(); i++){
            umap[nums1[i]]++;
        }
        for(auto i:nums2){
            if(umap[i]-- > 0)
                result.push_back(i);
        }
        return result;
    }
};

// best solution
// class Solution {
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//         int n=nums1.size();
//         int m=nums2.size();
//         sort(nums1.begin(),nums1.end());
//         sort(nums2.begin(),nums2.end());
//         vector<int> ans;
//         int i=0, j=0;
//         while(i<n && j<m){
//             if(nums1[i]<nums2[j])i++;
//             else if(nums1[i]>nums2[j])j++;
//             else{
//                 ans.push_back(nums1[i]);
//                 i++, j++;
//             }
//         }
//         return ans;
        
//     }
// };

int main(){
    vector<int> nums1 = {4,2,2,1,6,4,7,3,4}; // Input array
    vector<int> nums2 = {2,2,3,4,8,3}; // Input array


    Solution ans;
    // ans.generate(nums);
    for(auto i:ans.intersect(nums1,nums2)){
            cout << i << " ";
    }
        
    // cout << ans.singleNumber(nums) << endl;

    return 0;
}
