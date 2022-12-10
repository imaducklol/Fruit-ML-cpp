#ifndef FUIT_ML_CPP_FRUIT_H
#define FUIT_ML_CPP_FRUIT_H

#endif //FUIT_ML_CPP_FRUIT_H
#include <SFML/Graphics.hpp>


class Fruit {
public:
    bool safe;
    // Color, Spikiness
    std::tuple<float, float> coords;
    sf::CircleShape sfObject;
};

Fruit createPoisonFruit(float color, float spikiness) {
    Fruit fruit;
    fruit.safe = false;
    fruit.coords = std::make_tuple(color, spikiness);
    fruit.sfObject.setFillColor(sf::Color(200, 0, 200));
    fruit.sfObject.setPosition(coords);
}