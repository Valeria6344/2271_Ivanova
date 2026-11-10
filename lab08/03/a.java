public class Main {
    public static void main(String[] args) {
        int[][] a = {
            {1, 0, 3},
            {4, 0, 6},
            {0, 8, 9}
        };
        search:
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                if (a[i][j] == 0) {
                    System.out.println("Найден ноль: a[" + i + "][" + j + "]");
                    break search;
                }
            }
        }
    }
}
