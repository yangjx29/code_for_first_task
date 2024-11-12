int cBz4vP (void  const  *Yb5tNo, void  const  *SIy9qK) {
    return (*(int*) Yb5tNo -*(int*) SIy9qK);
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
}

main () {
    int tfast;
    int tslow;
    int wfast;
    int FrVIZ9ud;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    int kvUE1Hu, p59gBf [1001], CKRhPkW [1001], sum;
    scanf ("%d", &kvUE1Hu);
    while (!(0 == kvUE1Hu)) {
        tslow = 0;
        {
            int i = 0;
            while (kvUE1Hu > i) {
                scanf ("%d", &CKRhPkW[i]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        }
        {
            int i = 0;
            while (i < kvUE1Hu) {
                scanf ("%d", &p59gBf[i]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i++;
            };
        }
        tfast = kvUE1Hu - 1;
        wfast = kvUE1Hu - 1;
        FrVIZ9ud = 0;
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
        sum = 0;
        qsort (CKRhPkW, kvUE1Hu, sizeof (CKRhPkW [0]), cBz4vP);
        qsort (p59gBf, kvUE1Hu, sizeof (p59gBf [0]), cBz4vP);
        {
            int i = 0;
            while (i < kvUE1Hu) {
                if (CKRhPkW[tfast] > p59gBf[wfast]) {
                    wfast = wfast - 1;
                    tfast = tfast - 1;
                    sum = sum + 1;
                }
                else if (p59gBf[wfast] > CKRhPkW[tfast]) {
                    sum = sum - 1;
                    wfast = wfast - 1;
                    tslow = tslow + 1;
                }
                else if (!(CKRhPkW[tfast] != p59gBf[wfast])) {
                    if (!(CKRhPkW[tslow] != p59gBf[FrVIZ9ud])) {
                        if (p59gBf[wfast] == p59gBf[FrVIZ9ud])
                            break;
                        else {
                            if (p59gBf[wfast] > CKRhPkW[tslow]) {
                                tslow++;
                                wfast = wfast - 1;
                                sum = sum - 1;
                            };
                        };
                    }
                    else {
                        if (p59gBf[FrVIZ9ud] > CKRhPkW[tslow]) {
                            tslow++;
                            wfast--;
                            sum--;
                        }
                        else if (p59gBf[FrVIZ9ud] < CKRhPkW[tslow]) {
                            sum++;
                            FrVIZ9ud = FrVIZ9ud +1;
                            tslow++;
                        };
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                i++;
            };
        }
        printf ("%d\n", sum * 200);
        scanf ("%d", &kvUE1Hu);
    };
}

