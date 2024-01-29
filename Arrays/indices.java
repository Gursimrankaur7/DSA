import java.util.*;
class indices{
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();
        Integer a[]=new Integer[n];
        for(int i=0;i<n;i++){
            a[i]=s.nextInt();
        }
        Integer I[]=new Integer[n];
        for(int i=0;i<n;i++){
            I[i]=i;
        }
        Arrays.sort(I,Comparator.comparing(j->a[j],Comparator.reverseOrder()));
        for(int i=0;i<n;i++){
            System.out.println(I[i]);
        }
    }
}