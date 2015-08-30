// actor.h
#ifndef INCLUDED_ACTOR
#define INCLUDED_ACTOR

#include <iostream>
#include "weapon.h"

namespace sgde
{

class Actor
{
  private:
	Weapon* d_weapon;
	  // Actor's individual weapon in the world. Not const
	  // because a weapon can have ammunition or some such
	  // thing that is modified by the actor class when
	  // it attacks.

  public:
	// CONSTRUCTORS
	Actor();
	Actor( Weapon* weapon );
};

inline
Actor::Actor()
{
}

inline
Actor::Actor( Weapon* weapon ) : d_weapon( weapon )
{
}

} // End sgde namespace

#endif

