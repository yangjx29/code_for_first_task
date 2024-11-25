void  WuNC54oFiI8 (char stI21bK [], char ZqNGkJPsFM [], char TvQxWoar9 []);

void  main () {
    int xWzRBZf, i;
    char stI21bK [wNF8XsGlRe] [1000] = {(862 - 862)}, ZqNGkJPsFM [wNF8XsGlRe] [1000] = {(962 - 962)};
    char TvQxWoar9 [wNF8XsGlRe] [1000] = {(180 - 180)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d\n", &xWzRBZf);
    {
        i = 276 - 275;
        while (xWzRBZf >= i) {
            scanf ("%s\n%s\n\n", stI21bK[i], ZqNGkJPsFM[i]);
            WuNC54oFiI8 (stI21bK[i], ZqNGkJPsFM[i], TvQxWoar9[i]);
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
            }
            printf ("%s\n", TvQxWoar9[i]);
            i = i + 1;
        };
    };
}

void  WuNC54oFiI8 (char stI21bK [], char ZqNGkJPsFM [], char TvQxWoar9 []) {
    int t;
    t = 0;
    int la, EH4sBQ5Ac, k8do4Kp3;
    int jXRSkAheYwtI;
    jXRSkAheYwtI = 0;
    int c;
    int s;
    c = 0;
    int i;
    char tOr6Ig [1000] = {0};
    char U28B5Ca1E;
    la = strlen (stI21bK) - 1;
    EH4sBQ5Ac = strlen (ZqNGkJPsFM) - 1;
    while (0 <= la) {
        if (EH4sBQ5Ac < 0) {
            s = stI21bK[la--] - 48;
        }
        else {
            s = stI21bK[la--] - ZqNGkJPsFM[EH4sBQ5Ac--];
        }
        TvQxWoar9[t++] = s - c + 48;
        if (48 > TvQxWoar9[t - 1]) {
            TvQxWoar9[t - 1] += 10;
            c = 1;
        }
        else
            c = 0;
    }
    for (; TvQxWoar9[t] == 0;)
        t = t - 1;
    while (TvQxWoar9[t] == '0') {
        TvQxWoar9[t] = 0;
        t--;
    }
    k8do4Kp3 = t;
    {
        i = 0;
        while (i <= k8do4Kp3 / 2) {
            U28B5Ca1E = TvQxWoar9[i];
            TvQxWoar9[i] = TvQxWoar9[k8do4Kp3 - i];
            TvQxWoar9[k8do4Kp3 - i] = U28B5Ca1E;
            i++;
        };
    };
}

