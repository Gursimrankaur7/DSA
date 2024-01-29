#include<iostream>
using namespace std;
int pivot(int a[],int n){
    int l=0;
    int h=n-1;
    int m=l+(h-l)/2;
    while(l<h){
        if(a[m]>=a[0]){
            l=m+1;
        }
        else{
            h=m;
        }
        m=l+(h-l)/2;
    }
    return l;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<pivot(a,n);
}