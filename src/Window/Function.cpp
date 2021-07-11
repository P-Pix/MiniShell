/**
 * @file Function.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Window.hpp"


#include "../Cd/Constructor.cpp"

void* Window::close(void)
{
    std::cout << "exit call" << std::endl;
    this -> m_Window -> close();
}
void* Window::ls(void)
{
    std::cout << "ls call" << std::endl;
}
void* Window::help(void)
{
    std::cout << "help call" << std::endl;
}
void *Window::cd(std::string extend)
{
    m_directory = directorySwitch(m_directory, extend);
    addStringInEnter(m_directory);
}
void *Window::touch(std::string extend)
{
    std::cout << "touch call " << extend << std::endl;
}
void *Window::mkdir(std::string extend)
{
    std::cout << "mkdir call " << extend << std::endl;
}
void *Window::execute(std::string extend)
{
    std::cout << "execute call " << extend << std::endl;
}
void *Window::compilec(std::string extend)
{
    std::cout << "compile c call " << extend << std::endl;
}
void *Window::compilecpp(std::string extend)
{
    std::cout << "compile cpp call " << extend << std::endl;
}
void *Window::openfile(std::string extend)
{
    std::cout << "open file call " << extend << std::endl;
}
void *Window::makefile(std::string extend)
{
    std::cout << "makefile call " << extend << std::endl;
}
void *Window::vscode(std::string extend)
{
    std::cout << "vscode call " << extend << std::endl;
}
void *Window::git(std::string extend)
{
    std::cout << "git call " << extend << std::endl;
}

void Window::extended(std::string function, std::string extend)
{
    if(function == m_callfunctionextend[0]){cd(extend);}
    else if(function == m_callfunctionextend[1]){touch(extend);}
    else if(function == m_callfunctionextend[2]){mkdir(extend);}
    else if(function == m_callfunctionextend[3]){execute(extend);}
    else if(function == m_callfunctionextend[4]){compilec(extend);}
    else if(function == m_callfunctionextend[5]){compilecpp(extend);}
    else if(function == m_callfunctionextend[5]){compilecpp(extend);}
    else if(function == m_callfunctionextend[6]){openfile(extend);}
    else if(function == m_callfunctionextend[7]){makefile(extend);}
    else if(function == m_callfunctionextend[8]){vscode(extend);}
    else if(function == m_callfunctionextend[9]){git(extend);}
}
void Window::noextended(std::string function)
{
    if(function == m_callfunction[0]){close();}
    else if(function == m_callfunction[1]){ls();}
    else if(function == m_callfunction[2]){help();}
}