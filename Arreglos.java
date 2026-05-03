public class Main {
    public static void main(String[] args) {

        int[] notas = {8, 9, 7, 10, 6};

        // 1. Recorrido
        System.out.print("Recorrido: ");
        for(int i = 0; i < notas.length; i++) {
            System.out.print(notas[i] + " ");
        }

        // 2. Búsqueda
        int buscar = 7;
        for(int i = 0; i < notas.length; i++) {
            if(notas[i] == buscar) {
                System.out.println("\nEncontrado en posicion: " + i);
            }
        }

        // 3. Inserción (simulada)
        notas[2] = 11;
        System.out.println("Nuevo valor en posicion 2: " + notas[2]);

        // 4. Eliminación (simulada)
        for(int i = 2; i < notas.length - 1; i++) {
            notas[i] = notas[i + 1];
        }

        System.out.print("Arreglo despues de eliminar: ");
        for(int i = 0; i < notas.length - 1; i++) {
            System.out.print(notas[i] + " ");
        }
    }
}
