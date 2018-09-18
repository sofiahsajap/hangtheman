/* 2player */


#include <iostream>
#include <string>
#include <cstdlib>
//#include "drawHangman.cpp"

using namespace std;

class game2{
	public:
		string word;
		string guess;
		string letter;
		string underscore;
		int wrong;
		draw hang;
		
		void getWord ();
		void guessing ();
};

void game2::getWord()
{
	
	cout << "\n\nPLAYER 1" << endl;
	cout << "\n\nEnter the word for player 2 to guess" << endl;
	cin.ignore();
	getline (cin, word);
	
	for (int i=0; i!=word.length(); i++){
		if (word.at(i) == ' '){
			underscore += " ";
		}
		else{
			underscore += "_";
		}
	}
}

void game2::guessing()
{
	
	letter = word;
	wrong = 0;
	
	while (1){
		system ("cls");
		hang.title();
		cout << "\n\nPLAYER 2" << endl;
		cout << "\n\n";
		if (wrong == 4){
			hang.rightleg();
			cout << "\n\n********PLAYER 2 LOSE!*********";
			cout << "\nThe word was: " << word << endl;
			break;
		}
				
		else if (wrong == 3)
			hang.righthand();
		else if (wrong == 2)
			hang.body();
		else if (wrong == 1)
			hang.head();
			
		cout << underscore << endl;
		cout << "There are " << word.length() << " letters with spaces" << endl;
		cout << "You have " << 4 - wrong << " more tries left" << endl;
			
		if (underscore == word){
			cout << "\n\n*********PLAYER 2 WIN!*********" << endl;
			break;
		}
		
		cout << "Guess a letter or a word " << endl;
		getline (cin, guess);
		
		if (guess.length() > 1){
			if (guess == word){
				cout << "\nThat's right!!" << endl;
				cout << "\n\n*********PLAYER 2 WIN!*********" << endl;
				break;
			}
			else{
				cout << "Wrong word. Try Again." << endl;
				wrong++;
			}
		}
		
		else if (letter.find(guess) != -1){
			while (letter.find(guess) != -1){
				underscore.replace (letter.find(guess), 1, guess);
				letter.replace (letter.find(guess), 1 , "_");
			}
		}
		else {
			cout << "That's Wrong!" << endl;
			wrong++;
		}
		cout << endl;
	}

}

/*int main ()
{
	game2 g2;
	g2.getWord();
	g2.guessing();
}*/
