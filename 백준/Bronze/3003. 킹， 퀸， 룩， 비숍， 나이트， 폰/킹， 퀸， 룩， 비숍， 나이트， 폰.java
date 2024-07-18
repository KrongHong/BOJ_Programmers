import java.util.Scanner;


public class Main{

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int k = 1; int q = 1; int l = 2; int b =2; int n = 2; int p = 8;
        int[] piece = new int[6];

        for (int i = 0; i < 6 ; i++){
            piece[i] = sc.nextInt();
        }

        System.out.print(k - piece[0] + " ");
        System.out.print(q - piece[1] + " ");
        System.out.print(l - piece[2] + " ");
        System.out.print(b - piece[3] + " ");
        System.out.print(n - piece[4] + " ");
        System.out.print(p - piece[5] + " ");
    }
}
