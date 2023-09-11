#include<iostream>
using namespace std;
int maxSum(int a[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=i;j<n;j++){
            c=c+a[j];
            res=max(res,c);
        }
    }
    return res;
}
int effSum(int a[],int n){
    int res=a[0];
    int maxEnd=a[0];
    for(int i=1;i<n;i++){
        maxEnd=max(maxEnd+a[i],a[i]);
        res=max(res,maxEnd);
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
    cout<<maxSum(a,n)<<endl;
    cout<<effSum(a,n);
}