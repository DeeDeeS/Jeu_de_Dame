#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;
#include "Damier.h"
#include "Pions.h"




Damier::Damier()
{
    cout << "construction Damier"<< endl;
    char damier [10][10]={  'R','V','R','V','R','V','R','V','R','V',
                            'V','R','V','R','V','R','V','R','V','R',
                            'R','V','R','V','R','V','R','V','R','V',
                            'V','R','V','R','V','R','V','R','V','R',
                            'R','V','R','V','R','V','R','V','R','V',
                            'V','R','V','R','V','R','V','R','V','R',
                            'B','V','B','V','B','V','B','V','B','V',
                            'V','B','V','B','V','B','V','B','V','B',
                            'B','V','B','V','B','V','B','V','B','V',
                            'V','B','V','B','V','B','V','B','V','B'
                        };
    Pions j1;
    Pions j2;
    int nbre_case_vide=0;
    //ligne
    for (int i=0;i<=9;i++)
    {
        //colonne
        for(int j=0;j<=9;j++)
        {
            switch(damier[i][j])
            {
            case 'R':

                    j1.setColor('R');
                    j1.setBool(true);
                    j1.setX(i);
                    j1.setY(j);

                break;

            case 'V':
                    nbre_case_vide=nbre_case_vide+1;
                    cout << nbre_case_vide;
                break;
            case 'B':
                    j2.setColor('B');
                    j2.setBool(true);
                    j2.setX(i);
                    j2.setY(j);

            default:
                    cout << "";

            }
        }
    }
        // Create the main window
    RenderWindow app(VideoMode(600, 600), "Jeu de Dame");

    // Load a sprite to display
    Texture plateau;

    if (!plateau.loadFromFile("dame.bmp"))
    {
        cout<<"Erreur durant le chargement de l'image"<<endl;
        //return EXIT_FAILURE; // On ferme le programme
    }

    Sprite sprite(plateau);

	// Start the game loop
    while (app.isOpen())
    {
        // Process events
        Event event;
        while (app.pollEvent(event))
        {
            // Close window : exit
            if (event.type == Event::Closed)
                app.close();
        }

        // Clear screen
        app.clear();

        // Draw the sprite
        app.draw(sprite);

        // Update the window
        app.display();
    }

    //return EXIT_SUCCESS;
}




Damier::~Damier()
{
    cout<<"Destruction Damier"<<endl;
}

Damier Damier::m_instance=Damier();


Damier& Damier::Instance()
{
    return m_instance;
}
