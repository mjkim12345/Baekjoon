import java.io.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        String A = br.readLine();
        String B = br.readLine();
        String C = br.readLine();
        int sum = Integer.parseInt(A) + Integer.parseInt(B) - Integer.parseInt(C);
        
        int sum2= Integer.parseInt(A+B) - Integer.parseInt(C);
        System.out.print(sum+"\n"+sum2);
    }
}