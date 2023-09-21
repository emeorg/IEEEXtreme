import java.util.Arrays;
import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int M = sc.nextInt();

        long[] arreglo_trabajos_horas = new long[N];
        long[] arreglo_trabajadores = new long[M];
        
        for (int a = 0; a < N; a++) {
            arreglo_trabajos_horas[a] = (long)Math.pow(2, sc.nextInt());
        }

        Arrays.sort(arreglo_trabajos_horas);
        
        for(int a = 0; a < N; a++){
            
        }

        for(int a = 0; a < M; a++){
            if(arreglo_trabajadores[a]-1 == 0 ){
                
            }
        }


        System.out.println("Hello, World!");




        sc.close();
    }
}
