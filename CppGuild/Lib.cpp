#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

void Tokenize(const std::string& whiteSpace, std::string Input, std::vector<std::string>& tokens)
{
    char* ptr = const_cast<char *>(Input.c_str());
    const char* token;

    while(0 != (token = strtok(ptr, whiteSpace.c_str())))
    {
       tokens.push_back(token);
       ptr = nullptr;     
    }
}

std::string Upper(std::string In)
{
    std::transform(In.begin(), In.end(), In.begin(), ::toupper);
}

std::string Lower(std::string In)
{
    std::transform(In.begin(), In.end(), In.begin(), ::tolower);
}

void Replace(std::string& In, const std::string& charset, char replacement)
{
    char* ptr = const_cast<char *>(In.c_str());
    char c;
    while(0 != (c = *ptr))
    {
        if(strchr(charset.c_str(), c))
        {
            *ptr = replacement;
        }
        ptr++;
    }
}

void Replace(std::string& str, const std::string& from, const std::string& to)
{
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos)
    {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

void RightTrim(std::string& str, const char* trimChar)
{
    if(str.empty())
    {
        return;
    }

    str.erase(str.find_last_not_of(trimChar) + 1);
}

void LeftTrim(std::string& str, const char* trimChar)
{
    if(str.empty())
    {
        return;
    }

    str.erase(str.find_first_not_of(trimChar));
}