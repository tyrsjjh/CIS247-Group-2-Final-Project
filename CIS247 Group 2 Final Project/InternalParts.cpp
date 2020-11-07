#include "InternalParts.h"
#include <iostream>



using namespace std;

const string GPUList ="GPUInv.csv";
const string CPUList ="CPUInv.csv";

//Constructor definitions
void InternalParts::GPU(string man, string mod, int mem, double price) {
	manufacture = man;
	model = mod;
	memory = mem;
	price = price;
}
void InternalParts::CPU(string man, string chip, string mod, double clock, double price){ 
	manufacture = man;
	model = mod;
	clockSpeed = clock;
	price = price;
}
void InternalParts::RAM(string man, string mod, double clock, int mem, double price) {
	manufacture = man;
	model = mod;
	clockSpeed = clock;
	memory = mem;
	price = price;
}
void InternalParts::MOBO(string man, string mod, string chip, double price) {
	manufacture = man;
	model = mod;
	chipSet = chip;
	price = price;
}


//Setters definitions
void InternalParts::setManufacture(string man) {
	manufacture = man;
}
void InternalParts::setModel(string mod) {
	model = mod;
}
void InternalParts::setChipSet(string chip) {
	chipSet = chip;
}
void InternalParts::setclockSpeed(double clock) {
	clockSpeed = clock;
}
void InternalParts::setMemory(int mem) {
	memory = mem;
}
void InternalParts::setPrice(double price) {
	price = price;
}

//Getters definitions
string InternalParts::getManufacture() {
	return manufacture;
}
string InternalParts::getModel() {
	return model;
}
string InternalParts::getChipSet() {
	return chipSet;
}
double InternalParts::getClockSpeed() {
	return clockSpeed;
}
int InternalParts::getMemory() {
	return memory;
}
double InternalParts::getPrice() {
	return price;
}



