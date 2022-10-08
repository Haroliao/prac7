#include <iostream>
#include "QuickSort.h"
#include <vector>
using namespace std;

int rearrange(vector<int>arr, int l, int h){
    int pivot=arr[2];
    int i=l-1;
    for (int j=l; j<h; j++){
        if (arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
        swap(arr[i+1],pivot);
        return i+1;

}
void quicksort(vector<int>list, int low, int high){
    if (low>=high){return;}
    else{
        int p_index=rearrange(list,low,high);
        quicksort(list,low,p_index-1);
        quicksort(list,p_index+1,high);
    }
}
vector<int> QuickSort::sort(vector<int> list){
    if(list.size()==1){return list;}
    if(list.size()==2){
        if (list.at(0)>list.at(1)){
            swap(list.at(1), list.at(0));
        }
        if (list.at(0)<list.at(1)){
            return list;
        }
    }
    if (list.size()>2){
    int high=list.size()-1;
     quicksort(list,0,high);
      return list;
    }
    return list;
}


