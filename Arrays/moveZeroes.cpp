#include<iostream>
using namespace std;
void move(int a[],int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[c]);
            c++;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    move(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}