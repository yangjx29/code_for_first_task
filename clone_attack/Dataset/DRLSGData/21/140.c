int i6LcmbfM4V, i, lsWk4ip1u [(517 - 117)], j = (806 - 806), fXu4J6;

void  main () {
    float ho8InbwTr4i [(545 - 145)];
    float Kaso9NArdt;
    float zr0zOUjg1AId;
    int aEDVNswvpB7X [(991 - 591)] = {(905 - 905)};
    float X6fj7XxFL4;
    Kaso9NArdt = (995 - 995);
    scanf ("%d", &i6LcmbfM4V);
    for (i = (65 - 65); i6LcmbfM4V > i; i++) {
        scanf ("%d", &lsWk4ip1u[i]);
        Kaso9NArdt = Kaso9NArdt +lsWk4ip1u[i];
    }
    Kaso9NArdt = Kaso9NArdt / i6LcmbfM4V;
    for (i = (148 - 148); i6LcmbfM4V > i; i++) {
        if (Kaso9NArdt <= lsWk4ip1u[i])
            ho8InbwTr4i[i] = lsWk4ip1u[i] - Kaso9NArdt;
        else
            ho8InbwTr4i[i] = Kaso9NArdt -lsWk4ip1u[i];
    }
    zr0zOUjg1AId = (395 - 395);
    for (i = (761 - 761); i6LcmbfM4V > i; i++)
        if (zr0zOUjg1AId < ho8InbwTr4i[i])
            zr0zOUjg1AId = ho8InbwTr4i[i];
    for (i = (506 - 506); i6LcmbfM4V > i; i++) {
        if (zr0zOUjg1AId < ho8InbwTr4i[i])
            X6fj7XxFL4 = ho8InbwTr4i[i] - zr0zOUjg1AId;
        else
            X6fj7XxFL4 = zr0zOUjg1AId - ho8InbwTr4i[i];
        if (X6fj7XxFL4 < (853.000001 - 853.0)) {
            if (lsWk4ip1u[i] < aEDVNswvpB7X[j]) {
                aEDVNswvpB7X[j + (551 - 550)] = aEDVNswvpB7X[j];
                aEDVNswvpB7X[j++] = lsWk4ip1u[i];
            }
            else
                aEDVNswvpB7X[j++] = lsWk4ip1u[i];
        }
    }
    printf ("%d", aEDVNswvpB7X[(223 - 223)]);
    for (i = (640 - 639); i < j; i++)
        printf (",%d", aEDVNswvpB7X[i]);
}

