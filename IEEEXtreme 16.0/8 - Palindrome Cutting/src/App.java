import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int M = sc.nextInt();

        int[] arreglo = new int[N];

        for(int izquierdo = 0,  derecho = N ; izquierdo <= derecho  ; izquierdo++,derecho--){
            if(arreglo[izquierdo] == arreglo[derecho]){
                
            }                
        }

        if ((N % 2) == 0) {
            
        } else {

        }

        System.out.println("Hello, World!");

        sc.close();
    }
}
