import java.util.*;
import java.io.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int[] as = {1,2,3,4,5,6,7,8};
        int[] dc = {8,7,6,5,4,3,2,1};
        
        int[] num = new int[8];
        for(int i =0; i<8; i++) {
            num[i] = Integer.parseInt(st.nextToken());
        }
        
        if(Arrays.equals(num,as)){
            System.out.print("ascending");
        }else if(Arrays.equals(num,dc)){
            System.out.print("descending");
        }else{
            System.out.print("mixed");
        }
    }
}