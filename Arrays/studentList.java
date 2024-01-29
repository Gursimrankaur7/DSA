import java.util.*;
class studentList{
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        String st = s.nextLine();
        int roll = s.nextInt();
        String a[]=st.split(" ");
        for(int i=a.length-1;i>=0;i--){
            System.out.print(i+1);
            System.out.println(a[i]);
        }
        if(roll<=a.length){
            System.out.println("present");
        }
        else{
            System.out.println("not present");
        }
    }
}