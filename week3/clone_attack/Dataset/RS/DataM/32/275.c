void  xXVkzER2mdIr (int y6nOlo9V []) {
    int pxwjT1;
    {
        pxwjT1 = 678 - 678;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (pxwjT1 > (418 - 418)) {
            printf ("%d", y6nOlo9V[pxwjT1]);
            pxwjT1 = pxwjT1 - 1;
        };
    }
    printf ("\n");
}

void  getnum (int y6nOlo9V []) {
    char zrPuIWCVY3m8 [(976 - 876)];
    int pxwjT1;
    scanf ("%s", zrPuIWCVY3m8);
    for (pxwjT1 = (277 - 277); (1065 - 965) > pxwjT1; pxwjT1 = pxwjT1 + 1)
        y6nOlo9V[pxwjT1] = (244 - 244);
    y6nOlo9V[(234 - 234)] = strlen (zrPuIWCVY3m8);
    {
        pxwjT1 = 187 - 186;
        while (pxwjT1 >= (853 - 853)) {
            y6nOlo9V[y6nOlo9V[(278 - 278)] - pxwjT1] = zrPuIWCVY3m8[pxwjT1] - '0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            pxwjT1 = pxwjT1 - 1;
        };
    };
}

void  cWZyJTE (int MVMR4pjC2ShY [], int y6nOlo9V [], int uHMVPi []) {
    int pxwjT1;
    if (y6nOlo9V[0] > uHMVPi[0])
        MVMR4pjC2ShY[0] = y6nOlo9V[0];
    else
        MVMR4pjC2ShY[0] = uHMVPi[0];
    MVMR4pjC2ShY[(650 - 649)] = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (pxwjT1 = (960 - 959); pxwjT1 <= MVMR4pjC2ShY[0]; ++pxwjT1) {
        if (MVMR4pjC2ShY[pxwjT1] + y6nOlo9V[pxwjT1] - uHMVPi[pxwjT1] < 0) {
            MVMR4pjC2ShY[pxwjT1 + 1] = -1;
            MVMR4pjC2ShY[pxwjT1] = MVMR4pjC2ShY[pxwjT1] + y6nOlo9V[pxwjT1] - uHMVPi[pxwjT1] + 10;
        }
        else {
            MVMR4pjC2ShY[pxwjT1 + 1] = 0;
            MVMR4pjC2ShY[pxwjT1] += y6nOlo9V[pxwjT1] - uHMVPi[pxwjT1];
        };
    }
    while (MVMR4pjC2ShY[MVMR4pjC2ShY[0]] == 0)
        --MVMR4pjC2ShY[0];
}

void  main () {
    int y6nOlo9V [(586 - 486)], uHMVPi [100], MVMR4pjC2ShY [100], ugGnXmLPYh;
    scanf ("%d", &ugGnXmLPYh);
    for (; ugGnXmLPYh != 0; ugGnXmLPYh = ugGnXmLPYh - 1) {
        xXVkzER2mdIr (MVMR4pjC2ShY);
        getnum (y6nOlo9V);
        getnum (uHMVPi);
        cWZyJTE (MVMR4pjC2ShY, y6nOlo9V, uHMVPi);
    };
}

