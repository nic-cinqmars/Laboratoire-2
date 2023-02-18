#pragma once
#include "Dechet.h"
class DechetTraite
{
protected:
	Dechet* dechet;
public:
	DechetTraite(Dechet* dechet);
	DechetTraite();

	DechetTraite(const DechetTraite& dechetTraite);

	virtual ~DechetTraite();

	Dechet* getDechet() const { return dechet; }
};