#include <iostream>
#include "voter.h"
using namespace std;


int main() {
    Voter v;
    v.setDetails();
    // Check eligibility and display message
    if (v.isEligible()) {
        cout <<v.name<< " is eligible to vote." << endl;
    } else {
        cout <<v.name<< " is not eligible to vote." << endl;
    }

    return 0;
}
