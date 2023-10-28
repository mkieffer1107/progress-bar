# Progress Bar

A progress bar that I made a while back. To test it out, simply run the command

```bash
make demo
```

How to use
```cpp
#include <iostream>
#include <thread> 
#include <chrono> 
#include "progressbar.h"

int main() {
    unsigned int totalIterations = 1000;
    ProgressBar progressBar(totalIterations);

    for (unsigned int i = 0; i < totalIterations; i++) {
        progressBar.update(i);
        std::this_thread::sleep_for(std::chrono::milliseconds(1)); 
    }

    std::cout << "\nProcess completed!" << std::endl;
    return 0;
}
```
