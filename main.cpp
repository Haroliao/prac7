#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"
//#include "QuickSort.h"
//#include "RecursiveBinarySearch.h"

using namespace std;
int main(){
    //QuickSort B;
    //Sort * sortB = &B;
    //sortB->sort({4,3,2,6});
    BubbleSort B;
    Sort*sortB=&B;
    sortB->sort({4,3,2,6});
}