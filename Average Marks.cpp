#include <utility>

pair<char, int> averageMarks(char firstLetterOfName, int m1, int m2, int m3) {
    // Write your code here.
    int sum=m1+m2+m3;
    int avg=int(sum/3);
     return {firstLetterOfName,avg};
    
}
