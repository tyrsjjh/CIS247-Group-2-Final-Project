//------------------------------------------------------
//Purpose:  This class will hold Menu methods
//			for differnt menues used in the program
//
//------------------------------------------------------


#include "MenuHandler.h"
#include "Util.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

//Main Menu
void menuHandler::mainMenuC()
{
	char userChoice;
	do
	{
		cout << "Main Menu: " << endl;
		cout << "1)Enter Mineral Prices" << endl;
		cout << "2)Craft a ship" << endl;
		cout << "3)View Mineral Prices" << endl;
		cout << "4)Exit" << endl;
		cout << "Please enter you choice: ";
		cin >> userChoice;
		cin.ignore();
		userChoice = toupper(userChoice);
		switch (userChoice)
		{
		case'1':
			system("cls");
			//mineralHandler::GetInstance()->editMinerals();
			break;
		case'2':
			system("cls");
			//shipCraftingMenu();
			break;
		case'3':
			system("cls");
			//mineralHandler::GetInstance()->viewMinerals();
			break;
		case'4':
			system("cls");
			break;
		default:
			cout << "Please enter a valid choice!" << endl;
		}
	} while (userChoice != '4');
}

//Ship Crafting Options
void menuHandler::shipCraftingMenu()
{
	char userChoice;
	int craftingAmount;
	cout << "What ship would you like to craft?" << endl;
	cout << "1)Atron" << endl;
	cout << "2)Heron" << endl;
	cout << "3)Venture" << endl;
	cin >> userChoice;
	cin.ignore();
	craftingAmount = Util::CheckValidValue<int>("How many would you like to make? ", 1);
	userChoice = toupper(userChoice);

	long double totalCost = 0;
	cout << "Cost to craft is: " << endl;
	switch (userChoice)
	{
	case '1':
		//totalCost = craftingAmount * crafting::atronCost();
		//cout << fixed << setprecision(2) << totalCost << " isk" << endl;
		break;
	case '2':
		//totalCost = craftingAmount * crafting::heronCost();
		//cout << fixed << setprecision(2) << totalCost << " isk" << endl;
		break;
	case '3':
		//totalCost = craftingAmount * crafting::ventureCost();
		//cout << fixed << setprecision(2) << totalCost << " isk" << endl;
		break;
	default:
		cout << "Please enter a valid choice!" << endl;
		break;
	}
	cout << endl;
}
