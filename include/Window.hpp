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
#include <unistd.h>

#include <SFML/Graphics.hpp>

#define WINDOW_WIDTH                1080
#define WINDOW_HEIGHT               720
#define NUMBER_CHARACTER_WIDTH      54
#define NUMBER_CHARACTER_HEIGHT     30
#define POSITION_X_MULTIPLICATOR    20
#define POSITION_Y_MULTIPLICATOR    24
#define START_LINE                  5

#define NUMBER_FUNCTION         5

class Window
{
    private:
        typedef void *(Window::*FunctionPointer)(void);
        
        std::string m_callfunction[NUMBER_FUNCTION] = 
        {
            "exit",
            "ls",
            "touch",
            "mkdir",
            "help",
        };

        std::string m_enter;
        std::string m_command;
        std::string m_directory;
        std::string m_title = "MINI-SHELL";

        std::vector<sf::Text> m_ShellTitle;
        std::vector<std::vector<sf::Text>> m_ShellEnter;

        /// Window by sfml
        sf::RenderWindow    *m_Window;

        /// Receve keyboard information
        sf::Event           m_Event;

        /// Video mode
        sf::VideoMode       m_VideoMode;

        /// Font for all command int he Shell
        sf::Font            m_FontBash;

        /// Font for the title in the up for the window
        sf::Font            m_FontBashTitle;

        ////////////////////////////////////////

        /// attribution function by keyboard event
        void pollEvent(void);

        void initWindow(void);

        void *close(void);
        void *ls(void);
        void *touch(void);
        void *mkdir(void);
        void *help(void);

        FunctionPointer call[NUMBER_FUNCTION] = 
        {
            &Window::close,
            &Window::ls,
            &Window::touch,
            &Window::mkdir,
            &Window::help
        };

        void drawText(sf::Text Text);
        void drawVectorText(std::vector<sf::Text> vector);
        void drawDoubleVectorText(std::vector<std::vector<sf::Text>> vector);
        std::vector<std::vector<sf::Text>> stringToTextEnter(std::string string);
        std::vector<sf::Text> stringToTextTitle(std::string string);
        void positionAllText(void);
        sf::Text positionText(sf::Text text, unsigned int x, unsigned int y);
        void allDraw(void);


    public:
        ////////////////////////////////////////

        /// Default Constructor
        Window(void);

        /// Constructor with the directory position
        Window(const char *directory);

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