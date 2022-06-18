import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = 3; //行数を取得する
        int m = 2;//スペース区切りで入力される一行あたりの数字の数を取得する

        int[][] table = new int[n][m];//二次元配列を用意する

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                table[i][j] = sc.nextInt();
            }
        }
        int R = table[0][0];
        int C = table[0][1]-1;

        System.out.println(table[R][C]);
    }
}
