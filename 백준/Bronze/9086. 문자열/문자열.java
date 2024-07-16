import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();
        String[] word = new String[num];

        for(int i = 0 ; i < num; i++){
            String str = sc.next();
            word[i] = str.substring(0,1) + str.substring(str.length()-1, str.length());
        }

        for (int i = 0; i < num; i++){
            System.out.println(word[i]);
        }
    }
}
