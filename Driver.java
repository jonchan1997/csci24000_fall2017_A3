// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// youngjon
import java.io.*;
import java.util.Scanner;
import Player;

public class Driver {
	private static Scanner scanner = new Scanner( System.in );
	Player player = new Player();
	
	public static void main(String[] args){
		int response = 1;
		while(response != 3){
			System.out.println("Welcome to our CSCI 240 Roster Editor!");
			System.out.println("");
			System.out.println("1) Add New Player");
			System.out.println("2) View Player(s) ");
			System.out.println("3) Exit Program");
			System.out.println("");
			System.out.print("Please enter your selection:");
			response = scanner.nextInt();
			System.out.println("");
			if ( response == 1){
				System.out.print("Please enter a first name: ");
				String fName = scanner.nextLine();
				System.out.println("");
				System.out.print("Please enter a last name: ");
				String lName = scanner.nextLine();
				System.out.println("");
				System.out.print("Please enter a number (1-99): ");
				int jNumber = scanner.nextInt();
				System.out.println("");
				player.Player(fName, lName, jNumber);
			}
			else if( response == 2){
			}
			else if(response == 3){
				System.out.println("Thank you for using our program - Goodbye!");
				break;
			} else{
				System.out.println("Invalid Choice! Please select Option #1, #2, or #3.");
			}
		}
	}
}