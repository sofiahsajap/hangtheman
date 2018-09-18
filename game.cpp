/* game.cpp */

#include <fstream>
#include "console.cpp"
#include "drawHangman.cpp"
#include "category.cpp"
#include "1player.cpp"
#include "2player.cpp"
using namespace std;

class gameplay{
	int players;
	draw t;
	
	public:
		int instruction ();
		void player1 ();
		void player2 ();
		void startGame ();
};

int gameplay::instruction ()
{
	string play;
	
	t.title();
	cout << "\n\n\n";
	ifstream pl;
	pl.open ("player.txt", ios::in);
	while (pl.good()){
		getline (pl, play, '\n');
		cout << "\t\t\t" << play << endl; 
	}
	cout << "\t\t\t\t\t ";
	cin >> players;
	return players;
}

void gameplay::player1 ()
{
	game1 g1;
	char repeat;
	
	do{
		system ("cls");
		t.title();
		g1.chooseCategory();
		g1.guessing();
		
		cout << "\nPlay Again? (Y/N): ";
		cin >> repeat;
	} while (repeat == 'y' || repeat == 'Y');
}

void gameplay::player2 ()
{
	game2 g2;
	char repeat;
	do{
		system ("cls");
		t.title();
		g2.getWord();
		g2.guessing();
		cout << "\nPlay Again? (Y/N): ";
		cin >> repeat;
	}while (repeat == 'y' || repeat == 'Y');
}
void gameplay::startGame ()
{
	char exit;

	do{
		system ("cls");
		players = instruction ();
		if (players == 1){
			player1 ();
		}
		else if (players == 2){
			player2 ();
		}
		cout << "\n\nExit? (Y/N): ";
		cin >> exit;
	}while (exit == 'n' || exit == 'n');
	
	if (exit == 'y' || exit == 'Y')
	{
		system ("cls");
		t.title();
		cout << "\n\n\n\n\n\n\n\n\n";
		cout << "\t\t\t\tThank you for playing!";
		cout << "\n\n\n\n\n\n\n";
	}
}
