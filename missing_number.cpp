// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     vector<int> nums;   //dynamic array named nums
//     int element;    //element of array
    
//     cout << "Enter the numbers in the array (enter a non-integer to stop):" << endl;
//     while (cin >> element) {    //input elements into array
//         nums.push_back(element);
//     }

//     int sumArr = 0;     //initialising the sum of array with 0
//     for (int i = 0; i < nums.size(); i++) {     //incrementing the element from 0 to the last element
//         sumArr += nums[i];      //sum of the array = curr sum + ith element(current number)
//     }

//     int n = nums.size();    //assigning n the value equaling the size of the array
//     int expectedSum = (n * (n + 1)) / 2;    //expected sum = sum of first n numbers
//     int missingNum = expectedSum - sumArr;

//     cout << "The missing number is: " << missingNum << endl;

//     return 0;
// }






#include <iostream>
#include <vector>
using namespace std;

int main()  {
    vector<int> nums;
    int sumArr = 0;

    for(int i=1; i<nums.size(); i++)
        sumArr += nums[i];

    int n = nums.size();
    int expectedSum = (n*(n+1))/2;

    int missingNum = expectedSum - sumArr;     
    return 0;
}