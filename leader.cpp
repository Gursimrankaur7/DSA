#include <iostream>
using namespace std;
void leaders(int a[],int n){
    int ldr=a[n-1];
    cout<<ldr<<" ";
    for(int i=n-2;i>=0;i--){
        if(ldr<=a[i]){
            ldr=a[i];
            cout<<ldr<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    leaders(a,n);
}