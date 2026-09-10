#include <vector>

long long saturatingSum(
    const std::vector<int>& values,
    long long lower,
    long long upper
) {
    long long sum = 0;
    for (int i = 0; i < values.size(); i ++){
      sum += values[i];
      if(sum <= lower){
        sum = lower;
      }else if (sum >= upper){
        sum = upper;
      }
    return sum;
    }
}
