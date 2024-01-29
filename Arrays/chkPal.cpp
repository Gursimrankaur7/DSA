#include<iostream>
using namespace std;
char lower(char ch){
    if(ch>='A'&&ch<='Z'){
        return ch-'A'+'a';
    }
    else{
        return ch;
    }
}
int main(){
    string s="N2 i&nJA?a& jnI2n";
    // cin>>s;
    string g="";
    for(int i=0;i<s.length();i++){
                if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='1'&&s[i]<='9')){
                    g=g+s[i];
                }
    }
    cout<<g;
    int start=0;
    int e=g.length()-1;
    int flag=0;
    while(start<e){
        char a=lower(g[start]);
        char b=lower(g[e]);
        if(a!=b){
            cout<<"false";
            flag=1;
            break;
        }
        start++;
        e--;
    }
    if(flag==0)
    cout<<"true";
}