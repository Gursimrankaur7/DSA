import java.util.*;
class min3_pal{
    public static boolean pal(String a){
        StringBuilder st  = new StringBuilder(a);
        st.reverse();
        if(st.toString().equals(a)){
            return true;
        }
        else{
            return false;
        }
    }
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        String st = s.next();
        for(int i=st.length()-1;i>=0;i--){
            for(int j=st.length();j>=i;j--){
                if(pal(st.substring(i,j))){
                    if(st.substring(i,j).length()>=3){
                        System.out.println(st.substring(i,j)+" "+i+"-"+(j-1));
                    }
                }
            }
        }
    }
}