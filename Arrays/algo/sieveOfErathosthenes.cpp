#include<iostream>
#include<vector>
using namespace std;
int main(){
    /*int n;
    cin>>n;
    int cnt=0;
    vector<bool>p(n+1,true);
    p[0]=p[1]=false;
    for(int i=2;i<n;i++){
        if(p[i]){
            cnt++;
            for(int j=2*i;j<n;j=j+i){
                p[j]=0;
            }
        }
    }
    cout<<cnt;*/
    int a;
    int b;
    cin>>a;
    cin>>b;
    int cnt=0;
    vector<bool>p(b+1,true);
    p[0]=p[1]=0;
    for(int i=2;i<=b;i++){
        if(p[i]){
            for(int j=2*i;j<=b;j=j+i){
                p[j]=0;
            }
        }
    }
    for(int i=a;i<=b;i++){
        if(p[i]){
            cnt++;
        }
    }
    cout<<cnt;
}