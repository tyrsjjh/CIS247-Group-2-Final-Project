#include "InventoryMang.h"
#include "Parts.h"

using namespace std;

Inventory::Inventory() {
	numItems = 0;
}

void Inventory::addGPU(string man, string mod, int mem, double price) {
	GPUvect.push_back(GPU(man, mod, mem, price));
}