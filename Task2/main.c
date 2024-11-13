#include "math_operations.h"
#include "print_operations.h"
#include <stdio.h>

int main(){
    int a = 10, b = 5;
    int result;
    
    result = add(a, b);
    print_result(result);

    return 0;
}