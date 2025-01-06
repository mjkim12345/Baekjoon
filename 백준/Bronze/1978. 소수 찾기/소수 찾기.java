import java.util.*;
import java.io.*;

public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        int[] number = new int[N];
        int sosu=0;
        
        for(int i =0; i<N; i++){
            int count=0;
            number[i] = Integer.parseInt(st.nextToken());
            if(number[i]>=2){
                for(int j =2; j<=number[i]; j++){
                    if(number[i]%j==0){
                        count++;
                    }
                }
            }
            if(count==1){
                sosu++;
            }
        }
        
        System.out.print(sosu);
    }
}