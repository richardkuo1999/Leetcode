#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;


class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> result;
            if(pattern.length() == 1)
                return words;
            else
                for(auto it:words){
                    unordered_map<char, char> umap;
                    unordered_map<char, char> umap2;
                    for(int i=0; i<pattern.length(); i++) {
                        if(umap.find(pattern[i]) == umap.end() && umap2.find(it[i]) == umap2.end()){

                                if(i == pattern.length() - 1)
                                    result.push_back(it);

                                else{
                                    umap[pattern[i]] = it[i];
                                    umap2[it[i]] = pattern[i];
                                }
                            }
                            
                        else if (umap[pattern[i]] == it[i] && umap2[it[i]] == pattern[i]){
                            if(i == pattern.length() - 1)
                                result.push_back(it);
                        }

                        else
                            break;
                    }
                }
        return result;
    }
};

int main(){
    vector<string> words = {"yyx"};
    string pattern = "abc";

    Solution ans;
  
    for(auto it:ans.findAndReplacePattern(words,pattern))
        cout << it << endl;

    return 0;
}
