/* category.cpp */

#include <iostream>
#include <string>
#include <time.h>
using namespace std;


class category{
	public:
		category();
		int choice;
		string word;
		string ctg;
		struct catlist{
			string animal[10];
			string fruit[10];
			string country[10];
			string korean[10];
			string hollywood[10];
			string football[10];
		}catlist;
		
		void chooseCategory ();
		int setWord ();
};

category::category()
{
	catlist.animal[0] = "cow";
	catlist.animal[1] = "goat";
	catlist.animal[2] = "cat";
	catlist.animal[3] = "dog";
	catlist.animal[4] = "lion";
	catlist.animal[5] = "jellyfish";
	catlist.animal[6] = "crocodile";
	catlist.animal[7] = "girraffe";
	catlist.animal[8] = "tiger";
	catlist.animal[9] = "elephant";
	
	catlist.fruit[0] = "apple";
	catlist.fruit[1] = "banana";
	catlist.fruit[2] = "lime";
	catlist.fruit[3] = "orange";
	catlist.fruit[4] = "grape";
	catlist.fruit[5] = "papaya";
	catlist.fruit[6] = "mango";
	catlist.fruit[7] = "watermelon";
	catlist.fruit[8] = "durian";
	catlist.fruit[9] = "rambutan";
	
	catlist.country[0] = "malaysia";
	catlist.country[1] = "singapore";
	catlist.country[2] = "thailand";
	catlist.country[3] = "sweden";
	catlist.country[4] = "afghanistan";
	catlist.country[5] = "brazil";
	catlist.country[6] = "colombia";
	catlist.country[7] = "japan";
	catlist.country[8] = "italy";
	catlist.country[9] = "spain";
	
	catlist.korean[0] = "lee min ho";
	catlist.korean[1] = "lee jong suk";
	catlist.korean[2] = "song ji hyo";
	catlist.korean[3] = "song hye kyo";
	catlist.korean[4] = "ha ji won";
	catlist.korean[5] = "park shin hye";
	catlist.korean[6] = "song joong ki";
	catlist.korean[7] = "kim soo hyun";
	catlist.korean[8] = "lee kwang soo";
	catlist.korean[9] = "kim ji won";
	
	catlist.hollywood[0] = "jared leto";
	catlist.hollywood[1] = "leonardo dicaprio";
	catlist.hollywood[2] = "james franco";
	catlist.hollywood[3] = "gerard way";
	catlist.hollywood[4] = "brad pitt";
	catlist.hollywood[5] = "angelina jolie";
	catlist.hollywood[6] = "emma stone";
	catlist.hollywood[7] = "kim kardashian";
	catlist.hollywood[8] = "margot robbie";
	catlist.hollywood[9] = "kendall jenner";
	
	catlist.football[0] = "manchester united";
	catlist.football[1] = "real madrid";
	catlist.football[2] = "liverpool";
	catlist.football[3] = "chelsea";
	catlist.football[4] = "bayern munich";
	catlist.football[5] = "barcelona";
	catlist.football[6] = "arsenal";
	catlist.football[7] = "manchester city";
	catlist.football[8] = "harimau malaya";
	catlist.football[9] = "borussia dortmund";
	
}

void category::chooseCategory()
{
	cout << "\nChoose category: " << endl;
	cout << "1. Animals" << endl;
	cout << "2. Fruits" << endl;
	cout << "3. Countries" << endl;
	cout << "4. Korean Celebrities" << endl;
	cout << "5. Hollywood Celebrities" << endl;
	cout << "6. Football Clubs" << endl;
	cout << "Your Choice: ";
	cin >> choice;
}

int category::setWord ()
{
	int s;
	
	srand (time(NULL));
	s = rand() % 9;			
	
	switch (choice){
		case 1:
			word = catlist.animal[s];
			ctg = "Animal";
			break;
		case 2:
			word = catlist.fruit[s];
			ctg = "Fruit";
			break;		
		case 3:
			word = catlist.country[s];
			ctg = "Country";
			break;
		case 4:
			word = catlist.korean[s];
			ctg = "Korean Celebrity";
			break;
		case 5:
			word = catlist.hollywood[s];
			ctg = "Hollywood Celebrity";
			break;
		case 6:
			word = catlist.football[s];
			ctg = "Football Club";
			break;
		default:
			cout << "\nCategory not found. Try again.";
			return 0;
			break;
	}
}

