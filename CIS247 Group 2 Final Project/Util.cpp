#include "Util.h"


bool checkValidValue(int min, int max, int userChoice) {
	if ((userChoice > max) || (userChoice < min))
	{
		cout << "Please Enter a valid Option \n";
		system("Pause");
		return false;
	}
	return true;
}