/* Honor Pledge:
*
* I pledge that I have neither given nor 
* received any help on this assignment.
*
* Youngjon
*/

#include <iostream>
#include <string>
#include <stdlib.h> 
#include "Player.h"

using namespace std;


int main(){
	int response = 0;
	//Player player;
	Player* player = new Player();
	cout << "Welcome to our CSCI 240 Roster Editor!" << endl;
	while( response != 3){
		cout << endl;
		cout << "1. Add New Player" << endl;
		cout << "2. View Player" << endl;
		cout << "3. Exit Program" << endl;
		cout << endl;
		cout << "Please enter your selection: ";
		cin >> response;
		cout << endl;
		if( response == 1){
			int check = 0;
			//Get new player details
			string first = " ";
			string last = " ";
			int num = 0;
			cout << endl;
			cout << "Please enter a first name: ";
			cin >> first;
			cout << endl;
			cout << "Please enter a last name: ";
			cin >> last;
			cout << endl;
			cout << "Please enter a number(1-99): ";
			cin >> num;
			cout << endl;
			
			// check valid entry
			if ( num > 99 || num < 1){
				cout << endl;
				cout << "Not an entry between 1 and 99! ";
				cout << endl;
				while( num > 99 || num < 1){
					cout << endl;
					cout << "Please enter a number(1-99): ";
					cin >> num;
					cout << endl;
					if (num > 99 || num < 1){
						cout << endl;
						cout << "Not an entry between 1 and 99! ";
						cout << endl;
						continue;
					}
				}
				
			}
			
			//Check if number open
			check = player->check_slot(num);
			if ( check == 1){
				while( check == 1){
					cout << "Number is already taken!" << endl;
					cout << endl;
					cout << "Please enter a number(1-99): ";
					cin >> num;
					cout << endl;
					check = player->check_slot(num);
				}
			}else{
				player->set_firstname(first, num);
				player->set_lastname(last, num);
				player->set_jerseynumbers(num);
				cout << "**Player Created**" << endl;
				cout << endl;
				continue;
			}
			
		}else if( response == 2){
			cout << "**IUPUI Football Roster**" << endl;
			player->print_roster();
			cout << "*************************" << endl;
			continue;
		}else if( response == 3){
			
			cout << "Thank you for using our program - Goodbye!" << endl;
			break;
			
		}else{
			cout << "Invalid Choice! Please select Option #1, #2, or #3." << endl;
			cout << "Please enter your selection: ";
			cin >> response;
			continue;
		}
		
	
	}
	return 0;
}