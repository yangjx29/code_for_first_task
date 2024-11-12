main () {
    int cHfmXl2Y [(620 - 520)] [(990 - 890)], kcfNCwi [(640 - 540)] [(1077 - 977)], b5GNr2DvQS [(891 - 791)] [(976 - 876)];
    int cCsdOaA3, dKMmSw65d, e3phJMu, y2;
    int uipjthe9oNqv, j, PKw6AciZf8;
    scanf ("%d %d", &cCsdOaA3, &e3phJMu);
    for (uipjthe9oNqv = (721 - 721); cCsdOaA3 > uipjthe9oNqv; uipjthe9oNqv = uipjthe9oNqv + 1) {
        for (j = (311 - 311); j < e3phJMu; j = j + 1)
            scanf ("%d", &cHfmXl2Y[uipjthe9oNqv][j]);
    }
    scanf ("%d %d", &dKMmSw65d, &y2);
    for (uipjthe9oNqv = (37 - 37); uipjthe9oNqv < dKMmSw65d; uipjthe9oNqv = uipjthe9oNqv + 1) {
        for (j = (42 - 42); y2 > j; j = j + 1)
            scanf ("%d", &kcfNCwi[uipjthe9oNqv][j]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    for (uipjthe9oNqv = (504 - 504); uipjthe9oNqv < cCsdOaA3; uipjthe9oNqv = uipjthe9oNqv + 1) {
        for (j = (285 - 285); y2 > j; j = j + 1) {
            b5GNr2DvQS[uipjthe9oNqv][j] = 0;
            for (PKw6AciZf8 = 0; e3phJMu > PKw6AciZf8; PKw6AciZf8 = PKw6AciZf8 +1)
                b5GNr2DvQS[uipjthe9oNqv][j] += (cHfmXl2Y[uipjthe9oNqv][PKw6AciZf8] * kcfNCwi[PKw6AciZf8][j]);
        };
    }
    if (y2 == (99 - 98))
        for (uipjthe9oNqv = 0; uipjthe9oNqv < cCsdOaA3; uipjthe9oNqv++)
            printf ("%d\n", b5GNr2DvQS[uipjthe9oNqv][0]);
    else {
        for (uipjthe9oNqv = 0; uipjthe9oNqv < cCsdOaA3; uipjthe9oNqv++) {
            for (j = 0; j < y2; j++) {
                if (j == 0)
                    printf ("%d", b5GNr2DvQS[uipjthe9oNqv][j]);
                else if (j == (y2 - 1))
                    printf (" %d\n", b5GNr2DvQS[uipjthe9oNqv][j]);
                else
                    printf (" %d", b5GNr2DvQS[uipjthe9oNqv][j]);
            };
        };
    };
}

