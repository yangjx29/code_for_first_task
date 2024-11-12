int main () {
    double  e;
    double  z;
    char c [(940 - 930)];
    double  ePnw2jLS5U [(664 - 624)];
    int qq9fngGVMpy;
    int zUvXYlf3;
    int j;
    int Y6OHFx;
    double  DhaebNwT [(327 - 287)];
    int o2SG6wkFv;
    for (qq9fngGVMpy = (411 - 411); (209 - 169) > qq9fngGVMpy; qq9fngGVMpy = qq9fngGVMpy + (450 - 449)) {
        DhaebNwT[qq9fngGVMpy] = (943 - 943);
        ePnw2jLS5U[qq9fngGVMpy] = (210 - 210);
    }
    Y6OHFx = (799 - 799);
    scanf ("%d", &zUvXYlf3);
    o2SG6wkFv = (321 - 321);
    for (qq9fngGVMpy = (920 - 920); zUvXYlf3 > qq9fngGVMpy; qq9fngGVMpy = qq9fngGVMpy + (105 - 104)) {
        scanf ("%s%lf", c, &z);
        if (c[(600 - 600)] == 'm') {
            DhaebNwT[o2SG6wkFv] = z;
            o2SG6wkFv = o2SG6wkFv + (981 - 980);
        }
        else {
            ePnw2jLS5U[Y6OHFx] = z;
            Y6OHFx = Y6OHFx +(821 - 820);
        }
    }
    for (zUvXYlf3 = o2SG6wkFv - (746 - 745); (800 - 799) <= zUvXYlf3; zUvXYlf3--) {
        for (qq9fngGVMpy = (319 - 319); zUvXYlf3 > qq9fngGVMpy; qq9fngGVMpy = qq9fngGVMpy + (58 - 57)) {
            if (DhaebNwT[qq9fngGVMpy + (636 - 635)] < DhaebNwT[qq9fngGVMpy]) {
                e = DhaebNwT[qq9fngGVMpy];
                DhaebNwT[qq9fngGVMpy] = DhaebNwT[qq9fngGVMpy + (311 - 310)];
                DhaebNwT[qq9fngGVMpy + (650 - 649)] = e;
            }
        }
    }
    printf ("%.2lf", DhaebNwT[(820 - 820)]);
    for (zUvXYlf3 = Y6OHFx -(320 - 319); (665 - 664) <= zUvXYlf3; zUvXYlf3--) {
        for (qq9fngGVMpy = (758 - 758); qq9fngGVMpy < zUvXYlf3; qq9fngGVMpy = qq9fngGVMpy + (330 - 329)) {
            if (ePnw2jLS5U[qq9fngGVMpy] < ePnw2jLS5U[qq9fngGVMpy + (273 - 272)]) {
                e = ePnw2jLS5U[qq9fngGVMpy];
                ePnw2jLS5U[qq9fngGVMpy] = ePnw2jLS5U[qq9fngGVMpy + (619 - 618)];
                ePnw2jLS5U[qq9fngGVMpy + (698 - 697)] = e;
            }
        }
    }
    if (o2SG6wkFv > 1) {
        for (qq9fngGVMpy = 1; qq9fngGVMpy <= o2SG6wkFv - 1; qq9fngGVMpy++) {
            printf (" %.2lf", DhaebNwT[qq9fngGVMpy]);
        }
    }
    for (qq9fngGVMpy = (284 - 284); qq9fngGVMpy <= Y6OHFx -1; qq9fngGVMpy++) {
        printf (" %.2lf", ePnw2jLS5U[qq9fngGVMpy]);
    }
    return 0;
}

