#include <iostream>

using namespace std;
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
    cout<<" 1. Piña Colada"<<endl;
    cout<<" 2. Mojito "<<endl;
    cout<<" 3. Cuba Libre "<<endl;
    cout<<" 4. Daiquiri "<<endl;
}


void menu_beer()
{
    cout<<"How would you like your Coffee?"<<endl;
    cout<<" 1. Black Velvet"<<endl;
    cout<<" 2. Cóctel Mónaco "<<endl;
    cout<<" 3. Michelada "<<endl;
    cout<<" 4. Just the Beer "<<endl;
    }

void menu_x()
{
    cout<<"How would you like your Coffee?"<<endl;
    cout<<" 1. Espresso"<<endl;
    cout<<" 2. American Coffee "<<endl;
    cout<<" 3. Cappuccino "<<endl;
    cout<<" 4. Frappe "<<endl;
    cout<<" 5. Iced Coffee "<<endl;
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
                break;
                case 2:
                break;
                case 3:
                break;
                case 4:
                break;
            }
        break;
        case 2:
        menu_tequila();
                cin>>auxdos;
            switch(auxdos)
            {
                case 1:
                
                break;
                case 2:
                break;
                case 3:
                break;
                case 4:
                break;
            }
        break;
        case 3:
        menu_ron();
                cin>>auxdos;
            switch(auxdos)
            {
                case 1:
                break;
                case 2:
                break;
                case 3:
                break;
                case 4:
                break;
            }
        break;
        case 4:
        menu_beer();
                cin>>auxdos;
            switch(auxdos)
            {
                case 1:
                break;
                case 2:
                break;
                case 3:
                break;
                case 4:
                break;
            }
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
    cout<<" 3. Ron "<<endl;
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
}

void menu_fruit()
{
    cout<<"What fruit do you like? "<<endl;
    cout<<" 1. Orange "<<endl;
    cout<<" 2. Pineapple "<<endl;
    cout<<" 3. Watermelon "<<endl;
    cout<<" 4. Lemon "<<endl;
}

void menu_milk()
{
    cout<<"How would you like to combine your milk with?"<<endl;
    cout<<" 1. Chocomilk (Simple) "<<endl;
    cout<<" 2. Chocomilk (With Banana) "<<endl;
    cout<<" 3. Matcha Latte "<<endl;

}

void menu_coffee()
{
    cout<<"How would you like your Coffee?"<<endl;
    cout<<" 1. Espresso"<<endl;
    cout<<" 2. American Coffee "<<endl;
    cout<<" 3. Cappuccino "<<endl;
    cout<<" 4. Frappe "<<endl;
    cout<<" 5. Iced Coffee "<<endl;
}


