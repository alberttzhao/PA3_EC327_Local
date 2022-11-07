
#include <iostream>

#include "PokemonCenter.h"

using namespace std;

PokemonCenter::PokemonCenter() : Building()
{
    display_code = 'C';
    potion_capacity = 100;
    num_potions_remaining = potion_capacity;
    pokedollar_cost_per_potion = 5;
    state = POTIONS_AVAILABLE;
    cout << "PokemonCenter default constructed" << endl;
}

//no idea about default if not declared here
PokemonCenter::PokemonCenter(int in_id, double potion_cost, unsigned int potion_cap, Point2D in_loc)
{
    id_num = in_id;
    location = in_loc;
    pokedollar_cost_per_potion = potion_cost;
    potion_capacity = potion_cap;
    display_code = 'C';
    num_potions_remaining = potion_capacity;
    state = POTIONS_AVAILABLE;
    cout << "PokemonCenter constructed" << endl;
}

//no idea
//returns true if this PokemonCenter contains at least one potion
//returns false otherwise
bool PokemonCenter::HasPotions()
{
    return true;
}

//this should be right
unsigned int PokemonCenter::GetNumPotionRemaining()
{
    return num_potions_remaining;
}

//no idea if this is right
bool PokemonCenter::CanAffordPotion(unsigned int potion, double budget)
{
    double total_cost = static_cast<double>(potion) * pokedollar_cost_per_potion;
    if(budget > total_cost)
        return true;
    else
        return false;
}

//no idea
//returns the pokedollar cost for the specified number of potions
double PokemonCenter::GetPokeDollarCost(unsigned int potion)
{
    return 
}


//no idea
unsigned int PokemonCenter::DistributePotion(unsigned int potion_needed)
{
    if(num_potions_remaining >= potion_needed)
    {
        num_potions_remaining - potion_needed;
        return potion_needed;
    }
    else
    {
        return num_potions_remaining;
    }
}

bool PokemonCenter::Update()
{

}

void PokemonCenter::ShowStatus()
{
    return;
}
