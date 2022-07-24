#include <iostream>

using std::cin;
using std::cout;using std::endl;

void Exercise1_9(){
    int i=50,sum=0;
    while(i<=100){
        sum+=i;
        i++;
    }
    cout<<sum<<endl;
}

void Exercise1_10(){
    int i=50;
    while(0<=i){
        cout<<i<<" ";
        i--;
    }
    cout << endl;
}
void Exercise1_11(){
    int input1,input2,plus = 1;
    cout << "Please enter two number:";
    cin >> input1 >> input2;

    plus = (input1 > input2) ? -1:1;

    while(input1 != input2+plus){
        cout << input1 << " ";
        input1 += plus;
    }
    cout << endl;
}

void Exercise1_12(){
    int sum = 0;
    for(int i = -100; i <= 100; ++i)
        sum+=i;
    cout << sum << endl;
}

void Exercise1_13(){
    int sum=0;
    for(int i = 50; i <= 100; i++){
        sum+=i;
    }
    cout<<sum<<endl;

    for(int i =50; i >= 0; i--){
        cout<<i<<" ";
    }
    cout<<endl;
}
void Exercise1_16(){
    int v1,v2;
    if(cin >> v1 >> v2)
        cout << v1+v2 << endl;
}


int main(){
    cout << endl << "Exercise1_9:" << endl;
    Exercise1_9();

    cout << endl << "Exercise1_10:" << endl;
    Exercise1_10();

    cout << endl << "Exercise1_11:" << endl;
    Exercise1_11();

    cout << endl << "Exercise1_12:" << endl;
    Exercise1_12();

    cout << endl << "Exercise1_13:" << endl;
    Exercise1_13();

    cout << endl << "Exercise1_16:" << endl;
    Exercise1_16();

    cout << endl << "Exercise1_19:" << endl;
    Exercise1_11();
    
    return 0;
}