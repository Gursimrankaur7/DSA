#include <iostream>
using namespace std;
int getWater(int a[],int n){
    int res=0;
    for(int i=1;i<n-1;i++){
        int lmax=a[i];
        for(int j=0;j<i;j++){
            lmax=max(lmax,a[j]);
        }
        int rmax=a[i];
        for(int k=i+1;k<n;k++){
            rmax=max(rmax,a[k]);
        }
        res=res+(min(lmax,rmax)-a[i]);
    }
    return res;
}
int waterEff(int a[],int n){
    int l[n];
    int r[n];
    l[0]=a[0];
    int res=0;
    for(int i=1;i<n;i++){
        l[i]=max(a[i],l[i-1]);
    }
    r[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        r[i]=max(a[i],r[i+1]);
    }
    for(int i=1;i<n-1;i++){
        res=res+(min(l[i],r[i])-a[i]);
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
    cout<<getWater(a,n)<<endl;
    cout<<waterEff(a,n);
}