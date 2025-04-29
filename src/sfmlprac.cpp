#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <string>
#include <optional>

int main(){



    //sf::Window window(sf::VideoMode(800, 600), "My Window", sf::Style::None);
    sf::Window window(sf::VideoMode(800, 600), "My Window");
    
    //window.setPosition({10, 50});

    while (window.isOpen()){

        sf::Event event;
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window.close();
            }
        }
        //window.display();
    }
    return 0;
}