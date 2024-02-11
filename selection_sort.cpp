#include <iostream>

void swap(int* arr, const int& size, const int& start_index)
{
    int index_of_smallest = start_index;
    for(int i = start_index + 1; i < size; ++i){
        if(arr[i] < arr[index_of_smallest]){
            index_of_smallest = i;
        }
    }
    auto smallest_value = arr[index_of_smallest];
    arr[index_of_smallest] = arr[start_index];
    arr[start_index] = smallest_value;
}

void sort(int* array, const int size)
{
    int current_index = 0;
    for(int i =0; i < size; ++i){
        swap(array, size, current_index);
        ++ current_index;
    }
}

int main() {
    int arr[] = {2, 10, 5, 6, 32, 1};
    sort(arr, 6);
    for(auto v:arr){
        std::cout << v << ' ';
    }
    return 0;
}
