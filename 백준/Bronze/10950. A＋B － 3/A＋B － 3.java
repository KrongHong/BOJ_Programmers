import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);

        int N = cin.nextInt();
        int sum = 0;
        for(int i = 0; i < N; i++){
            int a = cin.nextInt();
            int b = cin.nextInt();
            sum = a + b;
            System.out.println(sum);
        }
    }
}
