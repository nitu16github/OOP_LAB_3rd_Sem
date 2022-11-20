#include<iostream>
using namespace std;
int main() 
{
	int x, n,sum;
	cout << "Enter the number of items: " ;
	cin >>n;
	int *arr = new int(n);
	cout << "Enter " << n << " items" << endl;
	for (x = 0; x < n; x++)
    {
		cin >> arr[x];
	}
	cout << "You entered: ";
   for (x = 0; x < n; x++){
      sum=sum+x;
   }
    {
		cout << arr[x] << " ";
      
	}
	return 0;
}