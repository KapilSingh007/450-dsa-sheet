// GFG Reverse Array
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
void swapTwoNumber(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void reverseArray(vector<int> &arr)
{
    int n = arr.size();
    // approach 1
    for (int i = 0; i < n / 2; i++)
    {
        swapTwoNumber(arr[i], arr[n - 1 - i]);
    }
}
int main()
{
    vector<int> vt;
    string input;
    cout<<"enter string";
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number)
    {
        vt.push_back(number);
    }
    reverseArray(vt);
    for (int i = 0; i < vt.size(); i++)
    {
        cout << vt[i] << " ";
    }
    return 0;
}