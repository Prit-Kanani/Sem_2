import java.util.Scanner;

public class cricket {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int score = 0;
        int overs = 0;
        int wickets = 0;

        System.out.println("Cricket Scoreboard");

        while (overs < 10 && wickets < 10) {
            System.out.println("Current Score: " + score + "/" + wickets + " in " + overs + " overs");

            System.out.print("Enter runs scored in the next over (0-6): ");
            int runs = scanner.nextInt();

            if (runs < 0 || runs > 6) {
                System.out.println("Invalid input. Runs should be between 0 and 6.");
                continue;
            }

            score += runs;
            overs++;

            System.out.print("Any wicket fallen in this over? (Enter 1 for Yes, 0 for No): ");
            int wicketFallen = scanner.nextInt();

            if (wicketFallen == 1) {
                wickets++;
            }
        }

        System.out.println("\nFinal Score: " + score + "/" + wickets + " in " + overs + " overs");
        System.out.println("Game Over!");
    }
}