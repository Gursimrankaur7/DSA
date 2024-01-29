#include<iostream>
using namespace std;
bool isPossible(int a[],int n,int m,int mid){
    int sc=1;
    int ps=0;
    for(int i=0;i<n;i++){
        if(ps+a[i]<=mid){
            ps=ps+a[i];
        }
        else{
            sc++;
            if(sc>m || a[i]>mid){
                return false;
            }
            ps=a[i];
        }
    }
    return true;
}
int allocateBooks(int a[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    int e = sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(isPossible(a,n,m,mid)){
            e=mid-1;
            ans=mid;
        }
        else{
            s=mid+1;  
        }
        mid=s+(e-s)/2;
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
    int m;
    cout<<"enter number of students";
    cin>>m;
    cout<<allocateBooks(a,n,m);
}