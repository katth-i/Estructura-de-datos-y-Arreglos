import java.util.LinkedList;
import java.util.Queue;

public class cola {
    public static void main(String[] args) {
        Queue<Integer> cola = new LinkedList<>();

        cola.add(10);
        cola.add(20);
        cola.add(30);

        System.out.println("Elemento eliminado: " + cola.poll());
        System.out.println("Nuevo frente: " + cola.peek());
    }
}
