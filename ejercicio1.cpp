#include <iostream>
using namespace std;
int main (){
    float op1, op2, r;
    char op;
    cin>>op1;
    cin>>op2;
    cin>>op;
    switch (op){
        case '+':
            r=op1+op2;
        break;
        case '-':
            r=op1-op2;
        break;
        case '*':
            r=op1*op2;
        break;
        case '/':
            r=op1/op2;
        break;
    }
    cout<<r;
    return 0;
}