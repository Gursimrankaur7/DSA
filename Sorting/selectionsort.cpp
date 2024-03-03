#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++){
        int mIndex=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[mIndex]){
                mIndex=j;
            }
        }
        swap(a[i],a[mIndex]);
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}