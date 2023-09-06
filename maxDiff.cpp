#include <iostream>
using namespace std;
int maxDiff(int a[],int n){
    int minVal=a[0];
    int res=a[1]-a[0];
    for(int j=1;j<n;j++){
        res=max(res,a[j]-minVal);
        minVal=min(minVal,a[j]);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<maxDiff(a,n);
}