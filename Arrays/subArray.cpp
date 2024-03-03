#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m=0;
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            vector<int> v;
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
                // cout<<a[k]<<" ";
                v.push_back(a[k]);
            }
            if(sum>m){
                ans.clear();
                ans=v;
                m=sum;
                v.clear();
            }
            // cout<<endl;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    cout<<"max"<<m;
}