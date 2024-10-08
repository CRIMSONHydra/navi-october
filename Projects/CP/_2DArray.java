import java.util.*;
public class _2DArray {

    static int[][] MatrixInput() {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int m = scn.nextInt();
        int[][] matrix = new int[n][m];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                matrix[i][j] = scn.nextInt();
            }
        }
        return matrix;
    }
    
    static void PrintMatrix(int[][] matrix) {
        for(int i = 0; i < matrix.length; i++) {
            for(int j = 0; j < matrix[0].length; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
 


    public static void main(String [] args) {

        Scanner scn = new Scanner(System.in);
        int r = scn.nextInt();
        int c = scn.nextInt();
        int [][] matrix = new int[r][c];
        
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                matrix [i][j] = scn.nextInt();
            }
        }

        System.out.println("____________");


        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }

        System.out.println("____________");


        for(int i = r - 1 ; i >= 0; i--) {
            for(int j = 0; j < c; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }

        System.out.println("____________");


        for(int i = r - 1 ; i >= 0; i--) {
            for(int j = c - 1; j >= 0; j--) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }

        System.out.println("____________");


        for(int i = 0; i < c; i++) {
            for(int j = 0; j < r; j++) {
                System.out.print(matrix[j][i] + " "); // wrong code fix it arrindexoutofboud 
            }
            System.out.println();
        }

        System.out.println("____________");


        for(int i = r - 1; i >= 0; i--) {
            for(int j = 0; j < c; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }

        System.out.println("____________");



    }
    
}
