#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

    using namespace std;

int main(){
    vector<char> text{istream_iterator<char>(cin >> noskipws), istream_iterator<char>()};
    vector<char> new_text{};
    bool isfirst = true;
    for(auto it = text.begin(); it != text.end(); it++)
    {

        if(*it == '"' && isfirst)
        {
            new_text.push_back('`');
            new_text.push_back('`');
            isfirst = false;
        }
        else if(*it == '"' && !isfirst)
        {
            new_text.push_back('\'');
            new_text.push_back('\'');
            isfirst = true;
        }
        else
        {
            new_text.push_back(*it);
        }
    }
    for(char c : new_text)
    {
        cout << c;
    }
    return(0);
}