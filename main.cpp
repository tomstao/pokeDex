#include <iostream>
#include <map>
#include <string>
#include <list>

int main()
{
    using namespace std;
    map<string,list<string>> pokedex;

    list<string> pikachuAttacks{"thunder shock", "tail whip", "quick attack"};
    list<string>  charmanderAttacks{"flame thrower", "scary face"};
    list<string>  chikoritaAttacks{"razor leaf", "poison powder"};

    pokedex.insert(pair<string,list<string> >("Pikachu", pikachuAttacks));
    pokedex.insert(pair<string,list<string> >("Charmander", charmanderAttacks));
    pokedex.insert(pair<string,list<string> >("Chikorita", chikoritaAttacks));

    for(auto pair : pokedex)
    {
        cout << pair.first << " - ";
        for(auto attack : pair.second)
        {
            cout << attack << endl;
        }
    }

    return 0;
}
