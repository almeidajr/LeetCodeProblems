// 1.two-sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

#include "Solution.h"

using namespace std;

int main()
{
    vector<int> nums{ 2, 7, 11, 15 };
    int target = 9;
    
    Solution solution;
    vector<int> response = solution.twoSum(nums, target);

    cout << "Problem 0001.two-sum" << endl;

    if (response.empty())
    {
        cout << "There isn't indices of the two numbers such that they add up to the target" << endl;
    }
    else
    {
        cout << "Solution: [";

        for (auto& i : response)
        {
            cout << " " << i << " ";
        }

        cout << "]";
    }
    
    

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
