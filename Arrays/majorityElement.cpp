#include<iostream>
#include<map>
using namespace std;
int find(int a[],int n){
    int res=0,c=1;
    for(int i=1;i<n;i++){
        if(a[res]==a[i]){
            c++;
        }
        else{
            c--;
        }
        if(c==0){
        res=i;
        c=1;
        }
    }
    c=0;
    for(int i=0;i<n;i++){
        if(a[res]==a[i]){
            c++;
        }
    }
    if(c<=n/2){
        res=-1;
    }
    return res;
}
int mapMajor(int a[],int n){
    map<int ,int> m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    for(auto x:m){
        if(x.second>n/2){
            return x.first;
        }
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
    cout<<find(a,n)<<endl;
    cout<<mapMajor(a,n);
}