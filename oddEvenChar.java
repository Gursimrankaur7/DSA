import java.util.*;
class oddEvenChar{
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        String st = s.next();
        String ans="";
        for(int i=0;i<st.length();i++){
            if(i%2==0){
                ans=ans+(char)(st.charAt(i)+1);
            }
            else{
                ans+=(char)(st.charAt(i)-1);
            }
        }
        System.out.println(ans);
    }
}