#include<iostream>
using namespace std;
int getSum(int prefixSum[],int l,int r){
    if(l!=0){
        return prefixSum[r]-prefixSum[l-1];
    }
    else{
        return prefixSum[r];
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    /*given a fixed array and multiple queries of following types on array how to efficiently perform these queries*/
    int prefixSum[n];
    prefixSum[0]=a[0];
    for(int i=1;i<n;i++){
        prefixSum[i]=prefixSum[i-1]+a[i];
    }
    cout<<"enter l";
    int l;
    cin>>l;
    cout<<"enter r";
    int r;
    cin>>r;
    cout<<getSum(prefixSum,l,r);
}