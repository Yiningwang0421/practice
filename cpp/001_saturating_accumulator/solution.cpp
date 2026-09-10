#include <vector>
#include <climits>

long long saturatingSum(
    const std::vector<int>& values,
    long long lower,
    long long upper
) {
    long long sum = 0;

    for (int value : values) {

        // Prevent long long overflow before doing sum + value
        if (value > 0 && sum > LLONG_MAX - value) {
            sum = upper;
        }
        else if (value < 0 && sum < LLONG_MIN - value) {
            sum = lower;
        }
        else {
            sum += value;

            if (sum > upper) {
                sum = upper;
            }
            else if (sum < lower) {
                sum = lower;
            }
        }
    }

    return sum;
}
