/* 1player.cpp */

#include <iostream>
#include <string>
#include <cstdlib>
//#include "console.cpp"
//#include "drawHangman.cpp"
//#include "category.cpp"

using namespace std;

class game1:public category{
	public:
		string underscore;
		string copy;
		string guess;
		int wrong;
	
		void setGuessWord ();
		void guessing ();
};



void game1::setGuessWord()
{
	
	for (int i=0; i!=word.length(); i++){
		if (word.at(i) == ' '){
			underscore += " ";
		}
		else{
			underscore += "_";
		}
	}
}

void game1::guessing()
{
	int back;
	draw hang;
	back = setWord ();
	if (back == 0)
		return;
	
	setGuessWord();
	
	copy = word;
	wrong = 0;
	
	while (1){
		system ("cls");
		hang.title();
		cout << "\n\n";
		cout << "Category: " << ctg << "\n\n";
		if (wrong == 4){
			hang.rightleg();
			cout << "\n\n******************************************";
			cout << "\n\nYou Lose! The word was: " << word << endl;
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
			cout << "\n\n******************************************";
			cout << "\n\nYou win!" << endl;
			break;
		}
		
		cout << "Guess a letter or a word " << endl;
		cin >> guess;
		
		if (guess.length() > 1){
			if (guess == word){
				cout << "\n\n******************************************";
				cout << "\nThat's right!! You win!!" << endl;
				break;
			}
			else{
				cout << "Wrong word. Try Again." << endl;
				wrong++;
			}
		}
		
		else if (copy.find(guess) != -1){
			while (copy.find(guess) != -1){
				underscore.replace (copy.find(guess), 1, guess);
				copy.replace (copy.find(guess), 1 , "_");
			}
		}
		else {
			cout << "That's Wrong!" << endl;
			wrong++;
		}
		cout << endl;
	}
	underscore.clear();
	copy.clear();
}


