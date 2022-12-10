#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "bussin", sf::Style::Fullscreen);

    sf::Clock clock;
    while (window.isOpen()) {
        sf::Event event{};

        // Handle Closing
        while (window.pollEvent(event)) {
            // Exiting
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {

        }

        // Resets and Drawing
        clock.restart();
        window.clear();



        }
}

