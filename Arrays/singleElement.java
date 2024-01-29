import java.util.*;
class singleElement{
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++){
            a[i]=s.nextInt();
        }

        int i=0;
        while(i<n){
            int cnt=1;
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    cnt++;
                }
                else{
                    break;
                }
            }
            if(cnt==1){
                System.out.println(a[i]);
                return;
            }
            else{
                i=i+cnt;
            }
        }
    }
}