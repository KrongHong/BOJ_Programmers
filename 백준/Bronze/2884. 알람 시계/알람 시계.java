import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int hour = cin.nextInt();
        int min = cin.nextInt();

        if(min >= 45){
            System.out.println(hour + " " + (min-45));
        } else if (min < 45) {
            if(hour == 0)
            {
                hour = 23;
            }else{
                hour = hour - 1;
            }
            min = 60 + (min - 45);
            System.out.println(hour + " " + min);
        }
    }
}
