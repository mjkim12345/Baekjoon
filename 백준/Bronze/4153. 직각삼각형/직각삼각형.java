import java.io.*;
import java.util.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        int c = Integer.parseInt(st.nextToken());

        while((a!=0)&&(b!=0)&&(c!=0)){
            if((a*a)+(b*b)==c*c){
                System.out.println("right");
            }else if((a*a)+(c*c)==b*b){
                System.out.println("right");
            }else if((b*b)+(c*c)==a*a){
                System.out.println("right");
            }else{
                System.out.println("wrong");
            }

            st = new StringTokenizer(br.readLine());
            a= Integer.parseInt(st.nextToken());
            b= Integer.parseInt(st.nextToken());
            c= Integer.parseInt(st.nextToken());
        }
    }
}