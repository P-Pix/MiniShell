/**
 * @file Control.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Window.hpp"

void Window::limitFramerate(unsigned int frame)
{
    this -> m_Window -> setFramerateLimit(frame);
}

void Window::controlWindow(void)
{
    this -> pollEvent();
}
void Window::pollEvent(void)
{
    if(this -> m_Window -> pollEvent(this -> m_Event))
    {
        if(this -> m_Event.type == sf::Event::Closed)
        {
            close();
        }
        else if (this -> m_Event.type == sf::Event::KeyPressed)
        {
            if(this -> m_Event.key.code == sf::Keyboard::Escape)
            {
                close();
            }
            else if(this -> m_Event.key.code == sf::Keyboard::Enter)
            {
                std::cout << std::endl;

                for(unsigned int x = 0; x < NUMBER_FUNCTION; x ++)
                {
                    std::cout << (m_callfunction[x] == m_enter) << std::endl;
                    if(m_callfunction[x] == m_enter)
                    {
                        call[x];
                    }
                }
                m_enter.clear();
            }
            else if(this -> m_Event.key.code == sf::Keyboard::Space)
            {
                m_enter += " ";
                std::cout << " ";  
            }
            else if(this -> m_Event.key.code == sf::Keyboard::A)
            {
                m_enter += "a";
                std::cout << "a";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::B)
            {
                m_enter += "b";
                std::cout << "b";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::C)
            {
                m_enter += "c";
                std::cout << "c";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::D)
            {
                m_enter += "d";
                std::cout << "d";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::E)
            {
                m_enter += "e";
                std::cout << "e";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::F)
            {
                m_enter += "f";
                std::cout << "f";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::G)
            {
                m_enter += "g";
                std::cout << "g";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::H)
            {
                m_enter += "h";
                std::cout << "h";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::I)
            {
                m_enter += "i";
                std::cout << "i";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::J)
            {
                m_enter += "j";
                std::cout << "j";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::K)
            {
                m_enter += "k";
                std::cout << "k";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::L)
            {
                m_enter += "l";
                std::cout << "l";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::M)
            {
                m_enter += "m";
                std::cout << "m";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::N)
            {
                m_enter += "n";
                std::cout << "n";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::O)
            {
                m_enter += "o";
                std::cout << "o";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::P)
            {
                m_enter += "p";
                std::cout << "p";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::Q)
            {
                m_enter += "q";
                std::cout << "q";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::R)
            {
                m_enter += "r";
                std::cout << "r";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::S)
            {
                m_enter += "s";
                std::cout << "s";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::T)
            {
                m_enter += "t";
                std::cout << "t";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::U)
            {
                m_enter += "u";
                std::cout << "u";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::V)
            {
                m_enter += "v";
                std::cout << "v";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::W)
            {
                m_enter += "w";
                std::cout << "w";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::X)
            {
                m_enter += "x";
                std::cout << "x";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::Y)
            {
                m_enter += "y";
                std::cout << "y";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::Z)
            {
                m_enter += "z";
                std::cout << "z";
            }
        }
    }
}