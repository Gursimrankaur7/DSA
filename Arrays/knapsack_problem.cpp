#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    int B[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
        cin>>B[i];
    }
    int w;
    cin>>w;
    

    int ans=0;
    for(int c=0;c<pow(2,n);c++){
        int a=0;//weight
        int b=0;//profit
        for(int j=0;j<n;j++){
            if((c&(1<<j))!=0){
                a=a+A[j];
                b=b+B[j];
            }
        }
        if(a<=w){
            if(b>ans){
                ans=b;
            }
        }
    }
    cout<<ans;
}