#include<iostream>
using namespace std;
int maxEvenOdd(int a[],int n){
    int res=1;
    int curr=1;
    for(int i=1;i<n;i++){
        if((a[i]%2==0 && a[i-1]%2!=0) || (a[i]%2!=0 && a[i-1]%2==0)){
            curr++;
            res=max(res,curr);
        }
        else{
            curr=1;
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<maxEvenOdd(a,n);
}