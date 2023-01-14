#include <iostream>

using std::cout;
using std::endl;

void swap(int* ar, const int len)
{
	for(int i = 0; i < len-2; ++i){
		if(ar[i+1] < ar[i]){
			int temp = ar[i+1];
			ar[i+1] = ar[i];
			ar[i] = temp;
		}
	}
}

void sort(int* ar, const int len)
{
	for(int j = 0; j < len; ++j)
	{
		swap(ar, len);
	}
}

int main()
{
	int my_array[]{5, 2, 10, 12};
	sort(my_array, 4);
	for(const int& pos : my_array){
		cout << pos << endl;
	}
}