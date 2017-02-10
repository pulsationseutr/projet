#include <stdlib.h>
#include <string>
#include "Jeu.h"

//ctor
Jeu::Jeu()
{
    // Variables
    string nom;

    // Monstres
    //string monstres("Monstre1", "Monstre2");

    // Menu
    afficher(1);
}

Jeu::~Jeu()
{
    //dtor
}

void Jeu::start()
{
    // Sale 1

    cout << "Entrer votre nom: ";
    cin >> nom;
    cout << "Bienvenue " << nom << endl;

    // Init
    //afficher(4);
}

// Objets
void Jeu::objet(string type, int value)
{
    if(value) {

    }
}

// Affichage
void Jeu::afficher(int menu)
{
    system("cls");
    int input;

    // Menu 1: Principal
    if(menu == 1)
    {
        cout << "*********************************************" << endl;
        cout << "** Bienvenue jeune visiteur !              **" << endl;
        cout << "*********************************************" << endl;
        cout << "** Credits:                                **" << endl;
        cout << "**  Projet pour le cours d'informatique 1er**" << endl;
        cout << "**  de Monsieur Ali Jaghou, fait par       **" << endl;
        cout << "**    Rezek Aldarabseh                     **" << endl;
        cout << "**    Bienvenu                             **" << endl;
        cout << "**    Messi                                **" << endl;
        cout << "**    Messi                                **" << endl;
        cout << "*********************************************" << endl;
        cout << "** Menu                                    **" << endl;
        cout << "*********************************************" << endl;
        cout << "** 1) Nouvelle partie                      **" << endl;
        cout << "** 2) Aide                                 **" << endl;
        cout << "*********************************************" << endl;

        do
        {
            cout << "Votre option: ";
            cin >> input;

            switch(input) {
                case 1 : start();
                         break;       // and exits the switch
                case 2 : afficher(2);
                         break;
            }
        }
        while(input > 0 && input < 3);

    }
    // Menu 2: Aide
    else if(menu == 2)
    {
        cout << "*********************************************" << endl;
        cout << "** Menu                                    **" << endl;
        cout << "*********************************************" << endl;
        cout << "** 1) < Retour au menu principal           **" << endl;
        cout << "*********************************************" << endl;
        cout << "** Aide                                    **" << endl;
        cout << "*********************************************" << endl;
        cout << "** 1. Retourner sur le menu principal      **" << endl;
        cout << "** 2. Appuyer sur 1) Nouvelle partie       **" << endl;
        cout << "** 3. Enjoy :)                             **" << endl;
        cout << "*********************************************" << endl;

        do
        {
            cout << "Votre option: ";
            cin >> input;

            switch(input) {
                case 1 : afficher(1);
                         break;
            }
        }
        while(input > 0 && input < 2);

    }
    // Menu 3: Jeu
    else if(menu == 3)
    {
        cout << "*********************************************" << endl;
        cout << "** Nom: Johny                              **" << endl;
        cout << "** Vie: 100/100                            **" << endl;
        cout << "** Mana: 100/100                           **" << endl;
        cout << "*********************************************" << endl;
        cout << "** Actions                                 **" << endl;
        cout << "*********************************************" << endl;
        cout << "** 1) Attaquer le monstre: Tortank         **" << endl;
        cout << "*********************************************" << endl;
        cout << "** Objets                                  **" << endl;
        cout << "*********************************************" << endl;
        cout << "** 1) Potion de vie (+10)                  **" << endl;
        cout << "** 2) Potion de mana (+10)                 **" << endl;
        cout << "*********************************************" << endl;
    }
    // Menu 4: Fin
    else if(menu == 4)
    {
        cout << "*********************************************" << endl;
        cout << "** Bravo !                                 **" << endl;
        cout << "*********************************************" << endl;
        cout << "** Credits:                                **" << endl;
        cout << "**  Projet pour le cours d'informatique 1er**" << endl;
        cout << "**  de Monsieur Ali Jaghou, fait par       **" << endl;
        cout << "**    Rezek Aldarabseh                     **" << endl;
        cout << "**    Bienvenu                             **" << endl;
        cout << "**    Messi                                **" << endl;
        cout << "**    Messi                                **" << endl;
        cout << "*********************************************" << endl;
        cout << "** Actions                                 **" << endl;
        cout << "*********************************************" << endl;
        cout << "** 1) Quitter                              **" << endl;
        cout << "** 2) Recommencer                          **" << endl;
        cout << "*********************************************" << endl;
    }
    // Menu 5: Perdu
    else if(menu == 5)
    {
        cout << "*********************************************" << endl;
        cout << "** Perdu !                                 **" << endl;
        cout << "*********************************************" << endl;
        cout << "** Credits:                                **" << endl;
        cout << "**  Projet pour le cours d'informatique 1er**" << endl;
        cout << "**  de Monsieur Ali Jaghou, fait par       **" << endl;
        cout << "**    Rezek Aldarabseh                     **" << endl;
        cout << "**    Bienvenu                             **" << endl;
        cout << "**    Messi                                **" << endl;
        cout << "**    Messi                                **" << endl;
        cout << "*********************************************" << endl;
        cout << "** Actions                                 **" << endl;
        cout << "*********************************************" << endl;
        cout << "** 1) Quitter                              **" << endl;
        cout << "** 2) Recommencer                          **" << endl;
        cout << "*********************************************" << endl;
    }
}
