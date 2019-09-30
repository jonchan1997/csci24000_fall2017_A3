// Honor Pledge:
//
// I pledge that I have neither given nor 
// received any help on this assignment.
//
// youngjon

public class Player{
	private String[] fName = new String[101];
	private String[] lName = new String[101];
	private int[] jerseyNum = new int[101];
	
	public Player(String fName, String lName, int numBer){
		if (this.jerseyNum[numBer] == 0){
			this.fName[numBer] = fName;
			this.lName[numBer] = lName;
			this.jerseyNum[numBer] = 1;
		}
	}
	
}