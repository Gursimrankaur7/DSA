/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //remove duplicates
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    /*int res=1;
    for(int i=0;i<n;i++){
        if(a[i]!=a[res-1]){
            a[res]=a[i];
            res++;
        }
    }
    for(int i=0;i<res;i++){
        cout<<a[i]<<" ";
    }
    */
    /*int c=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[c]);
            c++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
    */
   int t=a[0];
   for(int i=1;i<n;i++){
    a[i-1]=a[i];
   }
   a[n-1]=t;
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
}
