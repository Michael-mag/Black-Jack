//Blackjack
/*
    CH08-320143
    House.cpp
    MICHAEL MAGAISA
    m.magaisa@jacobs-university.de
*/


#include <iostream>
#include "House.h"

using namespace std;

House::House(const string& name):
    GenericPlayer(name)
{}

House::~House()
{}

bool House::IsHitting() const
{
    return (GetTotal() <= 16);
}

void House::FlipFirstCard()
{
    if (!(m_Cards.empty()))
	{
        m_Cards[0]->Flip();
	}
    else
	{
		cout << "No card to flip!\n";
	}
}
