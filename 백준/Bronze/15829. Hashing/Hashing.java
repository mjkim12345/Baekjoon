import java.io.*;

public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int L =Integer.parseInt(br.readLine());
        
        char[] alpha = new char[L];
        String st=br.readLine();
        for(int i=0; i<L; i++){
            alpha[i]=st.charAt(i);
        }
        
        int[] al2 = new int[L];
        for(int i =0; i<L; i++){
            for(int j='a';j<='z'; j++){
                if(alpha[i]==j){
                    al2[i]= j-96;
                }
            }
        }
        
        int sum =0;
        for(int i=0; i<L; i++){
            sum += al2[i] * Math.pow(31,i);
        }
        System.out.println(sum);
    }
}