#include <iostream>
using namespace std;
void leftRot(int a[],int n){
    int temp=a[0];
    for(int i=1;i<n;i++){
        a[i-1]=a[i];
    }
    a[n-1]=temp;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    leftRot(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}