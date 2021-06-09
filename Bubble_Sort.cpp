#include <iostream>
#include <vector>

//Bubble sort algorithm for sortin  "n" numbers we have to sort (n - 1) times in worst case
// Number of steps is (n-1)(n-2)
// Time complexity is 0(n2) for bubble sort

void SortInAscendingOrder(std::vector<int>& vec)
{
    for(size_t count = 0; count < vec.size() - 1; count ++)
    {
        for(size_t j = 0; j <= vec.size() - 2; j++)
        {
            if(vec.at(j) > vec.at(j+1))
            {
                std::swap(vec.at(j),vec.at(j + 1));
            }
        }
    }
}

int main(int argc, char *argv[])
{
    std::vector<int> test = {4, 8, 9, 1, 3};
    SortInAscendingOrder(test);
    for(const auto& elem : test)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    return 0;
}
