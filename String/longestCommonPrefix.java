import java.util.*;

class longestCommonPrefix {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        String s1 = s.next();
        String t1 = s.next();


        int ans=0;
        for(int c=0;c<Math.pow(2,t1.length());c++){
            String temp="";
            for(int j=0;j<t1.length();j++){
                if((c&1<<j)!=0){
                    temp+=t1.charAt(j);
                }
            }
            int a=0,b=0;
            int cnt = 0;
            while(a<temp.length() && b<s1.length()){
                if(temp.charAt(a)!=s1.charAt(b)){
                    break;
                }
                cnt++;
                a++;
                b++;
            }
            ans=Math.max(ans,cnt);
        }

        System.out.println(ans);
    }
}
