/**
 * @file Constructor.cpp
 * @author Guillaume LEMONNIER
 * @date 2021-06-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */

Ls::Ls(void)
{
    
}

Ls::~Ls(void)
{

}

void Ls::exe(std::string directory)
{
    m_list.clear();
    for(const auto & entry : filesystem::directory_iterator(directory))
    {
        std::cout << entry.path() << std::endl;
        m_list += entry.path();
        m_list += ' ';
    }
}
std::string Ls::getList(void)
{
    return m_list;
}