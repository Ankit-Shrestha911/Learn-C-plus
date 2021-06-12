#include <iostream>
#include <vector>

using namespace std;

void rotateArray(int a[], int size, int rot)
{
  vector<int> help;
  int i = 0;
  int corret = rot % size;
  
  int inner = size - corret;

  if (rot % size == 0)
  {
    for (int j = 0; j < size; j++)
    {
      cout << a[j] << " ";
    }

    return;
  }

  for (i = 0; i < corret; i++)
  {
    help.push_back(a[i]);
  }

  for (int j = 0; j < size; j++)
  {
    a[j] = a[i++];
  }

  for (int k = 0; k < help.size(); k++)
  {
    a[inner++] = help[k];
  }

  for (int j = 0; j < size; j++)
  {
    cout << a[j] << " ";
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6};
  rotateArray(arr, 6, 20);

  /*
    20%6 = 2
    18 --> same array
    we have to rotate only 2 times 
    curr array after rotating 18 times it will remain same;
    new 20-18 --> 2;
    1,2,3,4,5,6
    3,4,5,6,1,2 completing 20 rotation
  */

  return 0;
}
