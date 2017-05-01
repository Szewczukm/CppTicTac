/*
 * main.cpp
 *
 *  Created on: May 1, 2017
 *      Author: jasper
 */
#include <iostream>
#include <vector>
#include "Player.h"
using namespace std;

void Player::placePiece(){
	cout << "place: " << this->getPiece() << endl;
}

int main(){
	vector<Player> players(10);
	for(int i=0;i<10;i++){
		Player temp(66+i);
		players.push_back(temp);
		cout << players.at(i).getID() << endl;
	}
	return 0;
}



