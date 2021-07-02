/**
 * @file Window.hpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _WINDOW_HPP_
#define _WINDOW_HPP_

#define WINDOW_WIDTH        200     // 1080
#define WINDOW_HEIGHT       200     // 720
#define NUMBER_FUNCTION     5

#include <iostream>
#include <string>

#include <SFML/Graphics.hpp>

class Window
{
    private:
        std::string m_callfunction[NUMBER_FUNCTION] = 
        {
            "exit",
            "ls",
            "touch",
            "mkdir",

            "help",
        };

        std::string m_enter;

        /// Window by sfml
        sf::RenderWindow    *m_Window;

        /// Receve keyboard information
        sf::Event           m_Event;

        /// Video mode
        sf::VideoMode       m_VideoMode;

        ////////////////////////////////////////

        /// attribution function by keyboard event
        void pollEvent(void);
        void close(void);
        void ls(void);

        void (Window::*ptr[NUMBER_FUNCTION])() = 
        {
            Window::close,
            Window::ls,
        };

        void drawText(sf::Text Text);
        void drawVectorText(std::vector<sf::Text> vector);


    public:
        ////////////////////////////////////////

        /// Default Constructor
        Window(void);

        /// Destructor
        ~Window(void);

        ////////////////////////////////////////

        /// \return true if the window is open
        bool isRunning(void);

        ////////////////////////////////////////

        /// Limit FPS 
        /// \param frame FPS number
        void limitFramerate(unsigned int frame);

        ///
        void controlWindow(void);
        void updateWindow(void);
        void verificationWindow(void);
};

#endif