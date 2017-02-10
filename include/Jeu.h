#include<iostream>
#ifndef JEU_H
#define JEU_H

using namespace std;

class Jeu
{
    public:
        Jeu();
        virtual ~Jeu();

        string nom;

        void afficher(int menu);
        void start();
        void objet(string type, int value);


    protected:

    private:
};

#endif // JEU_H
