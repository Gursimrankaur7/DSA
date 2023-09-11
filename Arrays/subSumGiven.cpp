#include<iostream>
using namespace std;
bool subSum(int a[],int n,int sum){
    int curr=a[0];
    int s=0;
    for(int e=1;e<n;e++){
        while(curr>sum && s<e-1){
            curr-=a[s];
            s++;
        }
        if(curr==sum)
        return true;
        if(e<n)
        curr+=a[e];
    }
    return (curr==sum);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum;
    cin>>sum;
    cout<<subSum(a,n,sum);
}