#include <iostream>
#include <string>
#include <algorithm>
#include <set>


std::set<std::string> permutate(std::string query)
{
    std::string str;

    std::set<std::string> arr;

    std::sort(query.begin(), query.end());

    do
    {
        str = query.substr(0, 4);
        arr.insert(str);
    }

    while(std::next_permutation(query.begin(), query.end()));

    return arr;
}


int main()
{
    std::string query;

    std::cin >> query;

    for(auto i : permutate(query))
    {
        std::cout << i << std::endl;
    }

    return 0;
}
