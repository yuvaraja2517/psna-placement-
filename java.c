import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int p = sc.nextInt();
        int y = sc.nextInt();
        int d = 0;
        int count = 0;
        while (p>0){
            d = p%10;
            if(d==y)
                count++;
            p = p/10;
            
        }
        System.out.println(count);
        sc.close();
    }
}
