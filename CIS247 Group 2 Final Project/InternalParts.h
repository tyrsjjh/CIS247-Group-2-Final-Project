//------------------------------------------------------
//Purpose:  This class will hold Internal part methods
//			for things such as CPU, GPU, RAM, Motherboards
//
//------------------------------------------------------

#pragma once
#include <iostream>
using namespace std;
class InternalParts
{
private:					
	//Attribute Variables
	string manufacture; 
	string model;
	string chipSet;
	double clockSpeed;	
	int memory;			
	double price;		

public:
	//Constructors
	//Argument acceptance 
	void GPU(string man, string mod, int mem, double price);
	void CPU(string man, string mod, string chip, double clock, double price);
	void RAM(string man, string mod, double clock, int mem, double price);
	void MOBO(string man, string mod, string chip, double price);
	
	//Setters
	void setManufacture(string man);
	void setModel(string mod);
	void setChipSet(string chip);
	void setclockSpeed(double clock);
	void setMemory(int mem);
	void setPrice(double price);

	//Getters
	string getManufacture();
	string getModel();
	string getChipSet();
	double getClockSpeed();
	int getMemory();
	double getPrice();


};