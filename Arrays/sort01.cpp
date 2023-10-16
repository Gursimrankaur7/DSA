#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,r=n-1;
    while(l<r){
        if(a[l]==0){
            l++;
        }
        else if(a[r]==1){
            r--;
        }
        else if(a[l]==1 && a[r]==0 && l<r){
            swap(a[l],a[r]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}