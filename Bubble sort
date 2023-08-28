#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
   
}

void printArray(int array[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int array[],int size)
{
    for(int step=0;step<size-1;step++)
    {
        int min_index=step;
        {
            for(int i=0;i<size-step;i++)
            {
                if(array[i+1]<array[i])
                {
                    swap(&array[i],&array[i+1]);
                }
            }
        }
    }
}


int main()
{
    int size;
    cout<<"Enter the size of array";
    cin>>size;
    int array[size];
    int i;
    cout<<"enter the elements";
    for(i=0;i<size;i++)
    {
        cin>>array[i];
    }
     bubbleSort(array, size);
  cout << "Sorted array in Acsending Order:\n";
  printArray(array, size);
}

