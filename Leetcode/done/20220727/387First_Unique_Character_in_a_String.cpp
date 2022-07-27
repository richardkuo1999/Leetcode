#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> umap;
        for (int i = 0; i < s.length();i++)
            umap[s[i]]++;
        for (int i = 0; i < s.length();i++){
            if (umap[s[i]] == 1)
                return i;
        }
        return -1;
    }
};

int main(){
    string words = "aabb"; // Input array
    // string s = ;
    
    Solution ans;
    cout << ans.firstUniqChar(words);

    return 0;
}
