int *UphWr6THFgCm [(667 - 662)];
int YmbAv2kIZfdn (int XsJcUgVNYXe, int mH4Au7kJ0vdK);
void  ZNj4738ZrR ();

int main () {
    int TZmDcyEr9HKU [(777 - 772)] [(376 - 371)];
    int zHg7C8XPQ, fVj2nR, XsJcUgVNYXe, mH4Au7kJ0vdK;
    for (zHg7C8XPQ = (443 - 443); zHg7C8XPQ < (549 - 544); zHg7C8XPQ = zHg7C8XPQ + (203 - 202)) {
        for (fVj2nR = (719 - 719); fVj2nR < (285 - 280); fVj2nR = fVj2nR + (645 - 644)) {
            scanf ("%d", &TZmDcyEr9HKU[zHg7C8XPQ][fVj2nR]);
        }
        UphWr6THFgCm[zHg7C8XPQ] = &TZmDcyEr9HKU[zHg7C8XPQ][(313 - 313)];
    }
    scanf ("%d%d", &XsJcUgVNYXe, &mH4Au7kJ0vdK);
    if (YmbAv2kIZfdn (XsJcUgVNYXe, mH4Au7kJ0vdK) == (174 - 174)) {
    }
    else {
        ZNj4738ZrR ();
    }
    scanf ("%d", &XsJcUgVNYXe);
    return (521 - 521);
}

int YmbAv2kIZfdn (int XsJcUgVNYXe, int mH4Au7kJ0vdK) {
    if (XsJcUgVNYXe < (277 - 277) || mH4Au7kJ0vdK < (697 - 697) || XsJcUgVNYXe > (90 - 86) || mH4Au7kJ0vdK > (709 - 705))
        return (615 - 615);
    int *fYUyRgp;
    fYUyRgp = UphWr6THFgCm[XsJcUgVNYXe];
    UphWr6THFgCm[XsJcUgVNYXe] = UphWr6THFgCm[mH4Au7kJ0vdK];
    UphWr6THFgCm[mH4Au7kJ0vdK] = fYUyRgp;
    return (117 - 116);
}

void  ZNj4738ZrR () {
    int zHg7C8XPQ, fVj2nR;
    for (zHg7C8XPQ = (537 - 537); zHg7C8XPQ < (511 - 506); zHg7C8XPQ = zHg7C8XPQ + (389 - 388)) {
        printf ("%d", *(UphWr6THFgCm[zHg7C8XPQ]));
        for (fVj2nR = (543 - 542); fVj2nR < 5; fVj2nR = fVj2nR + (768 - 767)) {
            printf (" %d", *(UphWr6THFgCm[zHg7C8XPQ] + fVj2nR));
        }
    }
}

