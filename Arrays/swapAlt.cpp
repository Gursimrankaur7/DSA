#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=0;
    while(j<n-1){
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        j=j+2;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}