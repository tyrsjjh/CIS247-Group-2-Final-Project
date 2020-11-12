
#include "Parts.h"
#include "MenuHandler.h"

using namespace std;

Inventory::Inventory() {
	numItems = 0;
}

void Inventory::addGPU(string man, string mod, int mem, double price) 
{
	GPUvect.push_back(GPU(man, mod, mem, price));
}

void Inventory::printGPU() 
{
	system("cls");
	cout << left << setw(NUM_WIDTH) << " " << setw(PRICE_WIDTH) << "Manufacture" << setw(22) << "Model" << setw(20) << "Memory" << setw(15) << "Price" << setw(10)<< endl;
	vector<GPU>::iterator iter = GPUvect.begin();
	int i = 1;
	while (iter != GPUvect.end())
	{
		cout << setw(NUM_WIDTH) << i << left << setw(PRICE_WIDTH) << iter->getManufacture() << setw(22) << iter->getModel() << setw(15) << iter->getMemory() << setw(15) << endl;
		iter++; i++;
	}
	
}
