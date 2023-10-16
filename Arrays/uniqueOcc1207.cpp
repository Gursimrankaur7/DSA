#include<iostream>
#include <map>
#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int> m;
    for(auto i:a){
        m[i]++;
    }
    set<int> s;
    for(auto i:m){
        s.insert(i.second);
    }
    if(m.size() == s.size()){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}