#include <string>
#include <iostream>

using namespace std;

int main()
{
    string inputName;
    int age;
    // Set exception mask for cin stream
    cin.exceptions(ios::failbit);

    cin >> inputName;
    while (inputName != "-1")
    {
        // The following line will throw an ios_base::failure.
        //        Insert a try/catch statement to catch the exception.
        //        Clear cin's failbit to put cin in a usable state.
        try
        {
            cin >> age;
        }
        catch (ios_base::failure)
        {
            // Catch the exception and set age to -1.
            age = -1; // Changed from 0 to -1

            // Clear the failbit of cin.
            cin.clear();

            // Discard invalid input characters up to the newline.
            cin.ignore(7, '\n'); // Ignoring up to the newline after a failed integer read.
        }

        cout << inputName << " " << (age + 1) << endl; // Increment age by 1.

        cin >> inputName; // Read the next input line.
    }

    return 0;
}
