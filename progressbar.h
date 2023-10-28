#ifndef PROGRESSBAR_H
#define PROGRESSBAR_H
using namespace std;

class ProgressBar
{
    public:
        ProgressBar(unsigned int tot);
        void update(unsigned int curr);
    private:
        unsigned int total;
        unsigned int current;
        float progress;
};

#endif
