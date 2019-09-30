/* Honor Pledge:
*
* I pledge that I have neither given nor 
* received any help on this assignment.
*
*  youngjon
*/ 

#ifndef PLAYER
#define PLAYER

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


class Player
{
private:
	string firstName[101];
	string lastName[101];
	int jerseyNumbers[101] = {0};
	
public:
	void set_firstname( string name, int jerseyNum);
	void set_lastname( string name, int jerseyNum);
	void set_jerseynumbers(int jerseyNum);
	int check_slot( int jerseyNum);
	void print_roster();
	string return_firstname();
	
	
	

};

#endif