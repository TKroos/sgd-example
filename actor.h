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
      // Default constructor.
    Actor( Weapon* weapon );
      // Provides a weapon reference to an actor.

    // ACCESSORS
    Weapon* weapon() const;
      // Retrieves the actor's current weapon.
        
    // MUTATORS
    void setWeapon( Weapon* weapon );
      // Sets the actor's current weapon.
};

// FREE OPERATORS
inline
std::ostream& operator<<( std::ostream& stream, const Actor& actor )
{
    return stream << "{ weapon : " << *( actor.weapon() ) << " }";
}

// CONSTRUCTORS
inline
Actor::Actor()
{
}

inline
Actor::Actor( Weapon* weapon ) : d_weapon( weapon )
{
}

// ACCESSORS
inline
Weapon* Actor::weapon() const
{
    return d_weapon;
}

// MUTATORS
inline
void Actor::setWeapon( Weapon* weapon )
{
    d_weapon = weapon;
}

} // End sgde namespace

#endif

