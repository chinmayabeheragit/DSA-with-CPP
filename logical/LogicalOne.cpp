#include <iostream>
#include <string>
using namespace std;

int main() {
    string anything;
    cout << "Tell me anything..." << endl;
    getline(cin, anything);  // Read the whole line of input
    cout << "Hmm... " << anything << " ... Really?" << endl;
    return 0;
}


//What Happens:
// #include <iostream> and #include <string>:

// These libraries are needed for input/output (cin, cout) and handling strings.
// cout << "Tell me anything..." << endl;:

// Displays the message to the console, prompting the user to enter something.
// getline(cin, anything);:

// This command reads the entire line of input (including spaces) and stores it in the anything string variable.
// Unlike cin, which stops reading at the first space, getline reads until the user presses Enter.
// Response (cout):

// Prints the response using the stored input: Hmm... <user input> ... Really?
// return 0;:

// Ends the program successfully.
