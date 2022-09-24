import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        int a = 0;
        int b= 0;
        
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        
        if(a < b){
            System.out.print("<");
        }
          if(a > b){
            System.out.print(">");
        }
          if(a == b){
            System.out.print("==");
        }
    }
}