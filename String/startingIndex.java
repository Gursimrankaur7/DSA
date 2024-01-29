import java.util.*;
class startingIndex{
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        String s1 = s.nextLine().toLowerCase();
        String s2 = s.next().toLowerCase();
        System.out.println(s1.indexOf(s2));
    }
}