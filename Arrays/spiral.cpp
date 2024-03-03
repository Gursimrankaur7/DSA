#include<iostream>
using namespace std;
int main(){
    int r;
    cin>>r;
    int c;
    cin>>c;
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    int total=r*c;
    int sr=0,sc=0,er=r-1,ec=c-1;
    
    int count=0;
    while(count<total){
    //start row
        for(int j=sc;j<ec&&j<=ec;j++){
            cout<<a[sr][j]<<" ";
        }
    sr++;
    //end col
    for(int i=0;i<r;i++){
        
            cout<<a[i][ec]<<" ";
        
    }
    ec--;
    //end row
    for(int i=c-1;i>=0;i--){
        cout<<a[er][i];
    }
    er--;
    //sc
    for(int i)
    }
    
}