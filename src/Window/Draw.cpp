/**
 * @file Draw.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Window.hpp"

void Window::allDraw(void)
{
    this -> m_Window -> clear();

    drawVectorText(stringToTextTitle(m_title));
    drawDoubleVectorText(stringToTextEnter(m_enter));

    this -> m_Window -> display();
}

void Window::drawText(sf::Text text)
{
    this -> m_Window -> draw(text);
}
void Window::drawVectorText(std::vector<sf::Text> vector)
{
    for(unsigned int i = 0; i < vector.size(); i ++)
    {
        drawText(vector[i]);
    }
}
void Window::drawDoubleVectorText(std::vector<std::vector<sf::Text>> vector)
{
    for(unsigned int j = 0; j < vector.size(); j ++)
    {
        drawVectorText(vector[j]);
    }
}
std::vector<sf::Text> Window::stringToTextTitle(std::string string)
{
    std::vector<sf::Text> vect;
    for(unsigned int i = 0; i < string.size(); i ++)
    {
        sf::Text letter;
        letter.setFont(m_FontBashTitle);
        letter.setColor(sf::Color::White);
        letter.setString(string[i]);
        letter.setCharacterSize(100);
        vect.push_back(positionText(letter, i + 8 + (3*i), 0));
    }
    return vect;
}
std::vector<std::vector<sf::Text>> Window::stringToTextEnter(std::string string)
{
    std::vector<std::vector<sf::Text>> vect2;
    if(string.size() == 0)
    {
        return vect2;
    }
    for(unsigned int j = START_LINE; j < NUMBER_CHARACTER_HEIGHT; j ++)
    {
        std::vector<sf::Text> vect;
        for(unsigned int i = 0; i < NUMBER_CHARACTER_WIDTH; i ++)
        {
            sf::Text letter;
            letter.setFont(m_FontBash);
            letter.setColor(sf::Color::White);
            letter.setString(string[i + (j - START_LINE) * NUMBER_CHARACTER_WIDTH]);
            vect.push_back(positionText(letter, i, j));
            if(i + (j - START_LINE) * NUMBER_CHARACTER_WIDTH + 1 == string.size())
            {
                vect2.push_back(vect);
                return vect2;
            }
        }
        vect2.push_back(vect);
    }
    return vect2;
}
sf::Text Window::positionText(sf::Text text, unsigned int x, unsigned int y)
{
    text.setPosition(x * POSITION_X_MULTIPLICATOR, y * POSITION_Y_MULTIPLICATOR);
    return text;
}