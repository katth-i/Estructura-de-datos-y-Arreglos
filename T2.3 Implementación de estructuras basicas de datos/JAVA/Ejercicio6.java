import java.util.Scanner;

public class Ejercicio6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Ingrese el tamaño del arreglo A: ");
        int n = sc.nextInt();
        int[] A = new int[n];

        System.out.println("Ingrese los elementos de A:");
        for (int i = 0; i < n; i++) {
            A[i] = sc.nextInt();
        }

        System.out.print("Ingrese el tamaño del arreglo B: ");
        int m = sc.nextInt();
        int[] B = new int[m];

        System.out.println("Ingrese los elementos de B:");
        for (int i = 0; i < m; i++) {
            B[i] = sc.nextInt();
        }

        int[] resultado = new int[n];
        int k = 0;

        for (int i = 0; i < n; i++) {
            boolean enB = false;

            for (int j = 0; j < m; j++) {
                if (A[i] == B[j]) {
                    enB = true;
                    break;
                }
            }

            boolean repetido = false;
            for (int r = 0; r < k; r++) {
                if (resultado[r] == A[i]) {
                    repetido = true;
                    break;
                }
            }

            if (enB && !repetido) {
                resultado[k] = A[i];
                k++;
            }
        }

       
        if (k == 0) {
            System.out.println("No hay interseccion entre los arreglos.");
        } else {
            System.out.print("Interseccion: ");
            for (int i = 0; i < k; i++) {
                System.out.print(resultado[i] + " ");
            }
        }

        sc.close();
    }
}