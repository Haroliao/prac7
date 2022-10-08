#include <iostream>
#include "Sort.h"
//#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

using namespace std;
int main(){
    vector<int> input;
    QuickSort B;
    Sort * sortB = &B;
    input=sortB->sort({4,3,2,6});
    //BubbleSort B;
    //Sort*sortB=&B;
   // sortB->sort({4,3,2,6});
   RecursiveBinarySearch A;
   A.search(input,2);

}