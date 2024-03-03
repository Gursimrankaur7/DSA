
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum;
    cin>>sum;
    int flag=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                cout<<a[i]<<" "<<a[j]<<endl;
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==1){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
}