#include <iostream>
using namespace std;
int main()
{
    int r;
    cin >> r;
    int c;
    cin >> c;
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

cout<<"done"<<endl;
    int i = 0, j = 0;
    int C = a[0][0];

    while (i < r && j < c)
    {
       int A=0,B=0;
       if(i+1<r){
        A=a[i+1][j];
       }
       if(j+1<c){
        B=a[i][j+1];
       }
       if (A > B) {
            i++;
        } 
        else {
            j++;
        }
       C+=max(A,B);
    }
    cout<<C;
}