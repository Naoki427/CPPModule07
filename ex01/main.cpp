#include "Iter.hpp"

int main() {
    int arr[5] = {0, 1, 2, 3, 4};
    std::cout << "\033[33m----------original array----------\033[0m" << std::endl;
    for (size_t i = 0; i < 5; i++)
    {
       std::cout << "Arr[" << i <<"] = " << arr[i] << std::endl;
    }
    std::cout << std::endl;
    ::iter(arr,5,plus);
    std::cout << "\033[33m----------plus----------\033[0m" << std::endl;
    for (size_t i = 0; i < 5; i++)
    {
       std::cout << "Arr[" << i <<"] = " << arr[i] << std::endl;
    }
    std::cout << std::endl;
    ::iter(arr,5,factorial);
    std::cout << "\033[33m----------factorial----------\033[0m" << std::endl;
    for (size_t i = 0; i < 5; i++)
    {
       std::cout << "Arr[" << i <<"] = " << arr[i] << std::endl;
    }
    std::cout << std::endl;

    std::cout << "\033[33m----------Const strs put----------\033[0m" << std::endl;
    const std::string strs[5] = {"One,", "Two,", "Three,", "Four,", "Five\n"};
    ::iter(strs,5,put);
    std::cout << std::endl;

}