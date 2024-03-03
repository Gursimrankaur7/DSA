#include<iostream>
using namespace std;
void sayDig(int n,string a[]){
    if(n==0)
    return;
    int r = n%10;
    n=n/10;
    sayDig(n,a);
    cout<<a[r]<<" ";

}
int main(){
    int n;
    cin>>n;
    string a[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    sayDig(n,a);
}