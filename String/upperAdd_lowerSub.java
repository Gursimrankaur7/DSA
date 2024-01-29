import java.util.*;
class upperAdd_lowerSub{
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        String sc=s.nextLine();
        String a[]=sc.split(" ");
        for(int i=0;i<a.length;i++){
            String g=a[i];
            int ans=0;
            for(int j=0;j<g.length();j++){
                if(g.charAt(j)>='A' && g.charAt(j)<='Z'){
                    ans+=g.charAt(j)-64;
                }
                else{
                    ans-=g.charAt(j)-96;
                }
            }
            if(ans<0){
                System.out.print(0);
            }
            else if(ans>9){
                System.out.print(9);
            }
            else
            System.out.print(ans);
        }
    }
}