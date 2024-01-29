import java.util.*;
class longestPal{
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        String str=s.nextLine();
        StringBuilder g =new StringBuilder(str);
        g.reverse();
        System.out.println(g+" "+str);
        int n=str.length();
        int t=0;
        String a[]=new String[n*(n+1)/2];
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
               a[t++]=str.substring(i,j+1);
            }
        }
        // for(int i=0;i<)
    }
}