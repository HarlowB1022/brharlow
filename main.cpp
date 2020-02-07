#include <iostream>
#include <chrono>
int fib(int n){  //find the n-th fibonacci number recursively
    if(n < 0)
        throw -1;
    if(n == 0)       //base cases
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n-1) + fib(n-2);    //recursive case
}
int iterFib(int n){   //find n-th fibonacci number iteratively
   if(n < 0)
        throw -1;
    if(n == 0)               //return 0 or 1 for the zeroth and first fibonacci numbers
        return 0;
    else if (n == 1)
        return 1;
    int previous = 1;        //variable that stores the value of the previous fibonacci number - initialized to fib(1)
    int prePrevious = 0;     //variable that stores the n-2 fibonacci number - initialized to fib(0)
    int answer;
    for(int i = 0; i < n-1; i++)            //the loop runs n-2 times because the first two numbers have already been calculated above
    {
        answer = previous + prePrevious;    // compute the next number in the sequence
        prePrevious = previous;             //the previous number in the sequence becomes  fib(n-2)
        previous = answer;                  //the new number becomes the previous number
    }
    return answer;
}
int main() {
    int iter[10];
    int rec[10];
    for(int i = 0; i <= 10;i++) {      //find the first 10 fibonacci numbers
        rec[i] = fib(i);
        iter[i] = iterFib(i);
    }
    for(int i = 0; i <=10; i++)       //print the recursive results
        std::cout << rec[i] << ", ";
    std::cout << "\n";
    for(int i = 0; i <=10; i++)        //print the iterative results
        std::cout << iter[i] << ", ";
    std::cout << "\n";

    try {                             //the function should not allow negative parameters
        iterFib(-1);
    }
    catch (int e) {
        if (e == -1)
            std::cout << "ValueError";
    }


    for(int i = 2000000; i <= 2001000; i++) {
        auto start = std::chrono::high_resolution_clock::now();
        int  n = iterFib(i);
        std::cout << n << std::endl;
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
        std::cout << duration.count() << std::endl;
    }
    std:: cout << "\n";
    for(int i = 2000000; i <= 2001000; i++) {
        auto start2 = std::chrono::high_resolution_clock :: now();
        int  n = iterFib(2*i);
        std::cout << n << std::endl;
        auto end2 = std::chrono::high_resolution_clock :: now();
        auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>(end2 - start2);
        std:: cout << duration2.count() << std::endl;
    }
    return 0;
}