#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {60, 71, 10, 24, 6};
    assert(score_signal(signal_case_1) == 73);
    assert(strcmp(classify_signal(signal_case_1), "review") == 0);
    Signal signal_case_2 = {92, 100, 21, 23, 13};
    assert(score_signal(signal_case_2) == 147);
    assert(strcmp(classify_signal(signal_case_2), "review") == 0);
    Signal signal_case_3 = {69, 81, 17, 9, 9};
    assert(score_signal(signal_case_3) == 142);
    assert(strcmp(classify_signal(signal_case_3), "review") == 0);
    return 0;
}
