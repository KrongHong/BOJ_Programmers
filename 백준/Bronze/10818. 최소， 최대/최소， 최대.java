import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);

        int arraySize = cin.nextInt();
        int[] array = new int[arraySize];
        for(int i = 0; i < arraySize; i++){
            array[i] = cin.nextInt();
        }
        int min = array[0];
        int max = array[0];

        for(int i = 0; i < arraySize; i++){
            if(array[i] < min){
                min = array[i];
            }
            if(array[i] > max){
                max = array[i];
            }
        }
        System.out.print(min + " " + max);
    }
}
