#include "Array.hpp"

int main () {
    std::cout << "\033[33m---------- Construction with no parameter----------\033[0m" << std::endl;
    Array<int> arr_emp;
    std::cout << "Array<int> arr_emp;" <<std::endl;
    std::cout << std::endl;
    std::cout << "\033[34marr_emp:\033[0m" <<std::endl;
    std::cout << arr_emp <<std::endl;
    
    std::cout << "\033[33m----------Construction with an unsigned int----------\033[0m" << std::endl;
    Array<int> arr(3);
    for (unsigned int  i = 0; i < arr.size(); i++)
    {
        arr[i] = i;
    }
    std::cout << "Array<int> arr(3);" <<std::endl;
    std::cout << std::endl;
    std::cout << "\033[34marr:\033[0m" <<std::endl;
    std::cout << arr <<std::endl;

    std::cout << "\033[33m----------Construction by copy----------\033[0m" << std::endl;
    Array<int> arr_cpy(arr);
    std::cout << "Array<int> arr_cpy(arr);" <<std::endl;
    std::cout << std::endl;
    std::cout << "\033[34marr_cpy:\033[0m" <<std::endl;
    std::cout << arr_cpy <<std::endl;

    std::cout << "\033[33m----------Assignment operator----------\033[0m" << std::endl;
    arr_emp = arr;
    std::cout << "arr_emp = arr;" <<std::endl;
    std::cout << std::endl;
    std::cout << "\033[34marr_emp:\033[0m" <<std::endl;
    std::cout << arr_emp <<std::endl;

    std::cout << "\033[33m----------A member function size() ----------\033[0m" << std::endl;
    std::cout << "arr.size() = " << arr.size() <<std::endl;
    std::cout << std::endl;

    std::cout << "\033[33m----------Operator: []----------\033[0m" << std::endl;
    std::cout << "\033[34mvalid index\033[0m" <<std::endl;
    std::cout << "arr[2] = " << arr[2] << std::endl;
    std::cout << std::endl;
    std::cout << "\033[34minvalid index\033[0m" <<std::endl;
    try {
        std::cout << "arr[10] = " << arr[10] << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
}