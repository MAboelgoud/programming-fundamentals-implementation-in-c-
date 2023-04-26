#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    fstream file;
    file.open("test.txt", ios::out | ios :: trunc);
    
    int x=0;
    int counter = 5;

    // Write in file
    while (cin >> x) {
        file << x <<" ";
        counter++;
    }
    file.close();

    //reading from file to array 
    file.open("test.txt", ios::in | ios::out | ios::app);
    int* arr = new int[counter];

    for (int j = 0; j < counter; j++)
        file >> arr[j];

    //geting the maximum number
    int maxNo=0 ;
    for(int i=0 ; i< counter;i++)
        if(maxNo<arr[i])
            maxNo=arr[i];
    cout<<maxNo;

    file.close();

    file.open("test.txt" , ios::out| ios::app);
    
    //writing the maximum number in file
    file << endl << "the Maximum Number is " << maxNo << endl;
    
    file.close();
    return 0;

}
