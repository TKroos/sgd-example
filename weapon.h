// weapon.h
#ifndef INCLUDED_WEAPON
#define INCLUDED_WEAPON

#include <iostream>

namespace sgde
{

class Weapon
{
  private:
	float d_damagePerSecond;
	  // Amount of damage this weapon does per second.
	int d_requiredStrength;
	  // Strength required to utilize this weapon.

  public:
	// CONSTRUCTORS
	Weapon();
	  // Default constructor.
	Weapon( float damagePerSecond, int requiredStrength );
	  // Constructor utilizing valid dps and required str.

	// ACCESSORS
	float damagePerSecond() const;
	  // Retrieves damage done per second.
	int requiredStrength() const;
	  // Retrieves strength required to use this weapon.

	// MUTATORS
	void setDamagePerSecond( float damage );
	  // Sets the damage to be done per second for this weapon.
	void setRequiredStrength( int strength );
	  // Sets the strength needed to operate this weapon.
};

// FREE OPERATORS
inline
std::ostream& operator<<( std::ostream& stream, const Weapon& weapon )
{
	return stream << "{ dps : " << weapon.damagePerSecond() <<
		", str : " << weapon.requiredStrength() << " }";
}

// CONSTRUCTORS
inline
Weapon::Weapon() : d_damagePerSecond( 0 ), d_requiredStrength( 0 )
{
}

inline
Weapon::Weapon( float damagePerSecond, int requiredStrength ) :
	d_damagePerSecond( damagePerSecond ),
	d_requiredStrength( requiredStrength )
{
}

// ACCESSORS
inline
float Weapon::damagePerSecond() const
{
	return d_damagePerSecond;
}

inline
int Weapon::requiredStrength() const
{
	return d_requiredStrength;
}

// MUTATORS
inline
void Weapon::setDamagePerSecond( float damage )
{
	d_damagePerSecond = damage;
}

inline
void Weapon::setRequiredStrength( int strength )
{
	d_requiredStrength = strength;
}

} // End sgde namespace

#endif
