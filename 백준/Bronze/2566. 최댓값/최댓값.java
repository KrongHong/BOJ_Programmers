import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] mtrx = new int[9][9];
        int max = 0;
        int N = 1; int M = 1;

        for (int i = 0; i < mtrx.length; i++){
            for (int j = 0; j < mtrx[0].length; j++){
                mtrx[i][j] = sc.nextInt();

                if(mtrx[i][j] > max){
                    max = mtrx[i][j];
                    N = i+1;
                    M = j+1;
                }
            }
        }
        System.out.println(max);
        System.out.println(N + " " + M);
    }
}
