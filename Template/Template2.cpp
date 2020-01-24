#include <iostream>
using namespace std;

template <typename TYPE>
 void FillArray(TYPE* array, size_t size, TYPE value)
 {
    for (size_t i = 0; i < size; i++)
    {
        array[i] = value;
    }
 }

 template <typename TYPE>
  void ShowArray(const TYPE* array, size_t size)
  {
    for (size_t i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }
    cout << endl;
  }

  int main()
  {
      const int SIZE = 3;
      int i[SIZE];
      double d[SIZE];

      FillArray(i, SIZE, 0);
      FillArray<double>(d, SIZE, 0);

      ShowArray(i, SIZE);
      ShowArray(d, SIZE);
  }