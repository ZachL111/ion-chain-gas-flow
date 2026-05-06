#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {56, 40, 14, 46};
    assert(domain_review_score(item) == 156);
    assert(strcmp(domain_review_lane(item), "ship") == 0);
    return 0;
}
