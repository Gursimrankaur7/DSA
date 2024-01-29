#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    int i=0;
    while(i<=n-k){
        int flag=0;
        for(int j=i;j<i+k;j++){
            if(a[j]<0){
                cout<<a[j]<<" ";
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"0 ";
        }
        i++;
    }
}