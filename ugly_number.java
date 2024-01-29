import java.util.*;
class ugly_number{
    public static boolean prime(int n){
        while(n%2==0){
            System.out.print(2+" ");
            n=n/2;
        }
        for(int i=3;i<n;i=i+2){
            int flag=0;
            while(n%i==0){
                if(i==2 || i==3 || i==5){
                    System.out.print(i+" ");
                    n=n/i;
                }
                else{
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                return false;
            }
        }
        if(n==2 || n==3 || n==5){
            System.out.print(n);
            return true;
        }
        System.out.print(n);
        return false;
    }
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        while(n%2==0){
            n=n/2;
        }
        while(n%3==0){
            n=n/3;
        }
        while(n%5==0){
            n=n/5;
        }
        if(n==1){
            System.out.println("true");
        }
        else{
            System.out.println("false");

        }

        System.out.println(prime(34));
    }
}