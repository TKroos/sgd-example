// main.m.cpp

#include <iostream>
#include "weapon.h"
#include "actor.h"

int main()
{
	sgde::Weapon weapon( 7.1f, 3 );

	std::cout << "Hello\n";
	std::cout << weapon << "\n";
	std::cout << "Goodbye\n";

	sgde::Actor actor( &weapon ); 

	return 0;
}
