#include <iostream>
#include <vector>

// binary search is only applyable on sorted containers
// time complexity of binary search is 0(log n)
// much efficient of linear search


int BinarySearch(const std::vector<int>& vec, int searchedElement)
{
    int beginIndex  = 0 ;
    int endIndex = vec.size()-1;
    // test
    int count = 0;
    while (beginIndex <= endIndex)
    {
        int middleIndex;
        middleIndex = (beginIndex + endIndex)/2;
        if(searchedElement == vec.at(middleIndex))
        {
            return middleIndex;
        }
        else if(searchedElement < vec.at(middleIndex))
        {
            endIndex = middleIndex - 1;
        }
        else if(searchedElement > vec.at(middleIndex))
        {
            beginIndex = middleIndex + 1;
        }
        count ++;
        std::cout << "Cycle count -> " << count << "\n";
    }
    return -1;
}

int main(int argc, char *argv[])
{
    std::vector<int> test = {1, 5, 6, 9, 12, 15, 18};
    int result = BinarySearch(test,1);
    if(result == -1)
    {
        std::cout << "The element is not in the container !!!\n";
    }
    else
    {
        std::cout << "The element is on " << result << " index in container !!!\n";
    }


    return 0;
}
