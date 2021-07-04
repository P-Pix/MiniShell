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

#define NUMBER_FUNCTION             3
#define NUMBER_FUNCTION_EXTEND      10

/* 
    exit,
    ls,
    new file,
    new folder,
    executate,
    compile c,
    compile cpp,
    open file,
    move directory,
    makefile,
    vscode,
    git,
    help
*/
class Window
{
    private:
        typedef void *(Window::*FunctionPointer)(void);
        typedef void *(Window::*FonctionPointerExtend)(std::string);

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
        void letterEvent(void);
        void enterEvent(void);

        void initWindow(void);

        void *close(void);
        void *ls(void);
        void *help(void);

        void *cd(std::string extend);
        void *touch(std::string extend);
        void *mkdir(std::string extend);
        void *execute(std::string extend);
        void *compilec(std::string extend);
        void *compilecpp(std::string extend);
        void *openfile(std::string extend);
        void *makefile(std::string extend);
        void *vscode(std::string extend);
        void *git(std::string extend);

        void extendFunction(void);
        void voidFunction(void);
        
        std::string m_callfunction[NUMBER_FUNCTION] = 
        {
            "exit",
            "ls",
            "help",
        };
        FunctionPointer m_call[NUMBER_FUNCTION] = 
        {
            &Window::close,
            &Window::ls,
            &Window::help
        };

        std::string m_callfunctionextend[NUMBER_FUNCTION_EXTEND] = 
        {
            "cd",
            "touch",
            "mkdir",
            "execute",
            "compilec",
            "compilecpp",
            "openfile",
            "makefile",
            "vscode",
            "git",
        };
        FonctionPointerExtend m_callextend[NUMBER_FUNCTION_EXTEND] = 
        {
            &Window::cd,
            &Window::touch,
            &Window::mkdir,
            &Window::execute,
            &Window::compilec,
            &Window::compilecpp,
            &Window::openfile,
            &Window::makefile,
            &Window::vscode,
            &Window::git,
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