// #include <iostream>

// void fun(int *A[], int n) {
//     for (int i = 0; i < n; i++) {
//         std::cout << *A[i] << " ";  // Access value at each pointer
//     }
//     std::cout << std::endl;
// }

// int main() {
//     int a = 10, b = 20, c = 30;
//     int *arr[] = {&a, &b, &c};  // Array of pointers

//     fun(arr, 3);  // Output: 10 20 30

//     return 0;
// }

#include <iostream>
int x = 10;  // Global variable

int main() {
    int x = 20;  // Local variable
    std::cout << "Local x: " << x << "\n";
    std::cout << "Global x: " << ::x << "\n";  // Using scope resolution operator
    return 0;
}

