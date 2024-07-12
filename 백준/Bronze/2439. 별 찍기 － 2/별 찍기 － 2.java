import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);

        int starCount = cin.nextInt();
        for (int i = starCount; i > 0; i--){
            for (int j = i-1; j > 0; j--){
                System.out.print(" ");
            }
            for (int k = i-1; k < starCount; k++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
