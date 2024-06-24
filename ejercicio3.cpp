#include <iostream>
#include <cstdlib>
using namespace std;
float suma(int);
int factorial(int);
int main(){
    int n;
    float sum;
    cout<<"Ingrese el numero de intervalos:"<<endl;
    cin>>n;
    system("cls");
    sum=suma(n);
    cout<<sum;
    system("pause");
    return 0;
}

float suma(int a){
    float s;
    s=0;
    for(int i=1;i<=a;i++){
        s=s+(float(factorial(i)/(2*i)));
    }
    return s;
}

int factorial(int b){
    int f;
    f=2;
    for(int i=1;i<=b;i++){
        f=f*i;
    }
    return f;
}