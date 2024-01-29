import java.util.*;

class distanceWays {
    public static int cnt(int n) {
        if (n == 1 || n == 0) {
            return 1;
        } else if (n == 2)
            return 2;
            else{
               return  cnt(n-3)+cnt(n-2)+cnt(n-1);
            }
    }

    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int dist = s.nextInt();
        System.out.println(cnt(dist));
    }
}