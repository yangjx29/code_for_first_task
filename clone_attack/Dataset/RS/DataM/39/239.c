struct   wDEWc6KU {
    char x5M7Z2 [40];
    int qi;
    int inKZPkSz0;
    char YREykr5MxBj;
    char PGXIb4yOBkKM;
    int AlXvBWAnxe;
    int ji;
}
wDEWc6KU [102];

void  main () {
    int xxmlRM3gfY;
    xxmlRM3gfY = 0;
    int j1FrURgE5;
    int QBjItfyo6;
    int n;
    j1FrURgE5 = 0;
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
    scanf ("%d", &n);
    {
        QBjItfyo6 = 0;
        while (n > QBjItfyo6) {
            scanf ("%s %d %d %c %c %d", wDEWc6KU[QBjItfyo6].x5M7Z2, &wDEWc6KU[QBjItfyo6].qi, &wDEWc6KU[QBjItfyo6].inKZPkSz0, &wDEWc6KU[QBjItfyo6].YREykr5MxBj, &wDEWc6KU[QBjItfyo6].PGXIb4yOBkKM, &wDEWc6KU[QBjItfyo6].AlXvBWAnxe);
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
            QBjItfyo6 = QBjItfyo6 +1;
        };
    }
    for (QBjItfyo6 = 0; QBjItfyo6 < n; QBjItfyo6++) {
        wDEWc6KU[QBjItfyo6].ji = 0;
        if (wDEWc6KU[QBjItfyo6].qi > 80 && wDEWc6KU[QBjItfyo6].AlXvBWAnxe > 0)
            wDEWc6KU[QBjItfyo6].ji = wDEWc6KU[QBjItfyo6].ji + 8000;
        if (wDEWc6KU[QBjItfyo6].qi > 85 && wDEWc6KU[QBjItfyo6].inKZPkSz0 > 80)
            wDEWc6KU[QBjItfyo6].ji = wDEWc6KU[QBjItfyo6].ji + 4000;
        if ((998 - 908) < wDEWc6KU[QBjItfyo6].qi)
            wDEWc6KU[QBjItfyo6].ji = wDEWc6KU[QBjItfyo6].ji + 2000;
        if (wDEWc6KU[QBjItfyo6].qi > 85 && wDEWc6KU[QBjItfyo6].PGXIb4yOBkKM == 'Y')
            wDEWc6KU[QBjItfyo6].ji = wDEWc6KU[QBjItfyo6].ji + 1000;
        if (wDEWc6KU[QBjItfyo6].inKZPkSz0 > 80 && wDEWc6KU[QBjItfyo6].YREykr5MxBj == 'Y')
            wDEWc6KU[QBjItfyo6].ji = wDEWc6KU[QBjItfyo6].ji + 850;
    }
    {
        QBjItfyo6 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (QBjItfyo6 < n) {
            xxmlRM3gfY = xxmlRM3gfY + wDEWc6KU[QBjItfyo6].ji;
            QBjItfyo6++;
        };
    }
    for (QBjItfyo6 = 1; QBjItfyo6 < n; QBjItfyo6++) {
        if (wDEWc6KU[QBjItfyo6].ji > wDEWc6KU[j1FrURgE5].ji)
            wDEWc6KU[j1FrURgE5] = wDEWc6KU[QBjItfyo6];
    }
    printf ("%s\n", wDEWc6KU[j1FrURgE5].x5M7Z2);
    printf ("%d\n", wDEWc6KU[j1FrURgE5].ji);
    printf ("%d\n", xxmlRM3gfY);
}

