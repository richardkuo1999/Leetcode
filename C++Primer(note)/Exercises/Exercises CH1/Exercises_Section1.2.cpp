#include <iostream>

using std::cout;using std::endl;

void Exercise1_3(){
    cout << "Hello, World" << endl;
}

void Exercise1_4(){
    cout << "5*4:"<<5*4 << endl;
}

void Exercise1_5(){
    cout << "5*4:";
    cout <<5*4;
    cout << endl;
}

void Exercise1_6(){
    // std::cout << "THe sum of " << v1;
    // << " and" << v2;
    // << "is" << v1 + V2 << std::endl;
    cout <<"std::cout << \"The sum of \" << v1;" << endl
        << "<< \" and\" << v2;" << endl
        << "<< \"is\" << v1 + V2 << std::endl;"<< endl
        << "is not legal" << endl<< endl;

    cout << "int v1 = 100,v2 = 200;" << endl
        << "std::cout << \"The sum of \" << v1;" << endl
        << "std::cout<< \" and\" << v2;" << endl
        << "std::cout<< \"is\" << v1 + v2 << std::endl;"<< endl<< endl;

    int v1 = 100, v2 = 200;
    cout << "The sum of " << v1;
    cout << " and " << v2 << endl;
    cout << "is " << v1 + v2 << endl;
}

int main(){
    cout << endl << "Exercise1_3:" << endl;
    Exercise1_3();
    cout << endl << "Exercise1_4:" << endl;
    Exercise1_4();
    cout << endl << "Exercise1_5:" << endl;
    Exercise1_5();
    cout << endl << "Exercise1_6:" << endl;
    Exercise1_6();
    return 0;
}