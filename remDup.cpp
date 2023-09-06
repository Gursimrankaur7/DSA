#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of terms";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=1;
    for(int i=1;i<n;i++){
        if(a[res-1]!=a[i]){
            a[res]=a[i];
            res++;
        }
    }
    for(int i=0;i<res;i++){
        cout<<a[i]<<" ";
    }
}