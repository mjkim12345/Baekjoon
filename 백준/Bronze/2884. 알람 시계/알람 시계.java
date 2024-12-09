import java.util.*;
import java.io.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int hour = Integer.parseInt(st.nextToken());
        int minute = Integer.parseInt(st.nextToken());
        
        if(hour>=1){
            if(minute>=45){
                minute -= 45;
            }else{
                hour -= 1;
                minute = 60 - (45-minute);
            }
        }else if (hour<1 && minute>=45){
            minute -= 45;
        }else {
            hour=23;
            minute = 60 - (45-minute);
        }
        System.out.print(hour+" "+minute);
    }
}