#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <string>
#include <optional>
#include <thread>
#include <chrono>

int main(){



    
    sf::RenderWindow window(sf::VideoMode(800, 600), "My Window");
    sf::CircleShape shape(50);
    
    window.setPosition({10, 50});

    while (window.isOpen()){

        sf::Event event;
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window.close();
            }
        }
        

        for (int i = 0; i < 100; i++){
            shape.setPosition(i, i);
            window.clear();
            window.draw(shape);
            window.display();
            std::this_thread::sleep_for(std::chrono::milliseconds(4));
        }   
    }
    return 0;
}