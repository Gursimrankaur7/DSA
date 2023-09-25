#include <iostream>
using namespace std;
int main(){
     int n;
     cin>>n;
     int l=1;
     int h=n;
     int ans=-1;
     while(l<=h){
        int m=(l+h)/2;
        int msq=m*m;
        if(msq==n){
            cout<<m;
            return 0;
        }
        else if(msq>n){
            h=m-1;
        }
        else{
            l=m+1;
            ans=m;
        }
     }
     cout<<ans;
}