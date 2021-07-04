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
                std::cout << m_command << std::endl;

                for(unsigned int x = 0; x < NUMBER_FUNCTION; x ++)
                {
                    if(m_callfunction[x] == m_command)
                    {
                        std::cout << "function call value = " << call[x] << std::endl;
                        call[x];
                    }
                }
                for(unsigned int x = m_enter.size() % NUMBER_CHARACTER_WIDTH; x < NUMBER_CHARACTER_WIDTH; x ++)
                {
                    m_enter += " ";
                }
                m_command.clear();
            }
            else if(this -> m_Event.key.code == sf::Keyboard::Space)
            {
                m_enter += " "; 
                m_command += " "; 
            }
            else if(this -> m_Event.key.code == sf::Keyboard::BackSpace)
            {
                if(m_command.size() > 0)
                {
                    m_enter.pop_back();
                    m_command.pop_back();
                }
            }
            else if(this -> m_Event.key.code == sf::Keyboard::A)
            {
                m_enter += "a";
                m_command += "a";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::B)
            {
                m_enter += "b";
                m_command += "b";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::C)
            {
                m_enter += "c";
                m_command += "c";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::D)
            {
                m_enter += "d";
                m_command += "d";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::E)
            {
                m_enter += "e";
                m_command += "e";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::F)
            {
                m_enter += "f";
                m_command += "f";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::G)
            {
                m_enter += "g";
                m_command += "g";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::H)
            {
                m_enter += "h";
                m_command += "h";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::I)
            {
                m_enter += "i";
                m_command += "i";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::J)
            {
                m_enter += "j";
                m_command += "j";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::K)
            {
                m_enter += "k";
                m_command += "k";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::L)
            {
                m_enter += "l";
                m_command += "l";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::M)
            {
                m_enter += "m";
                m_command += "m";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::N)
            {
                m_enter += "n";
                m_command += "n";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::O)
            {
                m_enter += "o";
                m_command += "o";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::P)
            {
                m_enter += "p";
                m_command += "p";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::Q)
            {
                m_enter += "q";
                m_command += "q";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::R)
            {
                m_enter += "r";
                m_command += "r";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::S)
            {
                m_enter += "s";
                m_command += "s";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::T)
            {
                m_enter += "t";
                m_command += "t";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::U)
            {
                m_enter += "u";
                m_command += "u";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::V)
            {
                m_enter += "v";
                m_command += "v";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::W)
            {
                m_enter += "w";
                m_command += "w";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::X)
            {
                m_enter += "x";
                m_command += "x";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::Y)
            {
                m_enter += "y";
                m_command += "y";
            }
            else if(this -> m_Event.key.code == sf::Keyboard::Z)
            {
                m_enter += "z";
                m_command += "z";
            }
        }
    }
}