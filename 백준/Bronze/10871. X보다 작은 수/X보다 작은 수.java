import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner cin = new Scanner(System.in);
        int arraySize = cin.nextInt();
        int standardNumber = cin.nextInt();
        int[] array = new int[arraySize];

        for(int i = 0; i < arraySize; i++)
        {
            array[i] = cin.nextInt();
        }

        for(int i = 0; i < arraySize; i++){
            if(array[i] < standardNumber){
                System.out.print(array[i] + " ");
            }
        }
    }
}
