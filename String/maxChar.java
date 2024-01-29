import java.util.*;
class maxChar{
    public static void main(String args[]){
        Scanner s= new Scanner(System.in);
        String st=s.next();
        int max=0;
        
        char c[]=st.toCharArray();
        Arrays.sort(c);
        char ans=c[0];
        int i=0;
        while(i<c.length-1){
            int cnt=0;
            for(int j=i;j<c.length;j++){
                if(c[i]==c[j]){
                    cnt++;
                }
                else{
                    break;
                }
            }
            if(cnt>max){
                max=cnt;
                ans=c[i];
            }
            else if(max==cnt){
                ans=(char)(Math.min(ans,c[i]));
            }
            i=i+cnt;
        }

        System.out.println(ans);
    }
}