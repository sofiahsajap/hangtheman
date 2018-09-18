/* hangman.cpp */

#include <iostream>
#include "game.cpp"

int main ()
{
	gameplay hangman;
	
	SetWindow (85,40);
	SetConsoleTitle("HANGMAN");
	
	hangman.startGame();
}
