#include "BloodUnit.h"
//domar domar ty chuju
int BloodUnit::iDHandler = 0;

BloodUnit::BloodUnit(int utilizationTime)
{
	this->utilizationTime = utilizationTime;
	ID = ++iDHandler;
}


BloodUnit::~BloodUnit()
{
}
