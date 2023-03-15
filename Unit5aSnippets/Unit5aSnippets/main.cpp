//
//  main.cpp
//  Unit5Snippets
//
//  Created by Gilbert W. Sanborn Jr on 2/21/23.
//

#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    int number = 0;
    cout << "Unit 5a Code Snippets" << endl;
    
    //using the while loop with counter
    int i = 0; //declare and initialize loop variable
    while (i < 10) { //loop condition
        cout << i + 1 << endl; //display ints 1 - 10
        i++;
    }
    
    //find the average of three numbers
    //counters and accumulators
    int x = 0;
    float sum = 0;
    while(x < 3) {
        cout << "Enter a number: ";
        cin >> number;
        sum += number;
        x++;
    }
    cout << setprecision(2) << fixed << sum / x << endl;
    //formatting - line breaks before next code snippet
    
    cout << endl;
    cout << endl;
    
    //using the do while loop
    int count = 0;
    do {
        count++;
        cout << count << endl;
    } while (count < 5);
    return 0;
}
