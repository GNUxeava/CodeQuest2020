#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int arr[300];
    int len {0};
    int count {};
    while (len < 2 || len > 300)
    {
        cout << "Enter length of array: ";
        cin >> len;
    }
    cout << "Enter the elements:\n";
    for (int i = 0; i < len; ++i)
    {
        cin >> arr[i];
        if (arr[i] < 0)
            arr[i] = arr[i] * -1;
    }
    int k = 0;
    while (k == 0) {
        cout << "Enter number to divide against: ";
        cin >> k;
    }
    for (int i = 0; i < len; ++i)
    {
        int sum {};
        for (int j = i; j < len; ++j)
        {
            sum += arr[i] + arr[j];
            if (sum % k == 0)
            {
                
                ++count;
                sum = 0;
            }
        }
    }
    
    cout << "The array has " << count << " numbers divisible by " << k << endl;
    return 0;
}
