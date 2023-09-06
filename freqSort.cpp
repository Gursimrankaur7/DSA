#include <iostream>
using namespace std;
void print(int a[],int n){
    int f=1,i=1;
    while(i<n){
        while(i<n && a[i]==a[i-1]){
            i++;
            f++;
        }
        cout<<a[i-1]<<" "<<f<<endl;
        i++;
        f=1;
    }
    if(n==1 || a[n-1]!=a[n-2]){
        cout<<a[n-1]<<" "<<1;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    print(a,n);
}