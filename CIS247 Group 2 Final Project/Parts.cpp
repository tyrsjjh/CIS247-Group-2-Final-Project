/*
		Done

*/


#include "Parts.h"
#include <iostream>



using namespace std;

//Constructor definitions
GPU::GPU(string man, string mod, int mem, double price) {
	manufacture = man;
	model = mod;
	memory = mem;
	price = price;
}
CPU::CPU(string man, string chip, string mod, double clock, double price){ 
	manufacture = man;
	model = mod;
	clockSpeed = clock;
	price = price;
}
RAM::RAM(string man, string mod, double clock, int mem, double price) {
	manufacture = man;
	model = mod;
	clockSpeed = clock;
	memory = mem;
	price = price;
}
MOBO::MOBO(string man, string mod, string chip, double price) {
	manufacture = man;
	model = mod;
	chipSet = chip;
	price = price;
}


//Accessors definitions

//GPU Accessors
string GPU::getManufacture() {
	return manufacture;
}
string GPU::getModel() {
	return model;
}
int GPU::getMemory() {
	return memory;
}
double GPU::getPrice() {
	return price;
}
//CPU Accessors
string CPU::getManufacture() {
	return manufacture;
}
string CPU::getModel() {
	return model;
}
double CPU::getClockSpeed() {
	return clockSpeed;
}
double CPU::getPrice() {
	return price;
}
//RAM Accessors
string RAM::getManufacture() {
	return manufacture;
}
string RAM::getModel() {
	return model;
}
double RAM::getClockSpeed() {
	return clockSpeed;
}
int RAM::getMemory() {
	return memory;
}
double RAM::getPrice() {
	return price;
}
//MOBO Accessors
string MOBO::getManufacture() {
	return manufacture;
}
string MOBO::getModel() {
	return model;
}
string MOBO::getChipSet() {
	return chipSet;
}
double MOBO::getPrice() {
	return price;
}

void GPU::printInfo() {
	cout << "- GPU -" << endl;
	cout << "Manufacture: " << manufacture << endl;
	cout << "Model: " << model << endl;
	cout << "Memory: " << memory << endl;
	cout << "Price: " << price << endl;
}

void CPU::printInfo() {
	cout << "- CPU -" << endl;
	cout << "Manufacture: " << manufacture << endl;
	cout << "Model: " << model << endl;
	cout << "Clock Speed: " << clockSpeed << endl;
	cout << "Price: " << price << endl;
}

void RAM::printInfo() {
	cout << "- RAM -" << endl;
	cout << "Manufacture: " << manufacture << endl;
	cout << "Model: " << model << endl;
	cout << "Clock Speed: " << clockSpeed << endl;
	cout << "Memory: " << memory << endl;
	cout << "Price: " << price << endl;
}

void MOBO::printInfo() {
	cout << "- MOBO -" << endl;
	cout << "Manufacture: " << manufacture << endl;
	cout << "Model: " << model << endl;
	cout << "Chipset: " << chipSet << endl;
	cout << "Price: " << price << endl;
}

