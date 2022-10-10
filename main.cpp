#include <iostream>
#include "Sort.h"
//#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

using namespace std;
int main(){
    int temp;
    vector<int> input;
    vector<int> sortedInput;
   QuickSort B;
   Sort * sortB = &B;
   //input=sortB->sort({-5,1,3,5,4,100,7777,2014,0});
   //input=sortB->sort({-5,-8,-4,-2,1});
      for (int i=0;i<8;i++){
        cin >> temp;
        input.push_back(temp);
    }
    sortedInput=sortB->sort(input);
    //BubbleSort B;
    //Sort*sortB=&B;
  //input=sortB->sort({4,3,2,6});
   RecursiveBinarySearch A;
  bool ans;
  ans=A.search(sortedInput,1);
  if (ans==0){cout <<"false ";}
 if (ans==1){cout <<"true ";}
     int size=sortedInput.size();
    for (int i=0;i<size;i++){
        cout << sortedInput[i]<<" ";
    }
    return 0;

}