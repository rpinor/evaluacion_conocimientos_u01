#include <iostream>
using namespace std;
float suma(int);
int factorial(int);
int main(){
    int n;
    float sum;
    cin>>n;
    sum=suma(n);
    cout<<sum;
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
    f=1;
    for(int i=2;i<=b;i++){
        f=f*i;
    }
    return f;
}