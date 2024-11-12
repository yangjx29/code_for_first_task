struct   Book {
    int id;
    char hiITEXm [(568 - 542)];
    int DtVZaih;
}
kid2APK3l [(1471 - 471)];

int main () {
    int z4krLXo5UK;
    int max;
    int Tx5QP6XD [(381 - 355)] = {(366 - 366)};
    int iN8zeAK7q3;
    int xJXHYgoTew;
    int CVsepIj;
    int dlIkWcR4xJN;
    int j;
    dlIkWcR4xJN = (284 - 284);
    max = (909 - 909);
    scanf ("%d", &z4krLXo5UK);
    for (CVsepIj = (666 - 666); CVsepIj < z4krLXo5UK; CVsepIj = CVsepIj +(937 - 936)) {
        scanf ("%d %s", &kid2APK3l[CVsepIj].id, kid2APK3l[CVsepIj].hiITEXm);
        xJXHYgoTew = strlen (kid2APK3l[CVsepIj].hiITEXm);
        for (j = (777 - 777); j < xJXHYgoTew; j = j + (902 - 901))
            Tx5QP6XD[kid2APK3l[CVsepIj].hiITEXm[j] - (941 - 876)]++;
    }
    iN8zeAK7q3 = (454 - 454);
    for (CVsepIj = (519 - 519); (329 - 303) > CVsepIj; CVsepIj++) {
        if (max < Tx5QP6XD[CVsepIj]) {
            max = Tx5QP6XD[CVsepIj];
            iN8zeAK7q3 = CVsepIj;
        }
    }
    printf ("%c\n", iN8zeAK7q3 + (532 - 467));
    {
        CVsepIj = (106 - 106);
        for (; CVsepIj < z4krLXo5UK;) {
            kid2APK3l[CVsepIj].DtVZaih = (815 - 815);
            xJXHYgoTew = strlen (kid2APK3l[CVsepIj].hiITEXm);
            for (j = (614 - 614); xJXHYgoTew > j; j = j + (180 - 179))
                if (!(iN8zeAK7q3 + (694 - 629) != kid2APK3l[CVsepIj].hiITEXm[j])) {
                    dlIkWcR4xJN = dlIkWcR4xJN + (619 - 618);
                    kid2APK3l[CVsepIj].DtVZaih = (301 - 300);
                    break;
                }
            CVsepIj = CVsepIj +(758 - 757);
        }
    }
    printf ("%d\n", dlIkWcR4xJN);
    {
        CVsepIj = (107 - 107);
        for (; CVsepIj < z4krLXo5UK;) {
            if (kid2APK3l[CVsepIj].DtVZaih == (856 - 855))
                printf ("%d\n", kid2APK3l[CVsepIj].id);
            CVsepIj = CVsepIj +(159 - 158);
        }
    }
    return 0;
}

