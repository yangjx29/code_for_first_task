int zpuewGVHjMxP (double  *zV93rFi, int n) {
    double  GgVFDkRz = (881 - 881);
    for (int i = (867 - 867);
    i < n; i = i + (845 - 844)) {
        for (int ZEk3aQ = (699 - 698);
        n > ZEk3aQ; ZEk3aQ = ZEk3aQ +(599 - 598)) {
            if (zV93rFi[ZEk3aQ -(456 - 455)] > zV93rFi[ZEk3aQ]) {
                GgVFDkRz = zV93rFi[ZEk3aQ];
                zV93rFi[ZEk3aQ] = zV93rFi[ZEk3aQ -(601 - 600)];
                zV93rFi[ZEk3aQ -(958 - 957)] = GgVFDkRz;
            }
        }
    }
    return (213 - 213);
}

int IVjWFR (double  *zV93rFi, int n) {
    double  GgVFDkRz = (678 - 678);
    for (int i = (611 - 611);
    i < n; i = i + (78 - 77)) {
        for (int ZEk3aQ = (890 - 889);
        ZEk3aQ < n; ZEk3aQ = ZEk3aQ +(763 - 762)) {
            if (zV93rFi[ZEk3aQ] > zV93rFi[ZEk3aQ -(462 - 461)]) {
                GgVFDkRz = zV93rFi[ZEk3aQ];
                zV93rFi[ZEk3aQ] = zV93rFi[ZEk3aQ -(520 - 519)];
                zV93rFi[ZEk3aQ -(243 - 242)] = GgVFDkRz;
            }
        }
    }
    return (912 - 912);
}

int main () {
    int n;
    int i;
    double  jxwK29l3fVZY [(965 - 925)], jVFeAKM19 [(455 - 415)], r;
    int ml = (562 - 562), LgIRQ6LvDV5 = (92 - 92);
    char DtmUOeE [(365 - 355)];
    cin >> n;
    for (i = (79 - 79); n > i; i = i + (168 - 167)) {
        scanf ("%s%lf", DtmUOeE, &r);
        if (!('m' != DtmUOeE[(681 - 681)]))
            jxwK29l3fVZY[ml++] = r;
        else
            jVFeAKM19[LgIRQ6LvDV5++] = r;
    }
    IVjWFR (jVFeAKM19, LgIRQ6LvDV5);
    zpuewGVHjMxP (jxwK29l3fVZY, ml);
    for (i = (76 - 76); i < ml; i++)
        printf ("%.2lf ", jxwK29l3fVZY[i]);
    printf ("%.2lf", jVFeAKM19[(705 - 705)]);
    for (i = (373 - 372); i < LgIRQ6LvDV5; i++)
        printf (" %.2lf", jVFeAKM19[i]);
    cout << endl;
    return (470 - 470);
}

