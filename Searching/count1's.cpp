#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0;
    int h=n-1;
    if(l>h)
        cout<<0;
    return;
    while(l<=h){
        int m=(l+h)/2;
        if(a[m]<1){
            l=m+1;
        }
        else{
            if(a[m]==0 || a[m-1]!=a[m]){
                cout<<n-m;
                return;
            }
            else{
                h=m-1;
            }
        }
    }
    cout<<0;
    return;
}