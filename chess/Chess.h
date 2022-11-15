#pragma once
#include <iostream>

using namespace std;
class piece
{
protected :
enum Piece { KING, QUEEN, BISHOP, KNIGHT, ROOK, PAWN };
enum Color { WHITE, BLACK};

};

class Board : piece
{
private : 
	Square square[8][8];
	Color side = WHITE;
	void printBoard();

	bool makeMove(int x1, int y1, int x2, int y2);
	bool moveKing(Square* thisKing, Square* tuda);
	bool moveQueen(Square* thisQueen, Square* tuda);
	bool moveBishop(Square* thisBishop, Square* tuda);
	bool moveKnight(Square* thisKnight, Square* tuda);
	bool moveRook(Square* thisRook, Square* tuda);
	bool movePawn(Square* thisPawn, Square* tuda);
	
public: 
	Square getSquare(int x, int y) 
	{
		return square[x][y];
	}
	void setSquare(Square s, int x, int y) 
	{
		square[x][y] = s;
	}

	bool doMove();
	void setBoard(); //встановить дошку
	bool play_a_Game();
};

class Square : piece
{
private :
	Piece piece;
	Color color;
	int x, y;
public:
	int getX() 
	{ 
		return x; 
	}
	int getY() 
	{ 
		return y; 
	}
	void setX(int xx) 
	{ 
		x = xx; 
	}
	void setY(int yy) 
	{ 
		y = yy; 
	}

	Piece getPiece();
	Color getColor();

	void setSpace(Square*); //встановить місце для фігури
	void setEmpty(); //тіпа те місце, з якого фігура пішла, але поки під питанням чи це потрібно...
	void setPieceAndColor(Piece, Color); //встановить фігуру та колір
	
};


