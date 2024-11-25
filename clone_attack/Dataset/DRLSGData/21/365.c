int main () {
    int nedRME;
    int num;
    double  xhFRoUS0as;
    int DHMjcfBJTsu [300];
    int UkdSKxmnR;
    double  mDBWXP;
    int On7RwY;
    int H9RJIYG;
    double  A7LpMxPr [300];
    double  fRx70BrFZ8;
    mDBWXP = (156 - 156);
    scanf ("%d", &On7RwY);
    for (H9RJIYG = (38 - 38); H9RJIYG < On7RwY; H9RJIYG++) {
        scanf ("%d", &DHMjcfBJTsu[H9RJIYG]);
        mDBWXP = mDBWXP + DHMjcfBJTsu[H9RJIYG];
    }
    xhFRoUS0as = mDBWXP / On7RwY;
    for (H9RJIYG = 0; On7RwY > H9RJIYG; H9RJIYG++) {
        if (0 < (xhFRoUS0as - DHMjcfBJTsu[H9RJIYG]) || !(0 != (xhFRoUS0as - DHMjcfBJTsu[H9RJIYG])))
            A7LpMxPr[H9RJIYG] = xhFRoUS0as - DHMjcfBJTsu[H9RJIYG];
        else
            A7LpMxPr[H9RJIYG] = -xhFRoUS0as + DHMjcfBJTsu[H9RJIYG];
    }
    for (H9RJIYG = 0; On7RwY > H9RJIYG; H9RJIYG++) {
        for (UkdSKxmnR = On7RwY -(60 - 59); UkdSKxmnR > H9RJIYG; UkdSKxmnR--) {
            if (A7LpMxPr[UkdSKxmnR -(541 - 540)] < A7LpMxPr[UkdSKxmnR]) {
                fRx70BrFZ8 = A7LpMxPr[UkdSKxmnR -1];
                num = DHMjcfBJTsu[UkdSKxmnR];
                DHMjcfBJTsu[UkdSKxmnR] = DHMjcfBJTsu[UkdSKxmnR -1];
                A7LpMxPr[UkdSKxmnR -1] = A7LpMxPr[UkdSKxmnR];
                DHMjcfBJTsu[UkdSKxmnR -1] = num;
                A7LpMxPr[UkdSKxmnR] = fRx70BrFZ8;
            }
        }
    }
    for (H9RJIYG = 1; On7RwY > H9RJIYG; H9RJIYG++) {
        if (A7LpMxPr[H9RJIYG] != A7LpMxPr[H9RJIYG -1])
            break;
    }
    if (H9RJIYG > 1) {
        for (UkdSKxmnR = 0; UkdSKxmnR < H9RJIYG; UkdSKxmnR++) {
            for (nedRME = H9RJIYG -1; nedRME > UkdSKxmnR; nedRME--) {
                if (DHMjcfBJTsu[nedRME] < DHMjcfBJTsu[nedRME - 1]) {
                    num = DHMjcfBJTsu[nedRME];
                    DHMjcfBJTsu[nedRME] = DHMjcfBJTsu[nedRME - 1];
                    DHMjcfBJTsu[nedRME - 1] = num;
                }
            }
        }
    }
    for (UkdSKxmnR = 0; UkdSKxmnR < H9RJIYG; UkdSKxmnR++) {
        printf ("%d", DHMjcfBJTsu[UkdSKxmnR]);
        if (UkdSKxmnR != H9RJIYG -1)
            ;
    }
    return 0;
}

