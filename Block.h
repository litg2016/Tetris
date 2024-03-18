#pragma once
#include<amp_graphics.h>
class Block {

public:
	Block();
	void drop();
	void moveLeftRight(int offset);
	void retate(); //Ðý×ª
	void draw(int leftMargin, int topMargin);
};