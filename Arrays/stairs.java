import java.util.*;
class stairs{
    public static int ways(int d){
        if(d==1 || d==0){
            return 1;
        }
        else if(d==2){
            return 2;
        }
        else{
            return ways(d-1)+ways(d-2);
        }
    }
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        System.out.println(ways(n));
    }
}