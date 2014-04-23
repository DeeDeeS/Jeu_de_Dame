#include <SFML/Graphics.hpp>
#include "Damier.h"
#include "iostream"

using namespace sf;
using namespace std;

//#include perso

/*int main()
{
    // Create the main window
    RenderWindow app(VideoMode(600, 600), "Jeu de Dame");

    //Damier damier = new Damier();

    // Load a sprite to display
    Texture plateau;
    Texture texture1;
    Texture texture2;

    if (!plateau.loadFromFile("dame.bmp"))
         return EXIT_FAILURE;
    if (!texture1.loadFromFile("piont_bleu.bmp"))
        return EXIT_FAILURE;
    if (!texture2.loadFromFile("piont_rouge.bmp"))
        return EXIT_FAILURE;

    Sprite sprite(plateau);
    Sprite sprite1(texture1);
    Sprite sprite2(texture2);

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
        app.draw(sprite1);
        app.draw(sprite2);

        // Update the window
        app.display();
    }

    return EXIT_SUCCESS;
}*/


int main(void)
{
    /*//1er appel de Instance: on alloue le pointeur SoundManager::m_instance
    Damier& ptr1=Damier::Instance();

    //2eme appel:on se contente de renvoyer le pointeur déjà allouer.
    Damier& ptr2=Damier::Instance();

    //ptr1 et ptr2 pointe sur la même adresse mémoire.
    //On voit donc qu'il ny a bien qu'un seul objet.
    cout<<&ptr1<<"|"<<&ptr2<<endl;*/

    Damier* ptr1;
    Damier* ptr2;


    //Damier d;
    //Damier f;

    Damier    d = new Damier();
    Damierf = new Damier();


    ptr1= &d;
    ptr2= &f;

    cout << ptr1<< endl;
    cout << ptr2 << endl;




    return 0;
}
