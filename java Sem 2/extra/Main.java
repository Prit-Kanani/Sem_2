public class Main {
    public static void main(String[] args) {
        int rows = 5; // You can change the number of rows as per your requirement

        // Outer loop for rows
        for (int i = 1; i <= rows; i++) {
            // Print spaces for alignment
            for (int j = i; j < rows; j++) {
                System.out.print(" ");
            }

            // Print asterisks for the triangle
            for (int k = 1; k <= (2 * i - 1); k++) {
                if (i == 5 && (k != 1 && k != (2 * i - 1))) {
                    System.out.print(" ");
                } else {
                    System.out.print("*");
                }
            }

            // Move to the next line
            System.out.println();
        }
        
        // Outer loop for rows (inverted triangle)
        for (int i = rows - 1; i >= 1; i--) {
            // Print spaces for alignment
            for (int j = i; j < rows; j++) {
                System.out.print(" ");
            }

            // Print asterisks for the inverted triangle
            for (int k = 1; k <= (2 * i - 1); k++) {
                if (k == 1 || k == (2 * i - 1)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }

            // Move to the next line
            System.out.println();
        }
    }
}
