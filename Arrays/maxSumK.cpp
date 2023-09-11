#include<iostream>
using namespace std;
int maxK(int a[],int n,int k){
    int currSum=0;
    for(int i=0;i<k;i++){
        currSum+=a[i];
    }
    int maxSum=currSum;
    for(int i=k;i<n;i++){
        currSum+=(a[i]-a[i-k]);
        maxSum=max(maxSum,currSum);
    }
    return maxSum;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cout<<"enter k";
    cin>>k;
    cout<<maxK(a,n,k);
}