#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
    int n1, n2, c, i;
    cout<<"Ingrese dos numeros:"<<endl;
    cin>>n1;
    cin>>n2;
    c=0;
    i=1;
    system("cls");
    if((n1>0)&&(n2>0)){
        while((i<=n1)&&(i<=n2)){
        if((n1%i==0)&&(n2%i==0)){
            c=c+1;
        }
        i=i+1;
    }
    if(c>1){
        cout<<"No son PESI"<<endl;
    } else {
        cout<<"Son PESI"<<endl;
    }
    } else {
        cout<<"Opcion(es) no valida(s)"<<endl;
    }
    system("pause");
    return 0;
}