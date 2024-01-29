#include<iostream>
using namespace std;
int sqrtInt(int n){
    int l=0;
    int h=n;
    int m=l+(h-l)/2;
    int ans=-1;
    while(l<=h){
        if(m*m==n){
            return m;
        }
        else if(m*m<n){
            ans=m;
            l=m+1;
        }
        else{
            h=m-1;
        }
        m=l+(h-l)/2;
    }
    return ans;
}
double precise(int n,int p,int t){
    double factor=1;
    double ans=t;
    for(int i=0;i<p;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int tAns=sqrtInt(n);
    cout<<tAns<<endl;
    cout<<precise(n,3,tAns);
}