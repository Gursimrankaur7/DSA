import java.util.*;

class bricks_ladder {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        String st = s.nextLine();
        String ar[] = st.split(" ");
        int a[] = new int[ar.length];
        for (int i = 0; i < ar.length; i++) {
            a[i] = Integer.parseInt(ar[i]);
        }
        int b = s.nextInt();
        int l = s.nextInt();

        for (int i = 0; i < a.length - 1; i++) {
            if (a[i + 1] > a[i]) {
                int diff = a[i + 1] - a[i];
                if (b >= diff) {
                    b = b - diff;
                } else if (l > 0) {
                    l--;
                }
                else{
                    System.out.println(i);
                    return ;
                }
            }
        }
        System.out.println(a.length);
    }
}