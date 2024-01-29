#include<iostream>
using namespace std;
int first(int a[],int n,int k){
    int l=0;
    int h=n-1;
    int m=l+(h-l)/2;
    int ans=-1;
    while(l<=h){
        if(a[m]==k){
            ans=m;
            h=m-1;
        }
        else if(a[m]>k){
            h=m-1;
        }
        else if(a[m]<k){
            l=m+1;
        }
        m=l+(h-l)/2;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<first(a,n,k);
}