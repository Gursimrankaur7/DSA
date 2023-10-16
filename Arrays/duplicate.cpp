#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    //xor of all elements
    for(int i=0;i<n;i++){
        ans=ans^a[i];
    }
    //xor from 1 to n-1
    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    //baaki sare elements ka xor hoga 2 br but jiska duplicate hai array mein uska hoga 3 br
    cout<<ans;
}