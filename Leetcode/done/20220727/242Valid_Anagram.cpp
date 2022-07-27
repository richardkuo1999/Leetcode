#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> umap;
        if (s.length() != t.length()) 
            return false;
        else{
            for (int i = 0; i < s.length(); i++){
                umap[s[i]]++;
                umap[t[i]]--;
            }
            for(auto i:umap){
                if (i.second != 0)
                    return false;
            }
        }
        return true;
    }
};

int main(){
    string s = "aa";
    string t = "bb";
    
    Solution ans;
    cout << ans.isAnagram(s,t);

    return 0;
}
