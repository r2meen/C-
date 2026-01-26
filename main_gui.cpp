#include <SFML/Graphics.hpp>
#include "LinearEquation.h"
#include "PlotData.h"
#include <vector>
#include <iostream>
using namespace std;

    int main()
{
    double m;
    double c;

    const Linear_Equation E(m, c);
    Plot_Data plot;
    plot.generate(E, -10, 10, 10);

    const auto &x = plot.getX();
    const auto &y = plot.getY();
v
    sf::RenderWindow
        window(sf::VideoMode(800, 600), "Linear Equation Plot");

    float scaleX = 30;
    float scaleY = 20;

    float offsetX = 400;
    float offsetY = 300;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }
            window.clear(sf::Color::White);
             for (size_t i = 0; i < x.size(); i++)
            {
                sf::CircleShape point(2);
                point.setFillColor(sf::Color::Red);
                point.setPosition(offsetX + x[i] * scaleX, offsetY - y[i] * scaleY);
                window.draw(point);
            }
            window.display();
        }
    }

    return 0;
}
