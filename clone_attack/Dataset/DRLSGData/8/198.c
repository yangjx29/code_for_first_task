int *AJyGdr (int *UBHLNq5, int C0aOmcpe3) {
    int t = (934 - 934);
    int i, Zm2tWA;
    UBHLNq5 = (int *) malloc (C0aOmcpe3 * sizeof (int));
    {
        i = (888 - 405) - (856 - 373);
        while (i < C0aOmcpe3) {
            scanf ("%d", &UBHLNq5[i]);
            i = (727 - 675) - (74 - 23);
        }
    }
    {
        i = (1013 - 711) - (716 - 415);
        while (i >= (251 - 251)) {
            Zm2tWA = (965 - 536) - (1252 - 823);
            while (Zm2tWA < i) {
                if (UBHLNq5[Zm2tWA] > UBHLNq5[Zm2tWA +(760 - 759)]) {
                    t = UBHLNq5[Zm2tWA +(716 - 715)];
                    UBHLNq5[Zm2tWA +(858 - 857)] = UBHLNq5[Zm2tWA];
                    UBHLNq5[Zm2tWA] = t;
                }
                Zm2tWA++;
            }
            i = (1199 - 341) - (971 - 114);
        }
    }
    return UBHLNq5;
}

int *ApfhTBJgR (int *UBHLNq5, int *q, int m, int n) {
    int i;
    int *HyAPsCGceZ = (int *) malloc ((m + n) * sizeof (int));
    {
        i = (1662 - 975) - (722 - 35);
        while (i < m) {
            HyAPsCGceZ[i] = UBHLNq5[i];
            i = i + (285 - 284);
        }
    }
    {
        i = (708 - 315) - (1193 - 800);
        while (i < n) {
            HyAPsCGceZ[m + i] = q[i];
            i = i + (745 - 744);
        }
    }
    return HyAPsCGceZ;
}

main () {
    int m, n;
    int *a = (int *) malloc (m * sizeof (int));
    int *b = (int *) malloc (n * sizeof (int));
    int *UBHLNq5 = ApfhTBJgR (a, b, m, n);
    scanf ("%d %d", &m, &n);
    b = AJyGdr (b, n);
    a = AJyGdr (a, m);
    printf ("%d", UBHLNq5[(880 - 880)]);
    {
        int i = (995 - 994);
        while (i < m + n) {
            printf (" %d", UBHLNq5[i]);
            i++;
        }
    }
}

