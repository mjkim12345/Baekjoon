import java.util.*;
import java.io.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int[] a= new int[3];
        for(int i =0; i<3; i++){
            a[i] = Integer.parseInt(br.readLine());
        }
        int result= a[0]*a[1]*a[2];
        String s = Integer.toString(result);
        
        for(int i=0; i<10; i++){
            int count=0;
            for(int j=0; j<s.length(); j++){
                if(s.charAt(j)-'0'==i){
                    count++;
                }
            }
            System.out.println(count);
        }
    }
}