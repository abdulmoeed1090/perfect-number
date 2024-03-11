#include <iostream>
using namespace std;

// main function
int main()
{
    int n, sum=0;
    cout << "Enter positive number to verify it is a perfect number : ";
    cin >> n;
    if (n > 0)
    {
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }
        cout<<"Sum is : "<<sum<<endl;

        if (sum == n)
        {
            cout << "(" << n << ") is a perfect number ...\n";
        }
        else
        {
            cout << "(" << n << ") is not a perfect number ...\n";
        }

    }
    else
    {
        cout << "Invalid input !! \n";
    }
    return 0;
}