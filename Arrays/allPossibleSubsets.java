import java.util.*;
class allPossibleSubsets{
    public static void main(String args[]){
        Scanner s= new Scanner(System.in);
        String str=s.nextLine();
        int n=str.length();
        char c[]=str.toCharArray();

        for(int i=0;i<Math.pow(2,str.length());i++){
            String ans="";
            for(int j=0;j<n;j++){
                if((i&(1<<j))!=0){
                    ans=ans+c[j];
                }
            }
            System.out.println(ans);
        } 
    }
}