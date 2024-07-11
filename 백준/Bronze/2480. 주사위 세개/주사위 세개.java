import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int max = 0;
        int sum = 0;
        int[] dice = new int[3];
        for (int i = 0; i < dice.length; i++){
            dice[i] = cin.nextInt();

            if(dice[i] > max){
                max = dice[i];
            }
        }

        if((dice[0] != dice[1])&&
                (dice[1] != dice[2]) && (dice[0] != dice[2])){
            sum = max * 100;
            System.out.println(sum);

        } else if ((dice[0] == dice[1])&&
                (dice[1] == dice[2]) && (dice[0] == dice[2])) {
            sum = 10000 + max * 1000;
            System.out.println(sum);

        }else {
            if(dice[0] == dice[1]){
                sum = 1000 + dice[0] * 100;
                System.out.println(sum);
            } else if (dice[1] == dice[2]) {
                sum = 1000 + dice[1] * 100;
                System.out.println(sum);
            } else if (dice[0] == dice[2]) {
                sum = 1000 + dice[0] * 100;
                System.out.println(sum);
            }
        }


    }
}
