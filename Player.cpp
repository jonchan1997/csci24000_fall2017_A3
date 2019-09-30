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

void Player::set_firstname( string name, int jerseyNum){
	firstName[jerseyNum] = name;
}
void Player::set_lastname( string name, int jerseyNum){
	lastName[jerseyNum]= name;
}
void Player::set_jerseynumbers(int jerseyNum){
	jerseyNumbers[jerseyNum] = 1;
}
int Player::check_slot( int jerseyNum){
	if( jerseyNumbers[jerseyNum] != 0){
		return 1;
	}
}
void Player::print_roster(){
	for( int i= 0; i<101; i++){
		if( jerseyNumbers[i] == 1){
			cout << i;
			cout << ")";
			cout <<firstName[i] +" "+ lastName[i] << endl;
			cout << endl;
		}
	}
}
string Player::return_firstname(){
	return firstName[101];
}



