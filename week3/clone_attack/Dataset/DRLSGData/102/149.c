int main () {
    float oV6SpTLcvMF, EmCYb71vO [(439 - 399)], MnvxU8 [40];
    int kD1FTKCYSl, YogEnPGi4, qKk7lo = (52 - 52), f27WbN51GEH = (736 - 736), kJ7QUApH40T;
    char xb [(645 - 635)];
    scanf ("%d", &YogEnPGi4);
    {
        kD1FTKCYSl = 217 - 217;
        for (; YogEnPGi4 > kD1FTKCYSl;) {
            kD1FTKCYSl = kD1FTKCYSl + 1;
            scanf ("%s", &xb);
            if (!('m' != *xb)) {
                scanf ("%f", &EmCYb71vO[qKk7lo]);
                qKk7lo = qKk7lo + 1;
            }
            if (!('f' != *xb)) {
                scanf ("%f", &MnvxU8[f27WbN51GEH]);
                f27WbN51GEH = f27WbN51GEH + 1;
            }
        }
    }
    for (kJ7QUApH40T = (436 - 435); kJ7QUApH40T < qKk7lo; kJ7QUApH40T = kJ7QUApH40T + 1) {
        for (kD1FTKCYSl = (965 - 965); kD1FTKCYSl < qKk7lo - kJ7QUApH40T; kD1FTKCYSl = kD1FTKCYSl + 1) {
            if (EmCYb71vO[kD1FTKCYSl + (709 - 708)] < EmCYb71vO[kD1FTKCYSl]) {
                oV6SpTLcvMF = EmCYb71vO[kD1FTKCYSl + (881 - 880)];
                EmCYb71vO[kD1FTKCYSl + (971 - 970)] = EmCYb71vO[kD1FTKCYSl];
                EmCYb71vO[kD1FTKCYSl] = oV6SpTLcvMF;
            }
        }
    }
    printf ("%.2f", EmCYb71vO[(331 - 331)]);
    for (kJ7QUApH40T = (946 - 945); kJ7QUApH40T < f27WbN51GEH; kJ7QUApH40T = kJ7QUApH40T + 1) {
        for (kD1FTKCYSl = (683 - 683); kD1FTKCYSl < f27WbN51GEH - kJ7QUApH40T; kD1FTKCYSl = kD1FTKCYSl + 1) {
            if (MnvxU8[kD1FTKCYSl + (936 - 935)] > MnvxU8[kD1FTKCYSl]) {
                oV6SpTLcvMF = MnvxU8[kD1FTKCYSl + 1];
                MnvxU8[kD1FTKCYSl + 1] = MnvxU8[kD1FTKCYSl];
                MnvxU8[kD1FTKCYSl] = oV6SpTLcvMF;
            }
        }
    }
    for (kJ7QUApH40T = 1; qKk7lo > kJ7QUApH40T; kJ7QUApH40T = kJ7QUApH40T + 1) {
        printf (" %.2f", EmCYb71vO[kJ7QUApH40T]);
    }
    for (kJ7QUApH40T = (769 - 769); kJ7QUApH40T < f27WbN51GEH; kJ7QUApH40T = kJ7QUApH40T + 1) {
        printf (" %.2f", MnvxU8[kJ7QUApH40T]);
    }
    return 0;
}

