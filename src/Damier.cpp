#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>

using namespace std;
using namespace sf;
#include "Damier.h"
#include "Pions.h"




Damier::Damier()
{
    vector<Pions> pos;
    cout << "construction Damier"<< endl;
    int damier [10][10]={    1,0,1,0,1,0,1,0,1,0,
                             0,1,0,1,0,1,0,1,0,1,
                             1,0,1,0,1,0,1,0,1,0,
                             0,1,0,1,0,1,0,1,0,1,

                             3,0,3,0,3,0,3,0,3,0,
                             0,3,0,3,0,3,0,3,0,3,

                             2,0,2,0,2,0,2,0,2,0,
                             0,2,0,2,0,2,0,2,0,2,
                             2,0,2,0,2,0,2,0,2,0,
                             0,2,0,2,0,2,0,2,0,2,

                        };
    Pions j11('b', true, 1,1),j12('b', true, 1,3),j13('b', true, 1,5),j14('b', true, 1,7),j15('b', true, 1,9),j16('b', true, 2,2),j17('b', true, 2,4),j18('b', true, 2,6),j19('b', true, 2,8),j110('b', true, 2,10), j111('b', true, 3,1),j112('b', true, 3,3),j113('b', true, 3,5),j114('b', true, 3,7),j115('b', true, 3,9),j116('b', true, 4,2),j117('b', true, 4,4),j118('b', true, 4,6),j119('b', true, 4,8),j120('b', true, 4,10);
    Pions j21('w', true, 7,1),j22('w', true, 7,3),j23('w', true, 7,5),j24('w', true, 7,7),j25('w', true, 7,9),j26('w', true, 8,2),j27('w', true, 8,4),j28('w', true, 8,6),j29('w', true, 8,8),j210('w', true, 8,10), j211('w', true, 9,1),j212('w', true, 9,3),j213('w', true, 9,5),j214('w', true, 9,7),j215('w', true, 9,9),j216('w', true, 10,2),j217('w', true, 10,4),j218('w', true, 10,6),j219('w', true, 10,8),j220('w', true, 10,10);
    int x,y;
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            if(damier[i][j]== 1)
            {
               x =i*62,6;
               y

            }
        }
    }

        // Create the main window
    RenderWindow app(VideoMode(626, 600), "Jeu de Dame");

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
