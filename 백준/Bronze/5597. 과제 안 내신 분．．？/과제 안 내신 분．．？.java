import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);

        int[] StudentArray = new int[31];

        for (int j = 1; j < 29; j++){
            int num = cin.nextInt();
            StudentArray[num] = 1;
        }

        for(int i = 1; i < StudentArray.length; i++){
            if(StudentArray[i] != 1){
                System.out.println(i);
            }
        }
    }
}
