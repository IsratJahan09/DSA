import java.util.Scanner;
       
public class Number{
    
    static String kangaroo(int x1, int v1 , int x2, int v2){
        int newx1 = x1;
        int newx2 = x2;
        if(v1 < v2){
            return "NO";
        }
        while(newx1 < newx2){
            newx1 = newx1 + v1;
            newx2 = newx2 + v2;     
            if(newx1 == newx2)
            return "YES";
        }
        return "NO";
    } 
    
    
    
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int[] arr = new int[4];
        for(int i =0 ; i < 4; i++){
            arr[i] = scanner.nextInt();
        }
        int x1 = arr[0];
        int v1 = arr[1];
        int x2 = arr[2];
        int v2 = arr[3];
        
        System.out.println(kangaroo(x1, v1, x2, v2));
    }
}
