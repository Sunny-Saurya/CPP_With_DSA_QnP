// basic string

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // Initialization of string using string keyword
    /* int n;
    cout << "Enter size of you string : " << " ";
    cin >> n;

    string fruits[n];

    for(int i = 0; i < n; i++)
    {
        cin >> fruits[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << fruits[i] << " ";
    }
    */

    // Initialization of string using stl container i.e <vactor>

    /*vector<string> arr;
    arr.push_back("apple");
    arr.push_back("Mango");
    arr.push_back("Orange");
    arr.push_back("JackFruit");

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    */

    // Initialization of string using 2d array

    string fruits[5][10];
    fruits[0][0] = "Apple";
    fruits[0][1] = "Mango";
    fruits[0][2] = "Orange";
    fruits[0][3] = "Banana";
    fruits[0][4] = "Pomogrante";
    fruits[0][5] = "Litchi";
    fruits[0][6] = "Aaam";
    fruits[0][7] = "Kela";
    fruits[0][8] = "Santra";
    fruits[0][9] = "Jackfruits";

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cout << fruits[i][j] << endl;
        }
    }
    
}