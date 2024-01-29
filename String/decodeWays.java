import java.util.*;
class decodeWays{
    public static int decode(int i,String s){
        if(i>=s.length()){
            return 1;
        }
        else if(s.charAt(i)=='0'){
            return 0;
        }
        else if(i==s.length()-1){
            return 1;
        }
        else if(s.charAt(i)=='1'|| s.charAt(i)=='2' &&(s.charAt(i+1)>=48 && s.charAt(i+1)<=54)){
            return decode(i+1,s)+decode(i+2,s);
        }
        else{
            return decode(i+1,s);
        }
    }
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        String sc=s.nextLine();
        System.out.println(decode(0,sc));
    }
}