import java.util.*;
class yesNo{
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        String sc = s.next();
        String temp="";
        for(int i=0;i<17;i++){
            temp+="Yes";
        }
        int i=temp.indexOf(sc);
        if(i==-1){
            System.out.println("No");
        }
        else{
            System.out.println("Yes");
        }
        
    }
}