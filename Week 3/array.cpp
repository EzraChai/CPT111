#include <iostream>
#include <iomanip>

void checkPtrExistence(const int* ptr){
    if( ptr == nullptr) {
        return;
    }

    std::cout << *ptr << "\n";
}

int main(){

    const double PI = 3.142;
    std::cout << std::fixed << std::setprecision(2) << PI << "\n";

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int* ptr = nullptr;

    for (int i = 0; i < 10; i++){
        std::cout << arr[i] << " ";
    }

    ptr = &arr[1];


    std::cout << "\n" <<*(arr + 2) << "\n";

    checkPtrExistence(ptr);

    return 0;

}

