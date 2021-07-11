/**
 * @file cd.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-06-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <string>

std::string action(std::string action, std::string directory)
{
    std::string newdirectory;
    unsigned int    numbercharacter = 0;
    if(action == "../")
    {
        for(unsigned int direct = directory.size() - 2; directory[direct] != '/'; direct --)
        {
            numbercharacter = direct;
        }
        for(unsigned int character = 0; character < numbercharacter; character ++)
        {
            newdirectory += directory[character];
        }
    }
    else
    {
        directory += action;
        newdirectory = directory;
    }
    return newdirectory;
}

std::string directorySwitch(std::string directory, std::string move)
{
    std::string newdirectory,
                moveaction;
    unsigned int    numbercharacter = 0,
                    slash = 0;
    for(unsigned int character = 0; character < move.size(); character ++)
    {
        if(move[character] == '/')
        {
            slash ++;
        }
    }
    if(!slash)
    {
        return directory;
    }
    for(unsigned int character = 0; character < move.size(); character ++)
    {
        if(move[character] == '/')
        {
            moveaction += move[character];
            newdirectory = action(moveaction, directory);
            moveaction.clear();
        }
        else
        {
            moveaction += move[character];
        }
    }
    return newdirectory;
}
