#include <iostream>
#include <string>
#include <climits>

using namespace std;




class Solution {
public:
    int myAtoi(string s) {
        bool nagitive = false,start = false, end = false,outlimit = false;
        int result = 0;
        for (int i = 0; i <s.length();i++){
            if(start){
                if(!(s[i] < 58 && s[i] > 47))
                    end = true;
                else{
                    int add = s[i]-48;
                    if(result > (INT_MAX-add)/10){
                        outlimit = true;
                        end = true;
                    }
                    else{
                        result *= 10;
                        result += add;
                    }
                }
            }
            else{
                if(!(s[i] < 58 && s[i] > 47)){
                    switch(s[i]) {
                        case '+':
                            if((i == s.length()) || 
                                !(s[i+1] < 58 && s[i+1] > 47))
                                end = true;
                            break;
                        case '-':
                            if((i == s.length()) || 
                                !(s[i+1] < 58 && s[i+1] > 47))
                                end = true;
                            else
                                nagitive = true;
                        case ' ':
                            break;
                        default:
                            end = true;
                            break;
                    }
                }
                else{
                    result += s[i]-48;
                    start = true;
                }
                
            }
            if(end)
                break;
        }
        
        result = (outlimit && nagitive)?INT_MIN:result;
        result = (outlimit && !nagitive)?INT_MAX:result;
        result = (!outlimit && nagitive)? -1*result : result;
        return result;
        
    }
};


int main(){
    string s = "999999999999999987";
    
    Solution ans;
    cout << ans.myAtoi(s);

    return 0;
}


