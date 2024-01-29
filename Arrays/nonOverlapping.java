import java.util.*;
class nonOverlapping{
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();
        int a[][]=new int[n][2];
        for(int i=0;i<n;i++){
            a[i][0]=s.nextInt();
            a[i][1]=s.nextInt();
        }
        if(a==null || a.length<=1){
            System.out.println(0);
            return;
        }
        Arrays.sort(a,Comparator.comparingInt(interval -> interval[1]));
        int ans=0;
        int prevEnd = a[0][1];
        for(int i=1;i<n;i++){
            int currStart = a[i][0];
            if(currStart<prevEnd){
                ans++;
            }
            else{
                prevEnd=a[i][1];
            }
        }
        System.out.println(ans);
    }
}