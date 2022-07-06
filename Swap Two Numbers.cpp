#include <utility>

pair < int, int > swap(pair < int, int > swapValues) {
    // Write your code here.
    pair<int,int>result;
    result.first=swapValues.second;
    result.second=swapValues.first;
    return result;
}
