#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // for(int i=0;i<n;i++){
    //     int c=1;
    //     for(int j=i+1;j<n;j++){
    //         if(a[i]==a[j]){
    //             c++;
    //             if(c>1){
    //                 break;
    //             }
    //         }
    //     }
    //     if(c==1){
    //         cout<<a[i];
    //         return 0;
    //     }
    // }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans ^ a[i];
    }
    cout<<ans;
}