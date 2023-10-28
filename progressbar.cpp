#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include "progressbar.h"
using namespace std;

ProgressBar::ProgressBar(unsigned int tot)
{
    this->current = 0;
    this->total = tot;
    this->progress = 0.0;
}

void ProgressBar::update(unsigned int curr)
{
    // use for iterators (unsigned int i = 0; i < size())
    // so add 1 --> 0-99 to 1-100 if 100 iterations
    this->current = curr+1;
    this->progress = 100*((float)this->current / (float)this->total);

    // 50 total spaces, so number of tokens is max of 50
    int numTokens = progress/2;

    string token = "█";
    string bar = "{";
    string percent = to_string(progress);

    int index = 0;
    while (1)
    {
        if (percent[index] == '.')
            break;
        else
            index++;
    }
    percent = percent.substr(0, index+3);

    //cout << "progress: " << progress << endl;
    //cout << current << "/" << total << endl;
    //cout << "numTokens: " << numTokens << endl;
    // add tokens to bar
    for (unsigned int i = 0; i < numTokens; i++)
        bar += token;
    // add blank spaces to end
    for (unsigned int i = 0; i < 50-numTokens; i++)
        bar += " ";
    // add closing bracket to bar
    bar += "}   ";
    bar += percent;
    bar += "%";
    
    cout << string(bar.length(),'\b');
    cout << bar;
}