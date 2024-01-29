import java.util.*;
class reduceToZero{
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();
        int c=0;
        while(n!=0){
            if(n%2==0){
                c++;
                n=n/2;
            }
            else{
                c++;
                n=n-1;
            }
        }
        System.out.println(c);
    }
}