// Purpose: Rearrange numbers using byvals
// Title: Rearrange Lab
// Programmer: Nate Sobol
// Last Modified: 11/24/15

#include <iostream>
using namespace std;

void mySort(int &x, int &y, int &z);
void printTitle();
void mySwap(int &x, int &y);
void printTable();

void main(){

	// Declaration
	int x = 1, y = 2, z = 3;

	// Title
	printTitle();

	// Output
	cout << "Before the call x = " << x << " y = " << y << " z = " << z << "\n";
	cout << x << y << z << "\n";
	mySort(x, y, z);
	cout << "After the call x = " << x << " y = " << y << " z = " << z << "\n";
	cout << x << y << z << "\n\n";

	x = 1, y = 3, z = 2;
	cout << "Before the call x = " << x << " y = " << y << " z = " << z << "\n";
	cout << x << y << z << "\n";
	mySort(x, y, z);
	cout << "After the call x = " << x << " y = " << y << " z = " << z << "\n";
	cout << x << y << z << "\n\n";

	x = 2, y = 1, z = 3;
	cout << "Before the call x = " << x << " y = " << y << " z = " << z << "\n";
	cout << x << y << z << "\n";
	mySort(x, y, z);
	cout << "After the call x = " << x << " y = " << y << " z = " << z << "\n";
	cout << x << y << z << "\n\n";

	x = 2, y = 3, z = 1;
	cout << "Before the call x = " << x << " y = " << y << " z = " << z << "\n";
	cout << x << y << z << "\n";
	mySort(x, y, z);
	cout << "After the call x = " << x << " y = " << y << " z = " << z << "\n";
	cout << x << y << z << "\n\n";

	x = 3, y = 1, z = 2;
	cout << "Before the call x = " << x << " y = " << y << " z = " << z << "\n";
	cout << x << y << z << "\n";
	mySort(x, y, z);
	cout << "After the call x = " << x << " y = " << y << " z = " << z << "\n";
	cout << x << y << z << "\n\n";

	x = 3, y = 2, z = 1;
	cout << "Before the call x = " << x << " y = " << y << " z = " << z << "\n";
	cout << x << y << z << "\n\n";
	mySort(x, y, z);
	cout << "After the call x = " << x << " y = " << y << " z = " << z << "\n";
	cout << x << y << z << "\n\n";

	system("pause");
	
	printTable();
}

void printTitle(){
	cout
		<< "\n               Lab on Driver testing the rearrange function.             "
		<< "\n                               by Nate Sobol                         \n\n";
}
void mySwap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

void mySort(int &x, int &y, int &z){ 
	if (x > y)
		mySwap(x, y);
	if (x > z)
		mySwap(x, z);
	if (y > z)
		mySwap(y, z);
}

void printTable(){

	// Declaration
	int x = 1, y = 2, z = 3;

	// Title
	cout 
		<< "\n\n\tBETTER way to test (using a for loop and a table format)"
		<< "\n\n\tx\ty\tz\n"
		<< "\t=====================\n";

	// changes values of xyz depending on iteration
	for (int i = 1; i <= 6; i++){
		switch (i){
		case 1:		x = 1, y = 2, z = 3;	break;
		case 2:		x = 1, y = 3, z = 2;	break;
		case 3:		x = 2, y = 1, z = 3;	break;
		case 4:		x = 2, y = 3, z = 1;	break;
		case 5:		x = 3, y = 1, z = 2;	break;
		case 6:		x = 3, y = 2, z = 1; 
		}

		// Output
		cout << "Start:  " << x << "\t" << y << "\t" << z << "\t\n";
		mySort(x, y, z);
		cout << "End:    " << x << "\t" << y << "\t" << z << "\t\n\n";
	}

	// Cleanup
	system("pause");
}