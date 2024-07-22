import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int M = sc.nextInt();

        int[][] aMtrx = new int[N][M];
        int[][] bMtrx = new int[N][M];
        int[][] resultMtrx = new int[N][M];
        for (int i = 0; i < N; i++){
            for (int j = 0; j < M; j++){
                aMtrx[i][j] = sc.nextInt();
            }
        }

        for (int i = 0; i < N; i++){
            for (int j = 0; j < M; j++){
                bMtrx[i][j] = sc.nextInt();
            }
        }

        for (int i = 0; i < N; i++){
            for (int j = 0; j < M; j++){
                resultMtrx[i][j] = aMtrx[i][j] + bMtrx[i][j];
                System.out.print(resultMtrx[i][j] + " ");
            }
            System.out.println();
        }
    }
}