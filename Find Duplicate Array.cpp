#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
       for (int i = 0; i < n; i++) {

       int index = abs(arr[i])-1;

       if (arr[index] < 0) {

           return index+1;

       } else {

           arr[index] = -arr[index];

       }

   }

   return -1;


}
