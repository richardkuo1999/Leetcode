#include <iostream>
#include <vector>
#include "Sales_item.h"
using std::cin;
using std::cout;using std::endl;
using std::vector;

void Exercise1_20(){
    Sales_item book;
    cin >> book;
    cout << book << endl;
}

void Exercise1_21(){
    Sales_item book1,book2;
    cin >> book1 >> book2;
    cout << book1 + book2 << endl;
}

void Exercise1_22(){
    Sales_item book1,book2;
    cin >> book1;
    while(cin>>book2){
        if(compareIsbn(book1,book2)){
            book1+=book2;
        }
        cout << book1 << endl;
    }
}

void Exercise1_23(){
    Sales_item book1,book2;
    cin >> book1;
    int num = 1;
    while(cin>>book2){
        if(compareIsbn(book1,book2)){
            book1+=book2;
            num++;
        }
        else{
            cout << book1.isbn() <<" " << num << endl;
            num = 1;
            book1 = book2;
        }
    }
}

// void Exercise1_24(){
//     vector<Sales_item> book;
//     Sales_item temp;
//     while(cin >> temp){
//         for(int i=0;i<book.size();i++){
//             cout << book[i]<<" "<<temp<<endl;
//             if(compareIsbn(book[i],temp)){
//                 // book[i]+=temp;
//                 break;
//             }
//             else if(i >= book.size()-1)
//                 book.push_back(temp);
//         }
//         for(auto i:book){
//             cout << i << endl;
//         }
//     }
// }


int main(){
    cout << endl << "Exercise1_20:" << endl;
    Exercise1_20();
    
    cout << endl << "Exercise1_21:" << endl;
    Exercise1_21();

    cout << endl << "Exercise1_22A:" << endl;
    Exercise1_22();

    cout << endl << "Exercise1_23:" << endl;
    Exercise1_23();

    // cout << endl << "Exercise1_24:" << endl;
    // Exercise1_24();

    return 0;
}