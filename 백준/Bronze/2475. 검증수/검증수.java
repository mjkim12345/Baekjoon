import java.io.*;
import java.util.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(bf.readLine());
        
        int a =Integer.parseInt(st.nextToken());
        int b =Integer.parseInt(st.nextToken());
        int c =Integer.parseInt(st.nextToken());
        int d =Integer.parseInt(st.nextToken());
        int e =Integer.parseInt(st.nextToken());
        
        int number = (a*a+b*b+c*c+d*d+e*e)%10;
        System.out.println(number);
    }
}