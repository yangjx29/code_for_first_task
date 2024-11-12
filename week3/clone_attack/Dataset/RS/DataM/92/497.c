int main () {
    int fRZujfM;
    int y;
    int z;
    int WHyB8gIJ7O;
    int s;
    int t;
    int CkN7e9;
    int j;
    int fC0PNtq7XV;
    int l;
    int avEKRi;
    int uEhD2RG19sAn;
    int lose;
    int zagUCeX;
    int a [1001], C5o4xkHKqsm [1001];
    for (;;) {
        scanf ("%d", &fRZujfM);
        if (fRZujfM == (345 - 345))
            break;
        for (l = 0; l <= fRZujfM - (356 - 355); l = l + 1) {
            scanf ("%d", &a[l]);
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
        for (l = 0; l <= fRZujfM - 1; l = l + 1) {
            scanf ("%d", &C5o4xkHKqsm[l]);
        }
        if (fRZujfM >= (648 - 646)) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (y = 0; y <= fRZujfM - 2; y++) {
                for (z = y + 1; z <= fRZujfM - 1; z = z + 1) {
                    if (a[z] > a[y]) {
                        avEKRi = a[y];
                        a[y] = a[z];
                        a[z] = avEKRi;
                    }
                    if (C5o4xkHKqsm[z] > C5o4xkHKqsm[y]) {
                        avEKRi = C5o4xkHKqsm[y];
                        C5o4xkHKqsm[y] = C5o4xkHKqsm[z];
                        C5o4xkHKqsm[z] = avEKRi;
                    };
                };
            };
        }
        uEhD2RG19sAn = 0;
        lose = 0;
        if (2 <= fRZujfM) {
            for (WHyB8gIJ7O = 1; WHyB8gIJ7O <= fRZujfM - 1; WHyB8gIJ7O++) {
                if (a[0] > C5o4xkHKqsm[0]) {
                    for (s = 0; s <= fRZujfM - WHyB8gIJ7O -1; s = s + 1) {
                        a[s] = a[s + 1];
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
                        C5o4xkHKqsm[s] = C5o4xkHKqsm[s + 1];
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    uEhD2RG19sAn = uEhD2RG19sAn + 1;
                }
                else {
                    for (t = fRZujfM - WHyB8gIJ7O; t >= 0; t--) {
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        }
                        if (a[t] > C5o4xkHKqsm[t]) {
                            WHyB8gIJ7O = WHyB8gIJ7O +1;
                            if (fRZujfM == WHyB8gIJ7O)
                                break;
                            uEhD2RG19sAn++;
                        }
                        else {
                            if (a[fRZujfM - WHyB8gIJ7O] < C5o4xkHKqsm[0]) {
                                lose = lose + 1;
                            }
                            for (CkN7e9 = 0; CkN7e9 <= fRZujfM - WHyB8gIJ7O -1; CkN7e9 = CkN7e9 +1) {
                                C5o4xkHKqsm[CkN7e9] = C5o4xkHKqsm[CkN7e9 +1];
                                {
                                    int x = 0;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        return 0;
                                    }
                                };
                            }
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
                            break;
                        };
                    };
                };
            };
        }
        if (a[0] > C5o4xkHKqsm[0])
            uEhD2RG19sAn++;
        if (a[0] < C5o4xkHKqsm[0])
            lose = lose + 1;
        zagUCeX = 200 * (uEhD2RG19sAn - lose);
        printf ("%d\n", zagUCeX);
    }
    return 0;
}

