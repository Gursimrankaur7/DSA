/*sum of elements before it is equal to sum of elements after it*/
#include<iostream>
using namespace std;
int iseq(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    int lsum=0;
    for(int i=0;i<n;i++){
        if(lsum==sum-a[i])
        return a[i+1];
        lsum+=a[i];
        sum-=a[i];
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<iseq(a,n);
}