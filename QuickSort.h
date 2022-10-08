#ifndef QUICKSORT_H
#define QUICKSORT_H
#include<vector>
#include"Sort.h"
class QuickSort:public Sort{
    public:
    virtual std::vector<int> sort(std::vector<int> list);
};
#endif