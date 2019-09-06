/*      Kevin Langendoen
2-0. Compile and run the program presented in this chapter.
        Done.

2-1 . Change the framing program so that it writes its greeting with no separation from
the frame.
        const int pad = 0;

2-2 . Change the framing program so that it uses a different amount of space to
separate the sides from the greeting than it uses to separate the top and bottom
borders from the greeting.
        Use two variables!

        int main() {
            cout << "Please enter your first name: ";
            string name;
            cin >> name;
            const string greeting = "Hello, " + name + "!";
            const int sidePad = 3;
            const int topPad = 5;
            const int rows = topPad * 2 + 3;
            const int cols = greeting.size() + sidePad * 2 + 2;
            cout << endl;
            for (int r = 0; r != rows; ++r) {
                for (int c = 0; c != cols; ++c) {
                    if (r == topPad + 1 && c == sidePad + 1) {                
                        cout << greeting;
                        c += greeting.size() - 1;
                    }
                    else {
                        if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                            cout << "*";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
            return 0;
        }

2-3. Rewrite the framing program to ask the user to supply the amount of spacing to
leave between the frame and the greeting.
        cout << "Please enter the side spacing: ";
        int sidePad;
        cin >> sidePad;

        cout << "Please enter your top spacing: ";
        int topPad;
        cin >> topPad;

2-4. The framing program writes the mostly blank lines that separate the borders from
the greeting one character at a time. Change the program so that it writes all the spaces
needed in a single output expression.


2-5. Write a set of "*" characters so that they form a square, a rectangle, and a
triangle.


2-6. What does the following code do?
int i = 0;
while (i < 10) {
i += 1;
std::cout << i << std::endl;
}

        Counts from 1-10 on new lines.

2-7. Write a program to count down from 10 to -5 .
        int i = 10;
        while (i > -5) {
        std::cout << i << std::endl;
        i -= 1;
        }

2-8. Write a program to generate the product of the numbers in the range [1, 10) .
    int i = 1;
    double answer = 1;
    while (i <= 10) {
        answer = answer * i;
        i++; 
    }
    std::cout << answer << std::endl;
        

2-9. Write a program that asks the user to enter two numbers and tells the user which
number is larger than the other.


2-10. Explain each of the uses of std:: in the following program:
int main() {int k = 0;
while (k != n) { // invariant: we have written k asterisks so far
using std::cout;
cout << "*";
++k;
}
std::cout << std::endl; // std:: is required here
return 0;
}

*/

// Example program
#include <iostream>
#include <string>

using namespace std;
int main() {
    int i = 1;
    double answer = 1;
    while (i <= 10) {
        answer = answer * i;
        i++; 
    }
    std::cout << answer << std::endl;


    // cout << "Please enter your first name: ";
    // string name;
    // cin >> name;

    // cout << "Please enter the side spacing: ";
    // int sidePad;
    // cin >> sidePad;

    // cout << "Please enter your top spacing: ";
    // int topPad;
    // cin >> topPad;

    // const string greeting = "Hello, " + name + "!";
    // const int rows = topPad * 2 + 3;
    // const int cols = greeting.size() + sidePad * 2 + 2;
    // cout << endl;
    // for (int r = 0; r != rows; ++r) {
    //     for (int c = 0; c != cols; ++c) {
    //         if (r == topPad + 1 && c == sidePad + 1) {                
    //             cout << greeting;
    //             c += greeting.size() - 1;
    //         }
    //         else {
    //             if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
    //                 cout << "*";
    //             }
    //             else {
    //                 cout << " ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }
    return 0;
}



