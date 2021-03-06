/**
 * @file main.c
 * @author Guillaume LEMONNIER
 * @date 2021-06-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "include/Window.hpp"

int main(void);

int main(void)
{
    Window Window; /// getcwd();
    Window.limitFramerate(60);

    while(Window.isRunning())
    {
        Window.controlWindow();
        Window.updateWindow();
    }
    return 0;
}