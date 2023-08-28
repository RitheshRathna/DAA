#include <iostream>
using namespace std;
void merge(int array[],int p,int q, int r)
{
    int n1=q-p+1;
    int n2=r-q;
   
    int L[n1],M[n2];
   
    for(int i=0;i<n1;i++)
    {
        L[i]=array[p+i];
    }
    for(int j=0;j<n2;j++)
    {
        M[j]=array[q+1+j];
    }
   
    int i,j,k;
    i=0;
    j=0;
    k=p;
   
    while(i<n1 && j<n2)
    {
        if(L[i]<= M[j])
        {
            array[k]=L[i];
            i++;
        }
        else{
            array[k] = M[j];
            j++;
        }
        k++;
    }
   
     while (i < n1) {
    array[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    array[k] = M[j];
    j++;
    k++;
  }
}
   



void mergeSort(int array[],int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
       
        mergeSort(array,l,m);
        mergeSort(array,m+1,r);
       
        merge(array,l,m,r);
    }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
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
     mergeSort(array,0, size-1);
  cout << "Sorted array in Acsending Order:\n";
  printArray(array, size);
  return 0;
}
