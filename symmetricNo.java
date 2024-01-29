import java.util.*;

class symmetricNo {
    public static boolean sym(int n) {
        ArrayList<Integer> al = new ArrayList<>();
        while (n > 0) {
            al.add(n % 10);
            n = n / 10;
        }
        if (al.size() % 2 != 0) {
            return false;
        }
        int s = 0, e = 0;
        for (int i = 0; i < al.size() / 2; i++) {
            s += al.get(i);
        }
        for (int j = al.size() / 2; j < al.size(); j++) {
            e += al.get(j);
        }
        if (s == e)
            return true;

        else
            return false;
    }

    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int l = s.nextInt();
        int h = s.nextInt();

        int c = 0;
        for (int i = l; i <= h; i++) {
            if(sym(i)){
                c++;
            }
        }
        System.out.println(c);
    }
}