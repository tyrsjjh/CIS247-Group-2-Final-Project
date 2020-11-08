//------------------------------------------------------
//Purpose:  This class will hold Menu methods
//			for differnt menues used in the program
//
//------------------------------------------------------


#include "MenuHandler.h"
#include "Util.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//Globally used varables
char userChoice;

//Main Menu
void mainMenu()
{
	do
	{
		do
		{
			cout << "Main Menu: " << endl;
			cout << "1)Menu Opt 1" << endl;
			cout << "2)Menu Opt 2" << endl;
			cout << "3)Menu Opt 3" << endl;
			cout << "4)Menu Opt 4" << endl;
			cout << "5)Inv Management" << endl;
			cout << "6)Exit" << endl;
			cout << "Please enter you choice: ";
			cin >> userChoice;
			cin.ignore();
			userChoice = toupper(userChoice);
		} while (!checkValidInput(1, 6, userChoice));
	
		switch (userChoice)
		{
		case'1':
			system("cls");
			//code to submenu
			break;
		case'2':
			system("cls");
			//code to submenu
			break;
		case'3':
			system("cls");
			//code to submenu
			break;
		case'4':
			system("cls");
			//code to submenu
			break;
		case'5':
			system("cls");
			//code to submenu
			break;
		case'6':
			system("cls");
			break;
		default:
			cout << "Please enter a valid choice!" << endl;
		}
	} while (userChoice != '6');
}




//Internal Parts Menu
void internalPartsMenu()
{
	
	cout << "Internal Parts Menu" << endl;
	cout << "1)View GPU's" << endl;
	cout << "2)View CPU's" << endl;
	cout << "4)View RAM" << endl;
	cout << "5)View MOBO's" << endl;
	cout << "6 Back to main menu" << endl;
	cin >> userChoice;
	cin.ignore();
	userChoice = toupper(userChoice);

	switch (userChoice)
	{
	case '1':
		//code to submenu
		break;
	case '2':
		//code to submenu
		break;
	case '3':
		//code to submenu
		break;
	case '4':
		//code to submenu
		break;
	case '5':
		//code to submenu
		break;
	case '6':
		system("cls");
		break;
	default:
		cout << "Please enter a valid choice!" << endl;
		break;
	}
	cout << endl;
}
