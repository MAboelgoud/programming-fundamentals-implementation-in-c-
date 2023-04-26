#include <iostream>
#include <fstream>
using namespace std;
int binarySearch (int arr[], int l, int h, int element )
{
	while (l <= h)
	{
		int m = (l + h) / 2;
		if (arr[m] == element)
			return m;
		if (arr[m] > element)
			h = m - 1;
		else
			l = m + 1;
	}
	return -1;
}

void main()
{
	int i = 0;
	//n is the number of the integers in the file ==> 12
	//int num;
	int arr[15];
	ifstream File;
	File.open("integers.txt",ios::in| ios::app);
	while (!File.eof())
	{
		File >> arr[i];
		i++;
	}
	File.close();

		
	int n = sizeof(arr) / sizeof(arr[0]);
	int num;
	cout << "Enter an Integer = ";
	cin >> num;
	int result = binarySearch(arr, 0, n - 1, num);
	if (result == -1)
		cout << "The Number : (" << num << ") Was not found" <<
		endl;
	else
		cout << "The Number : (" << arr[result] << ") Was found at index :"<< result<< endl;
		system("pause");
}