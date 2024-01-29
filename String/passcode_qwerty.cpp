#include<iostream>
#include<string>
using namespace std;
int main(){
    string st;
    cin>>st;
    int n=st.length();
    for(int l=1;l<=n/2;l++){
        string prefix=st.substr(0,l);
        string suffix=st.substr(n-l,l);

        if(prefix==suffix){
            if(prefix!=st){
                cout<<prefix;
                return 0;
            }
        }
    }
    cout<<"no such substring exists";
}