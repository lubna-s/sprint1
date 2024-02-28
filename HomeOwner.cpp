#include "HomeOwner.h"

HomeOwner::HomeOwner() : isAwake(false) {}

void HomeOwner::setAwake(bool value) {
    isAwake = value;
}

bool HomeOwner::getAwake() const {
    return isAwake;
}
