#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;


class Solution {
public:
    int countPrimes(int n) {
        bool isprime[n+1];
        for(int i=2; i<n; i++)
            isprime[i] = true;
        
        for(int i=2; i*i<n; i++){
            if(isprime[i]){
                for (int j = i * i; j < n; j += i){
                    isprime[j] = false;
                }
            }
        }
        int result = 0;
        for(int i=2; i<n; i++){
            if(isprime[i])
                result++;
        }
        return result;
    }
};


// Time Limit Exceeded// Time Limit Exceeded// Time Limit Exceeded
// class Solution {
// public:
//     int countPrimes(int n) {
//         vector<int> result;
//         for(int i = 2; i < n; i++){
//             bool flag = true;
//             for(auto it:result){
//                 if(it > sqrt(i))
//                     break;
//                 else if(i%it == 0){
//                     flag = false;
//                     break;
//                 }
//             }
//             if(flag)
//                 result.push_back(i);
//         }
//         return result.size();
//     }
// };
// Time Limit Exceeded// Time Limit Exceeded// Time Limit Exceeded
int main(){
    int n = 10000;

    Solution ans;
    cout << ans.countPrimes(n) << endl;

    return 0;
}
