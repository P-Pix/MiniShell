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
    this -> m_Window = nullptr;
    this -> m_Window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Mini Shell");
}
Window::~Window(void)
{

}