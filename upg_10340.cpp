#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::string first;
    std::string second;
    std::vector<std::string> answers;
    while(std::cin >> first >> second)
    {
        bool exsists{true};
        //std::cin >> first >> second;
        auto it = second.begin();
        for(char c : first)
        {
            it = std::find(it, second.end(), c);
            if(it != second.end())
            {
                it++;
            }
            else
            {
                exsists = false;
            }
        }
        if(exsists)
        {
            answers.push_back("Yes");
        }
        else
        {
            answers.push_back("No");
        }
    }
    for(std::string s : answers)
    {
        std::cout << s << '\n';
    }
    return 0;
}