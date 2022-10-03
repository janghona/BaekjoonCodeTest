import java.util.Scanner;
import java.util.Arrays;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int a = sc.nextInt();
        int arr[] = new int[a];
        
        for(int i=0; i < a;i++){
           arr[i] = sc.nextInt();
        }
        
        int min = Arrays.stream(arr).min().getAsInt();
        int max = Arrays.stream(arr).max().getAsInt();
        
        System.out.printf("%d %d",min,max); 
                        
  }
}