
#include "Trainer.h"

//default constructor:

Trainer::Trainer() : GameObject('T') //verify this later 
{
    speed = 5;
    cout << "Trainer default constructed. " << endl;
}

Trainer::Trainer(char in_code) : GameObject('T')
{
    speed = 5;
    cout << "Trainer constructed." << endl;
}

Trainer::Trainer(string in_name, int in_id, char in_code, unsigned int in_speed, Point2D in_loc) : GameObject('T')
{
    speed = in_speed;
    name = in_name;
    cout << "Trainer constructed." << endl;
}


void Trainer::SetupDestination(Point2D dest)
//delta = (destination – location) * (speed / GetDistanceBetween(destination, location))
{
    destination = dest;
    delta = (dest - location) * (speed / GetDistanceBetween(dest , location));
}

void Trainer::StartMoving(Point2D dest)
{
    SetupDestination(dest);
    if(delta.x == 0 && delta.y == 0)
    {
        cout << display_code << id_num << ": I'm already there. See?" << endl;
    }
    else if(state == FAINTED)
    {
       cout << display_code << id_num << ": My pokemon have fainted. I may move but you cannot see me." << endl;
    }
    else
    {
        state = MOVING;
        cout << display_code << id_num << ": On my way." << endl;
    }
}

void Trainer::StartMovingToGym(PokemonGym* gym)
{
    SetupDestination(gym->GetLocation());
    if(state == FAINTED)
    {
        cout << display_code << id_num << ": My Pokemon have fainted so I can't move to gym... " << endl;
    }
    else if(delta.x == 0 && delta.y == 0)
    {
        cout << display_code << id_num << ": I am already at the PokemonGym! " << endl;
    }
    else
    {
        state = MOVING_TO_GYM;
        cout << display_code << id_num << ": on my way to gym " <<  gym->GetId();
    }
}

void Trainer::StartMovingToCenter(PokemonCenter* center)
{
    SetupDestination(center->GetLocation());
    if(state == FAINTED)
    {
        cout << display_code << id_num << ": My pokemon have fainted so I should have gone to the center.." << endl;
    }
    else if(delta.x == 0 && delta.y == 0)
    {
        cout << display_code << id_num << ": I am already at the Center! " << endl;
    }
    else
    {
        state = MOVING_TO_CENTER;
        cout << display_code << id_num << ": On my way to Center " << center->GetId() << endl;
    }
}

void Trainer::StartBattling(unsigned int num_battles)
{
    if(state = )
}

bool Trainer::HasFainted()
{
    if(health == 0)
        return true;
    else
        return false;
}