import java.util.*;
import java.io.*;

public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        
        int max=0;
        int number=0;
        int []a= new int[9];
        for (int i =0; i<9; i++){
            a[i] = Integer.parseInt(br.readLine());
            if(max<a[i]){
                max=a[i];
                number=i+1;
            }
        }
        System.out.println(max);
        System.out.println(number);
    }
}