#include <iostream>
#include <vector>


// time complexity is 0(n)

int LinearSearch(const std::vector<int>& vec, int elem_to_search)
{
    for(size_t i = 0; i < vec.size(); i ++)
    {
        if(elem_to_search == vec.at(i))
        {
            return i;
        }
    }
    return -1;
}

void PrintResults(int result)
{
    if(result == -1)
    {
        std::cout << "The key not found !!!\n";
    }
    else
    {
        std::cout << "The key is at pos " << result << " !!!\n";
    }
}

int main(int argc, char *argv[])
{
    std::vector<int> test = {10, 15, 3, 7, 8};

    int result = LinearSearch(test,8);
    PrintResults(result);
    result = LinearSearch(test, 20);
    PrintResults(result);
    return 0;
}
