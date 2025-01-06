import java.util.*;
import java.io.*;

public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String st_N = br.readLine();
        int N_len = st_N.length();
        
        int result=0;
        int N = Integer.parseInt(st_N);
        for(int i=N-(N_len*9); i<N;i++){
            int number =i;
            int sum=0;
            while(number!=0){
                sum+=number%10;
                number/=10;
            }
            if(sum+i==N){
                result=i;
                break;
            }
        }
        System.out.print(result);
    }
}