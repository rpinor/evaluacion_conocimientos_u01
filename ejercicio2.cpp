#include <iostream>
using namespace std;
int main (){
    int n1, n2, c, i;
    cin>>n1;
    cin>>n2;
    c=0;
    i=1;
    while((i<=n1)&&(i<=n2)){
        if((n1%i==0)&&(n2%i==0)){
            c=c+1;
        }
        i=i+1;
    }
    if(c>1){
        cout<<"No son PESI";
    } else {
        cout<<"Son PESI";
    }
    return 0;
}