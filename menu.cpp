#include <iostream>
#include "menu.h"
#include "tablica_wysw.h"
#include "tablica.h"
#include <cstdlib>
#include <stdlib.h>


using namespace std;
    
    int wybor;
void wyswietl_menu()
{
    int wiersze = 0;
    int kolumny = 0;
    do{
    cout<<"Co chcesz zrobic? Podaj odpowiednia liczbe."<<endl;
    cout<<"1-wyswietl skoroszyt"<<endl;
    cout<<"2-stworz nowe komorki"<<endl;
    cout<<"3-usun stare komorki"<<endl;
    cout<<"4-wyjdz"<<endl;
    cin>>wybor;
    
    
    switch(wybor)
    {
        case 1: 
        wyswietl_tab();
        break;
        
        case 2: 
        tworzenie_tablicy(wiersze,kolumny);
        break;
        
        case 3: 
        void usuwanie(int **macierz);
        break;
        
        case 4:
        cout<<"wychodze"<<endl;
       

        
        //default:
       // cout<<"nic nie robie, bo podales zly numer"<<endl;
    }
    }
    while(wybor != 4);
}
