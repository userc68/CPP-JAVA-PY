public class main {
    public static void main(String[] args) {
        int iterations = 10000000;
        long startTime = System.nanoTime();
        for (int i = 0; i < iterations; i++) {}
        long endTime = System.nanoTime();
        long duration = endTime - startTime;
        double seconds = duration / 1_000_000_000.0;
        System.out.printf("Execution time: %.6f seconds%n", seconds);
    }
}
