import java.util.Scanner;

public class Main{

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int subjectNum = sc.nextInt();
        double[] score = new double[subjectNum];
        double max = score[0];
        double sum = 0;
        double avg;
        for(int i = 0; i < subjectNum; i++) {
            score[i] = sc.nextInt();

            if(score[i] > max){
                max = score[i];
            }
        }

        for (int i = 0; i < subjectNum; i++) {
            score[i] = (score[i] / max) * 100;
            sum += score[i];
        }
        avg = sum / subjectNum;
        System.out.println(avg);
    }
}
