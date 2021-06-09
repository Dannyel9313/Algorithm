#include <iostream>
#include <vector>
#include <limits.h>


// Time complexity is 0(n2) for selection sort

// Selection sort in ascending order
void SortInAscendingOrder(std::vector<int>& vec)
{
    for(size_t i = 0; i < vec.size()-2; i ++)
    {
        int smallest = i;
        for(size_t j = i + 1; j <= vec.size() - 1; j++ )
        {
            if( vec.at(j) < vec.at(smallest))
            {
                smallest = j;
            }
        }
        if(vec.at(i) > vec.at(smallest))
        {
            std::swap(vec.at(i),vec.at(smallest));
        }
    }
}

int main(int argc, char *argv[])
{

    std::vector<int> test = { 5, 6, 8, 1, 3 };
    SortInAscendingOrder(test);
    for(auto& elem : test)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    return 0;
}
