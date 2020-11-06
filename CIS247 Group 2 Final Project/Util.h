//------------------------------------------------------
//Purpose:  This class will hold Utility methods
//			for things such as input validation
//			and other things as the program is built.
//
//------------------------------------------------------


#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Util
{
public:

	template<typename T, typename enable_if<is_arithmetic<T>::value>::type* = nullptr>
	static T CheckValidValue(string message, T minimum = 0)
	{
		T checkValue;

		cout << message << endl;
		cin >> checkValue;
		cin.ignore();

		while (checkValue < minimum)
		{
			cout << "Value must be greater than " << minimum << endl;
			cin >> checkValue;
		}

		return checkValue;
	}

	static void Split(std::string text, std::vector<std::string>& container, char delimiter);
};


