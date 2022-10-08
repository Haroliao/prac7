#include <iostream>
#include "BubbleSort.h"
#include <vector>
using namespace std;
vector<int>BubbleSort::sort(vector<int> list){
    int i, j;
    int n=list.size();
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (list[j] > list[j + 1]){
                swap(list[j], list[j + 1]);
            }
        }
    }
    return list;
}