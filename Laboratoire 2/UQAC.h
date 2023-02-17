#pragma once
#include "ChargementDechet.h"
class UQAC
{
public:
	static ChargementDechet* getChargementDechets() { return new ChargementDechet(); }
};

