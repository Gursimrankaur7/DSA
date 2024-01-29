import java.util.*;
class contains_case{
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        String st = s.nextLine();
        String f = s.next();
        String a[]=st.split(" ");
        int c=0;
        for(int i=0;i<a.length;i++){
            if(a[i].contains(f)){
                c++;
            }
        }
        System.out.println(c);
    }
}