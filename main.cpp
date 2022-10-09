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
   //input=sortB->sort({-5,1,3,5,4,100,7777,2014,0});
   input=sortB->sort({5,3,-5,4,100,7777,2014,0});
    //BubbleSort B;
    //Sort*sortB=&B;
  //input=sortB->sort({4,3,2,6});
   RecursiveBinarySearch A;
  bool ans;
  ans=A.search(input,1);
  if (ans==0){cout <<"false ";}
 if (ans==1){cout <<"true ";}
     int size=input.size();
    for (int i=0;i<size;i++){
        cout << input[i]<<" ";
    }
    return 0;

}