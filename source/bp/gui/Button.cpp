#include "Button.hpp"

namespace bp {
    Button::Button(sf::Vector2f size, sf::Vector2f position) {
        for(int i = 0; i < 3; i++) {
            m_textureBool[i] = false;
        }
        
        m_rect.setSize(size);
        m_rect.setPosition(position);
        m_rect.setFillColor(sf::Color::Red);
    }

    void Button::Render(sf::RenderWindow& window, bpVoid make) {
        window.draw(m_rect);
        CheckClick(window, make);
    }
    
    void Button::CheckClick(sf::RenderWindow& window, bpVoid make) {
        if(m_textureBool[0]) {
            m_rect.setTexture(&m_texture[0]);
        }

        if(m_rect.getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) && sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
            if(m_textureBool[1]) {
                m_rect.setTexture(&m_texture[1]);
            }
            make();
            if(m_textureBool[2]) {
                m_rect.setTexture(&m_texture[2]);
            }
        }
    }

    void Button::SetDefaultTexture(sf::Texture texture) {
        m_texture[0] = texture;
        m_textureBool[0] = true;
    }
    
    void Button::SetPressedTexture(sf::Texture texture) {
        m_texture[1] = texture;
        m_textureBool[1] = true;
    }
    
    void Button::SetUnpressedTexture(sf::Texture texture) {
        m_texture[2] = texture;
        m_textureBool[2] = true;
    }
};