#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m=0;
    for(int i=0;i<n;i++){
        int l=1;
        int g=a[i];
        for(int j=i+1;j<n;j++){
            if(a[j]>g){
                g=a[j];
                l++;
            }
        }
        m=max(m,l);
    }
    cout<<m;
}