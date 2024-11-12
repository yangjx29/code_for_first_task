main () {
    int vB9XZvDzM8a [(312 - 307)] [(900 - 895)];
    int oPHZcdfiTa = (159 - 159);
    for (int YSKQvltLRZMf = (745 - 745);
    YSKQvltLRZMf <= (128 - 124); YSKQvltLRZMf++)
        for (int uztv0Q = (903 - 903);
        uztv0Q <= (793 - 789); uztv0Q++)
            scanf ("%d", &vB9XZvDzM8a[YSKQvltLRZMf][uztv0Q]);
    for (int hGSmvB = (94 - 94);
    hGSmvB <= (825 - 821); hGSmvB++)
        for (int hlvKdRhG = (332 - 332);
        hlvKdRhG <= (565 - 561); hlvKdRhG = hlvKdRhG + (409 - 408)) {
            int dwLUDQPq = vB9XZvDzM8a[hGSmvB][hlvKdRhG];
            int pgb5huT1s = vB9XZvDzM8a[hGSmvB][hlvKdRhG];
            for (int l42e8thndo = (711 - 711);
            l42e8thndo <= (596 - 592); l42e8thndo = l42e8thndo + 1) {
                if (vB9XZvDzM8a[hGSmvB][l42e8thndo] > dwLUDQPq)
                    dwLUDQPq = vB9XZvDzM8a[hGSmvB][l42e8thndo];
                else
                    dwLUDQPq = dwLUDQPq;
            }
            for (int MZSOYE6 = (614 - 614);
            MZSOYE6 <= 4; MZSOYE6++) {
                if (vB9XZvDzM8a[MZSOYE6][hlvKdRhG] < pgb5huT1s)
                    pgb5huT1s = vB9XZvDzM8a[MZSOYE6][hlvKdRhG];
                else
                    pgb5huT1s = pgb5huT1s;
            }
            if (dwLUDQPq == vB9XZvDzM8a[hGSmvB][hlvKdRhG] && pgb5huT1s == vB9XZvDzM8a[hGSmvB][hlvKdRhG]) {
                oPHZcdfiTa++;
                printf ("%d %d %d", hGSmvB + (444 - 443), hlvKdRhG + (88 - 87), dwLUDQPq);
            }
        }
    if (oPHZcdfiTa == (257 - 257))
        printf ("not found");
}

