/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Window.hpp"

Window::Window(void)
{
    initWindow();
    m_directory = "~";
}
Window::Window(const char *directory)
{
    initWindow();
    m_directory = directory;
}
Window::~Window(void)
{

}

void Window::initWindow(void)
{
    this -> m_Window = nullptr;
    this -> m_Window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Mini-Shell");

    m_FontBash.loadFromFile("font/bash.ttf");
    m_FontBashTitle.loadFromFile("font/bash_title.TTF");
}

void Window::updateWindow(void)
{
    allDraw();
}

void Window::addStringInEnter(std::string string)
{
    if(string.size())
    {
        for(unsigned int x = m_enter.size() % NUMBER_CHARACTER_WIDTH; x < NUMBER_CHARACTER_WIDTH; x ++)
        {
            m_enter += ' ';
        }
        for(unsigned int letter = 0; letter < string.size(); letter ++)
        {
            m_enter += string[letter];
        }
    }
}