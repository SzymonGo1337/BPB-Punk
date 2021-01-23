#include "bp/Core.hpp"

void run() {
    std::cout << "clicked\n";
}

int main() {
    sf::RenderWindow window(sf::VideoMode(1280, 720), "BPB-Punk");
    window.setFramerateLimit(60);

    bp::Text text1("BPB-Punk", sf::Vector2f(100.0f, 0.0f), 24, "resources/arial.ttf");

    sf::Texture txts[3];
    txts[0].loadFromFile("resources/default.png");
    txts[1].loadFromFile("resources/pressed.png");
    txts[2].loadFromFile("resources/unpressed.png");

    bp::Button btn1(sf::Vector2f(200.0f, 20.0f), sf::Vector2f(40.0f, 40.0f));
    btn1.SetDefaultTexture(txts[0]);
    btn1.SetPressedTexture(txts[1]);
    btn1.SetUnpressedTexture(txts[2]);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        text1.Render(window);
        btn1.Render(window, run);

        window.display();
    }

    return 0;
}