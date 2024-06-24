#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
    float op1, op2, r;
    char op;
    cout<<"Ingrese los dos operandos"<<endl;
    cin>>op1;
    cin>>op2;
    cout<<"Ingrese el operador"<<endl;
    cin>>op;
    system("cls");
    switch (op){
        case '+':
            r=op1+op2;
            cout<<r<<endl;
        break;
        case '-':
            r=op1-op2;
            cout<<r<<endl;
        break;
        case '*':
            r=op1*op2;
            cout<<r<<endl;
        break;
        case '/':
            if(op2!=0){
				r=op1/op2;
				cout<<r<<endl;
			} else {
				cout<<"No se puede dividir";
			}
        break;
    }
    system("pause");
    return 0;
}