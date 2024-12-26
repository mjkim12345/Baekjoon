import java.util.*;
import java.io.*;

public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int[] a = new int[N];
        
        for(int i=0; i<N; i++){
            a[i]=Integer.parseInt(st.nextToken());
        }
        
        int min=a[0] , max=a[0];
        
        for(int i=0; i<N; i++){
            if(a[i]>max){
                max=a[i];
            }else if(a[i]<min) {
                min = a[i];
            }
        }
        System.out.print(min+" "+ max);
    }
}