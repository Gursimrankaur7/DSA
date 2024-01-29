import java.util.*;
class removal_special{
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        String a = s.nextLine();
        String arr[]=a.split(" ");
        int a1[]=new int[arr.length];
        for(int i=0;i<arr.length;i++){
            a1[i]=Integer.parseInt(arr[i]);
        }
        int n=a1.length;
        int c=0;
        // for(int i=0;i<n;i++){
        //     int o=0;
        //     int e=0;
        //     for(int j=0;j<n;j++){
        //         if(j!=i){
        //             if(j%2==0){
        //                 e+=a1[j];
        //             }
        //             else{
        //                 o+=a1[j];
        //             }
        //         }
        //     }
        //     if(o==e){
        //         c++;
        //     }
        // }
        // System.out.println(c);

        for(int i=0;i<n;i++){
            ArrayList<Integer> al = new ArrayList<>();
            int o=0;
            int e=0;
            for(int j=0;j<n;j++){
                if(j!=i){
                    al.add(a1[j]);
                }
            }
            for(int k=0;k<n-1;k++){
                if(k%2==0){
                    e+=al.get(k);
                }
                else{
                    o+=al.get(k);
                }
            }
            if(o==e){
                c++;
            }
        }
        System.out.println(c);
    }
}