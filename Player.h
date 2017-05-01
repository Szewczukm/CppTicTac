/*
 * Player.h
 *
 *  Created on: May 1, 2017
 *      Author: jasper
 */

#ifndef PLAYER_H_
#define PLAYER_H_

class Player{
public:
//	Player(char piece);
	Player(char piece) : currentID(ID++){
		setPiece(piece);
	}
	void toString();
	void placePiece();
	void setPiece(char piece){
		this->piece = piece;
	}
	char getPiece() const {
		return piece;
	}
	int getID(){
		return currentID;
	}
private:
	char piece;
	static int ID;
	int currentID;
};

int Player::ID = 0;



#endif /* PLAYER_H_ */
