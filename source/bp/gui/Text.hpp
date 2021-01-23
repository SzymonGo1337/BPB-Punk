#pragma once
#ifndef BPB_GUI_TEXT
#define BPB_GUI_TEXT

#include "../Core.hpp"

namespace bp {
    class Text {
    public:
        Text(std::string text, sf::Vector2f position, float charSize, std::string fontToLoad);
        Text(std::string text, sf::Vector2f position, float charSize, sf::Font font);

        void Render(sf::RenderWindow& window);

        sf::Vector2f& GetPosition();
        uint32_t GetCharacterSize();
        std::string& GetString();
        sf::Text& GetObject();

    private:
        std::string m_text;
        sf::Font m_font;
        sf::Text m_object;

    };
};

#endif