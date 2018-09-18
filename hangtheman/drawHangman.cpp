/* drawHangman.cpp */

#include <iostream>
#include <fstream>

using namespace std;

class draw{
	public:
		string line;
		void title ();
		void head ();
		void body ();
		void righthand ();
		void rightleg ();
};

void draw::title()
{
	ifstream title;
	title.open ("title.txt", ios::in);
	while (title.good()){
		getline (title, line, '\n');
		cout << "\t\t" << line << endl;	
	}
	line.clear();
}

void draw::head()
{
	ifstream head;
	head.open ("head.txt", ios::in);
	while (head.good()){
		getline (head, line, '\n');
		cout << "\t\t\t\t\t\t" << line << endl;
	}
	line.clear();
}

void draw::body ()
{
	ifstream body;
	body.open ("body.txt", ios::in);
	while (body.good()){
		getline (body, line, '\n');
		cout << "\t\t\t\t\t\t" << line << endl;
	}
	line.clear();
}

void draw::righthand ()
{
	ifstream righth;
	righth.open ("righthand.txt", ios::in);
	while (righth.good()){
		getline (righth, line, '\n');
		cout << "\t\t\t\t\t\t" << line << endl;
	}
	line.clear();
}

void draw::rightleg ()
{
	ifstream rightl;
	rightl.open ("rightleg.txt", ios::in);
	while (rightl.good()){
		getline (rightl, line, '\n');
		cout << "\t\t\t\t\t\t" << line << endl;
	}
	line.clear();
}
