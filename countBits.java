import java.util.*;
class countBits{
    
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();

        ArrayList<Integer> a = new ArrayList<>();
        // int a = Integer.parseInt("101",2);
        for(int i=0;i<=n;i++){
            int num=i;
            int cnt=0;
            while(num>0){
                int r=num%2;
                if(r==1){
                    cnt++;
                }
                num=num/2;
            }
            // a.add(cnt);
        }
        System.out.print(a);
        
    }
}