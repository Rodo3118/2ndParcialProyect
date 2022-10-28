
#include <iostream>
#include "cosas.h"
#include "Principales.h"

using namespace std;


/*
class drink{
    private:
    string name;
    string type_ofdrink;
    

};
*/
int main()
{

    int x;
    menu_principal();

    
        cin>>x;

        switch(x)
    {
        case 1:
        menu_alcohol();
        break;
        case 2:
        menu_soda();
        break;
        case 3:
        menu_fruit();
        break;
        case 4:
        menu_milk();
        break;
        case 5:
        menu_coffee(); 
        break;
    }

    
}