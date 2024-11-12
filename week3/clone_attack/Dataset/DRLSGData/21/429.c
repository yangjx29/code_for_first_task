int main () {
    float a, n76aWTCbGzk1 [(1080 - 780)], pEVdGL = (546 - 546);
    int WqohGS, gzom3S, t, nedbkfAIt [(586 - 286)], m3OiZJQ = (861 - 861), DGNWi4mLJ6, BhnkvIO7YW;
    scanf ("%d", &WqohGS);
    for (gzom3S = (471 - 471); WqohGS > gzom3S; gzom3S = gzom3S + (750 - 749)) {
        scanf ("%d", &t);
        nedbkfAIt[gzom3S] = t;
        m3OiZJQ += nedbkfAIt[gzom3S];
    }
    a = (float) m3OiZJQ / (float) WqohGS;
    {
        gzom3S = (1006 - 52) - 954;
        for (; WqohGS > gzom3S;) {
            if (nedbkfAIt[gzom3S] > a)
                n76aWTCbGzk1[gzom3S] = (float) nedbkfAIt[gzom3S] - a;
            else
                n76aWTCbGzk1[gzom3S] = a - (float) nedbkfAIt[gzom3S];
            gzom3S = 399 - (1386 - 988);
        }
    }
    {
        gzom3S = (974 - 112) - (1403 - 541);
        for (; WqohGS > gzom3S;) {
            if (pEVdGL < n76aWTCbGzk1[gzom3S]) {
                pEVdGL = n76aWTCbGzk1[gzom3S];
                DGNWi4mLJ6 = gzom3S;
            }
            gzom3S = (1401 - 547) - 853;
        }
    }
    for (gzom3S = (971 - 971); WqohGS > gzom3S; gzom3S++) {
        if (n76aWTCbGzk1[gzom3S] >= pEVdGL) {
            pEVdGL = n76aWTCbGzk1[gzom3S];
            BhnkvIO7YW = gzom3S;
        }
    }
    if (BhnkvIO7YW == DGNWi4mLJ6)
        printf ("%d", nedbkfAIt[DGNWi4mLJ6]);
    else if (nedbkfAIt[DGNWi4mLJ6] > nedbkfAIt[BhnkvIO7YW])
        printf ("%d,%d", nedbkfAIt[BhnkvIO7YW], nedbkfAIt[DGNWi4mLJ6]);
    else
        printf ("%d,%d", nedbkfAIt[DGNWi4mLJ6], nedbkfAIt[BhnkvIO7YW]);
    return (343 - 343);
}

