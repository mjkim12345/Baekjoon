import java.util.*;
import java.io.*;

public class Main{
    public static void main(String[] arge) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        HashSet<Integer> set = new HashSet<>();
        int[] a = new int[10];
        
        for(int i =0; i<10; i++){
            a[i]=Integer.parseInt(br.readLine())%42;
            set.add(a[i]);
        }
        System.out.print(set.size());
    }
}