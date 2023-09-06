#include <iostream>
using namespace std;
void reverse(int a[],int l,int r){
    while(l<r){
        swap(a[l],a[r]);
        l++;
        r--;
    }
}
void dRot(int a[],int n,int d){
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d;
    cout<<"enter d"<<endl;
    cin>>d;
    dRot(a,n,d);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}