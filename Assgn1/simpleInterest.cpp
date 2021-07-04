
// Step 1: start
// Step 2 : Read the three input quantities P, N and R. 
// Step 3 : Calculate simple interest as Simple interest = P* N* R/100 
// Step 4: Print simple interest. 
// Step 5: Stop.


#include<iostream>
using namespace std;
int main()
{
    float P , R , T ;
    cin>>P>>R>>T;
    float SI = (P * T * R) / 100;
    cout << "Simple Interest = " << SI;
 
    return 0;
}