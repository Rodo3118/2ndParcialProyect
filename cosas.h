#include <iostream>
#include <string.h>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include<ctime>

using namespace std;
void delay(int secs) {
  for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}

void lectura(string hola){
    ifstream archivo;
    string nombre,text;
    

    archivo.open(hola,ios::in);
    if(archivo.fail())
    {
        cout<<"Algo salio mal"<<endl;
    }

    while(!archivo.eof()){
    getline(archivo,text);
    cout<<text<<endl;
    //delay(2);                         
    }
    archivo.close();
    
}
void menu_whisky()
{
    cout<<"How would you like your Whiskey?"<<endl;
    cout<<" 1. Whiskey with tonic"<<endl;
    cout<<" 2. John Collins "<<endl;
    cout<<" 3. Irish coffee with cream "<<endl;
    cout<<" 4. Whiskey on the rocks "<<endl;
    }


void menu_tequila()
{
    cout<<"How would you like your Tequila?"<<endl;
    cout<<" 1. Charro Negro"<<endl;
    cout<<" 2. Mojito "<<endl;
    cout<<" 3. Paloma Grapefruit soda (Fresca) "<<endl;
    cout<<" 4. Classic Margarita "<<endl;
}


void menu_ron()
{
    cout<<"How would you like your Ron?"<<endl;
    cout<<" 1. Pina Colada"<<endl;
    cout<<" 2. Mojito "<<endl;
    cout<<" 3. Cuba Libre "<<endl;
    cout<<" 4. Daiquiri "<<endl;
}


void menu_beer()
{
    cout<<"How would you like your Beer?"<<endl;
    cout<<" 1. Black Velvet"<<endl;
    cout<<" 2. Coctel Monaco "<<endl;
    cout<<" 3. Michelada "<<endl;
    cout<<" 4. Just the Beer "<<endl;
    }

void chose_milk()
{
    int aux;
    cin>>aux;
    switch(aux)
    {
        case 1:
        lectura("z4ChocomilkS.txt");
        break;
        case 2:
        lectura("z4ChocomilkB.txt");
        break;
        case 3:
        lectura("z4MatchaL.txt");
        break;
        default:
        cout<<"Please enter a valid number"<<endl;
        break;

    }
}
void chose_coffee()
{
    int aux;
    cin>>aux;
    switch(aux)
    {
        case 1:
        lectura("z5Espresso.txt");
        break;
        case 2:
        lectura("z5AmericanC.txt");
        break;
        case 3:
        lectura("z5Capuccino.txt");
        break;
        case 4:
        lectura("z5Frappe.txt");
        break;
        default:
        cout<<"Please enter a valid number"<<endl;
        break;


    }
}
void chose_alcohol()
{
    int aux,auxdos;
    cin>>aux;
    switch(aux)
    {
        case 1:
        menu_whisky();
        cin>>auxdos;
            switch(auxdos)
            {
                case 1:
                lectura("zWhiskeyT.txt");
                break;
                case 2:
                lectura("zJohnC.txt");
                break;
                case 3:
                lectura("zCafeI.txt");
                break;
                case 4:
                lectura("zWhiskeyO.txt");
                break;
                default:
        cout<<"Please enter a valid number"<<endl;
        break;

            }
        break;
        case 2:
        menu_tequila();
                cin>>auxdos;
            switch(auxdos)
            {
                case 1:
                lectura("z1CharroN.txt");
                break;
                case 2:
                lectura("z1Mojito.txt");
                break;
                case 3:
                lectura("z1PalomaR.txt");
                break;
                case 4:
                lectura("z1MargaritaC.txt");
                break;
                default:
        cout<<"Please enter a valid number"<<endl;
        break;

            }
        break;
        case 3:
        menu_ron();
                cin>>auxdos;
            switch(auxdos)
            {
                case 1:
                lectura("z2PinaC.txt");
                break;
                case 2:
                lectura("z2Mojito.txt");
                break;
                case 3:
                lectura("z2CubaL.txt");
                break;
                case 4:
                lectura("z2Daiquiri.txt");
                break;
                default:
        cout<<"Please enter a valid number"<<endl;
        break;

            }
        break;
        case 4:
        menu_beer();
                cin>>auxdos;
            switch(auxdos)
            {
                case 1:
                lectura("z3BlackV.txt");
                break;
                case 2:
                lectura("z3CoctelM.txt");
                break;
                case 3:
                lectura("z3Michelada.txt");
                break;
                case 4:
                lectura("z3JustT.txt");
                break;
                default:
        cout<<"Please enter a valid number"<<endl;
        break;

            }
        break;
        default:
        cout<<"Please enter a valid number"<<endl;
        break;

    }
}
    


void menu_principal()
{
    cout<<"WELCOME TO YOUR FINDYOURDRINK BAR, WHICH OF THIS INGREDIENTS DO YOU HAVE? "<<endl;
    cout<<" --------- 1. Alcohol ------- "<<endl;
    cout<<" --------- 2. Soda ---------- "<<endl;
    cout<<" --------- 3. Fruit --------- "<<endl;
    cout<<" --------- 4. Milk ---------- "<<endl;
    cout<<" --------- 5. Coffee -------- "<<endl;
}

void menu_alcohol()
{
    cout<<" 1. Whisky "<<endl;
    cout<<" 2. Tequila "<<endl;
    cout<<" 3. Rum "<<endl;
    cout<<" 4. Beer "<<endl;
    chose_alcohol();

}

void menu_soda()
{
    cout<<" Which soda do you want? "<<endl;
    cout<<" 1. Cola Soda (Coke, Pepsi) "<<endl;
    cout<<" 2. Sparkling Water "<<endl;
    cout<<" 3. 7Up or Sprite "<<endl;
    cout<<" 4. Grapefruit soda (Fresca) "<<endl;
    cout<<" 5. Dr. Pepper "<<endl;
    //chose_soda();
}

void menu_fruit()
{
    cout<<"What fruit do you like? "<<endl;
    cout<<" 1. Orange "<<endl;
    cout<<" 2. Pineapple "<<endl;
    cout<<" 3. Watermelon "<<endl;
    cout<<" 4. Lemon "<<endl;
    //chose_fruit();
}

void menu_milk()
{
    cout<<"How would you like to combine your milk with?"<<endl;
    cout<<" 1. Chocomilk (Simple) "<<endl;
    cout<<" 2. Chocomilk (With Banana) "<<endl;
    cout<<" 3. Matcha Latte "<<endl;
    chose_milk();

}

void menu_coffee()
{
    cout<<"How would you like your Coffee?"<<endl;
    cout<<" 1. Espresso"<<endl;
    cout<<" 2. American Coffee "<<endl;
    cout<<" 3. Cappuccino "<<endl;
    cout<<" 4. Frappe "<<endl;
    chose_coffee();

}


