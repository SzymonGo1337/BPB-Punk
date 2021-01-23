#pragma once
#ifndef BPB_GUI_BUTTON
#define BPB_GUI_BUTTON

#include "../Core.hpp"

typedef void(bpVoid)(void);

namespace bp {
    class Button {
    public:
        Button(sf::Vector2f size, sf::Vector2f position);

        void Render(sf::RenderWindow& window, bpVoid make);
        void CheckClick(sf::RenderWindow& window, bpVoid make);

        void SetDefaultTexture(sf::Texture texture);
        void SetPressedTexture(sf::Texture texture);
        void SetUnpressedTexture(sf::Texture texture);

    private:
        bool m_textureBool[3];
        sf::Texture m_texture[3];
        sf::RectangleShape m_rect;

    };
};

#endif