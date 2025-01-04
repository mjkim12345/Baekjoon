import java.util.*;
import java.io.*;

public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        StringTokenizer st =new StringTokenizer(br.readLine());
        int[] size = new int[6];
        
        for(int i =0; i<6; i++)  {
            size[i] = Integer.parseInt(st.nextToken());
        }
        
        st = new StringTokenizer(br.readLine());
        int T = Integer.parseInt(st.nextToken());
        int P = Integer.parseInt(st.nextToken());
        
        for(int i =0; i<size.length;i++){
            if(size[i]%T != 0 ){
                size[i]=size[i]/T+1;
            }else{
                size[i]=size[i]/T;
            }
        }
        int sum = 0;
        for(int i=0; i<size.length; i++){
            sum+=size[i];
        }
        System.out.println(sum);
        System.out.println(N/P +" "+N%P);
    }
}