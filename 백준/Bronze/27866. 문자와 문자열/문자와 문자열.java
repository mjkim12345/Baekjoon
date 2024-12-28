import java.io.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String S = br.readLine();
        int i =Integer.parseInt(br.readLine());
        
        char c = S.charAt(i-1);
        System.out.print(c);
        
        
    }
}