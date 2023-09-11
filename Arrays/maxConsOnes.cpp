#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=0,c=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            c=0;
        }
        else{
            c++;
            res=max(res,c);
        }
    }
    cout<<res;
}