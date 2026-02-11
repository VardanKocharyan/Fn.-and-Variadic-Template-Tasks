#include <iostream>

template<typename T>
void sortArr(T* arr, size_t size) {
  for(size_t i{}; i < size - 1; ++i) {
    for(size_t j{}; j < size - i - 1; ++j) {
      if(arr[j] > arr[j + 1]) std::swap(arr[j + 1], arr[j]);
    }
  }
}

template<typename T>
void printArr(T* arr, size_t size) {
  for(size_t i{}; i < size; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

int main(void) {

    size_t size = 5;
    int arr1[] = {213, 32, 23, 1, 0};

    char arr2[] = {'a', 'v', 'w', 'q', 'A'};

    sortArr(arr1, size);
    printArr(arr1, size);

    sortArr(arr2, size);
    printArr(arr2, size);

  return 0;
}
