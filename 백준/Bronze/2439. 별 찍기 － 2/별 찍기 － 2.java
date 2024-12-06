import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int n = Integer.parseInt(st.nextToken());
        
        for(int i =0; i<n; i++) {
            for(int j=n; j>i+1; j--) {
                System.out.print(" ");
            }
            for(int j=0; j<i+1; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}