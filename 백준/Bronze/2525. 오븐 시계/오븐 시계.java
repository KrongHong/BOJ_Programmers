import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int currentlyHour = cin.nextInt();
        int currentlyMin = cin.nextInt();
        int Inputmin = cin.nextInt();
        int min = 0;

        if (currentlyMin + Inputmin < 60) {
            min = currentlyMin + Inputmin;
            System.out.println(currentlyHour + " " + min);
        } else if (currentlyMin + Inputmin >= 60) {
            min = currentlyMin + Inputmin;
            int addHour = min / 60;
            int addMin = min % 60;
            currentlyHour += addHour;
            if(currentlyHour >= 24){
                currentlyHour = currentlyHour % 24;
            }
            System.out.println(currentlyHour + " " + addMin);
        }
    }
}
