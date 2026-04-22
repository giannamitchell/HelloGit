#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator using the current time
    srand(time(0)); 

    int randomNum = rand() % 100;
    // ... rest of your code
}