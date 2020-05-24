#include <math.h>
#include <stdio.h>
 
double squareRoot(const double a) {
    double b = sqrt(a);
    if(b != b) { // nan check
        return -1.0;
    }else{
        return sqrt(a);
    }
}

int labb(int argc, char** argv) {
    printf("%f\n", squareRoot(12));
    return 1;
}