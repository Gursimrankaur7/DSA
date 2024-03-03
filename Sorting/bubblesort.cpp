#include<iostream>
using namespace std;
void bub(int * a,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
void rec(int * a,int n){
    if(n==0||n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
    }
    rec(a,n-1);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // bub(a,n);
    rec(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}