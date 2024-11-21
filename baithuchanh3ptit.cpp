#include <iostream>
using namespace std;
void Interchange_Sort(int a[], int n){
    int i,j;
    for(i=0; i<n-1; i++){
      for(j=i+1; j<n; j++){
          if(a[i]>a[j]){
              swap(a[i],a[j]);//hoán v? a[i] và a[j]
            }
        }
    }
}

void main ( )
{
	int a[4] {5, 7, 3, 2);
    Interchange_Sort(a, 5);
    cout<<"Mang sau khi sap xep: "<<endl;
    for(int i=0;i<5;i++){
       cout<<a[i]<<" ";
    }
    system("pause");

}

