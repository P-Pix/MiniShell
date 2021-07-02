/**
 * @file Accessor.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-07-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../../include/Window.hpp"

bool Window::isRunning(void)
{
    return this -> m_Window -> isOpen();
}