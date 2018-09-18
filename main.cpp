int instruction ()
{
	draw m;
	string play;
	int players;
	
	m.title();
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

void player1 ()
{
	game1 g1;
	draw m;
	char repeat;
	
	do{
		system ("cls");
		m.title();
		g1.chooseCategory();
		g1.guessing();
		
		cout << "\nPlay Again? (Y/N): ";
		cin >> repeat;
	} while (repeat == 'y' || repeat == 'Y');	
	
}

void player2 ()
{
	game2 g2;
	draw h;
	char repeat;
	do{
		system ("cls");
		h.title();
		g2.getWord();
		g2.guessing();
		cout << "\nPlay Again? (Y/N): ";
		cin >> repeat;
	}while (repeat == 'y' || repeat == 'Y');
	
}

int main ()
{	
	SetWindow (85,40);
	SetConsoleTitle("HANGMAN");
	int player;
	char exit;
	draw t;

	do{
		system ("cls");
		player = instruction ();
		if (player == 1){
			player1 ();
		}
		else if (player == 2){
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
		return 0;
	}
}
