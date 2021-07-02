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

std::string cd(std::string directory, std::string move)
{
    if(move == "../")
    {
        int numberdirectory = 0;
        for(int x = 0; x < directory.size(); x ++)
        {
            if(directory[x] == "/")
            {
                numberdirectory ++;
            }
        }
    }
}