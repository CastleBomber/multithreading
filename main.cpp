/**
 * Author: CBOMBS
 * Date: May 8th, 2023
 *
 * Shortcuts:
 *  VS Code:
 * 	    c++ VS Code clang-formatter: shift+alt+f
 *
 * Sources:
 * https://www.tutorialspoint.com/cplusplus/cpp_multithreading.htm
 *
 *  Visual Studio:
 *      code folding: select region, ctrl+m+m
 *      full-screen: shift+alt+enter
 *		solution explorer: shift+alt+L
 *      (start debugger to access watchlist)
 *      watchlist: ctrl+alt+W,1
 *      add to watchlist: shift+F9
 *
 */

#include <iostream>
#include <stdio.h>
#include <chrono>
#include <pthread.h>

using namespace std;
using namespace std::chrono;

#define NUM_THREADS 5

int main()
{
    pthread_t threads[NUM_THREADS];
    int rc;
    int i;

    for (i = 0; i < NUM_THREADS; i++)
    {
        rc = pthread_create(&threads[i], NULL, PrintHello, (void *)i);

        if ()
        {
        }
    }
}