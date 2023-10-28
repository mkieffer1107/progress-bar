#include <iostream>
#include <thread> 
#include <chrono> 
#include "progressbar.h"

using namespace std;

int main() {
    unsigned int totalIterations = 1000;
    ProgressBar progressBar(totalIterations);

    for (unsigned int i = 0; i < totalIterations; i++) {
        progressBar.update(i);
        this_thread::sleep_for(chrono::milliseconds(1));
    }

    cout << endl;

    cout << "Process completed!" << endl;

    return 0;
}
