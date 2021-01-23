#include "Text.hpp"

namespace bp {
    Text::Text(std::string text, sf::Vector2f position, float charSize, std::string fontToLoad) : m_text(text) {
        m_font.loadFromFile(fontToLoad);

        m_object.setFont(m_font);
        m_object.setCharacterSize(charSize);
        m_object.setString(text);
        m_object.setPosition(position);
        m_object.setFillColor(sf::Color::Red);
    }
    
    Text::Text(std::string text, sf::Vector2f position, float charSize, sf::Font font) : m_text(text) {
        m_font = font;

        m_object.setFont(font);
        m_object.setCharacterSize(charSize);
        m_object.setString(text);
        m_object.setPosition(position);
        m_object.setFillColor(sf::Color::Red);
    }

    void Text::Render(sf::RenderWindow& window) {
        window.draw(m_object);
    }

    sf::Vector2f& Text::GetPosition() {
        return (sf::Vector2f&)m_object.getPosition();
    }
    
    uint32_t Text::GetCharacterSize() {
        return m_object.getCharacterSize();
    }
    
    std::string& Text::GetString() {
        return (std::string&)m_object.getString();
    }

    sf::Text& Text::GetObject() {
        return (sf::Text&)m_object;
    }
};