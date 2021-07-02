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

#include <iostream>
#include <string>

#include <SFML/Graphics.hpp>

#define WINDOW_WIDTH        200     // 1080
#define WINDOW_HEIGHT       200     // 720
#define NUMBER_FUNCTION     5

class Window
{
    private:
        typedef void (Window::*function[NUMBER_FUNCTION])(void);
        
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
        void touch(void);
        void mkdir(void);

        void help(void);

        function call = 
        {
            &Window::close,
            &Window::ls,
            &Window::touch,
            &Window::mkdir,
            
            &Window::help
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