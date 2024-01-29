import java.util.*;
class diff_ascii{
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        String st = s.next();
        String ans="";
        for(int i=0;i<st.length();i++){
            ans=ans+st.charAt(i);
            if(i+1<st.length())
            ans+=st.charAt(i+1)-st.charAt(i);
        }
        System.out.println(ans);
    }
}