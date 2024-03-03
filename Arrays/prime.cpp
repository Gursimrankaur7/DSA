#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    vector<bool> arr(b+1,true);
    arr[0]=arr[1]=0;
    for(int i=2;i<=b;i++){
        if(arr[i]){
            for(int j=2*i;j<=b;j++){
                arr[i]=0;
            }
        }
    }

    int cnt=0;
    for(int i=a;i<=b;i++){
        if(arr[i]){
            cnt++;
        }
    }
    cout<<cnt;
}