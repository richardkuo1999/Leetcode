#include "iostream"
#include "string"
#include "vector"
# include "algorithm"

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        if(strs.size() <= 1){
            result = strs[0];
        }
        else{
            sort(strs.begin(),strs.end());
            for(int i = 0; i < strs[0].size(); i++){
                if(strs[0][i] != strs[strs.size()-1][i])
                    break;
                else
                    result += strs[0][i];
            }
        }
        return result;
    }
};

int main(){

    Solution ans;
    vector<string> strs = {"flower","flow","flight"};
    
    cout << ans.longestCommonPrefix(strs) << endl;

    return 0;
}