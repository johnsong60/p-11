// Author: johnathan song
// GitHub:
// November 04, 2020
// csis 123a

#include <cstdlib>
#include <iostream>
using namespace std;


int optionA(int n) {
    if (n < 1) {
        return 1;
    }
    return n * optionA(n - 1);
}

int main(int argc, char** argv) {
    
    cout << optionA(5);
    return 0;
}

