int main () {
    char a [(1102 - 502)], IKwzfdnh [600] [(909 - 903)] = {(468 - 468)};
    int bXQGanqO;
    int pAJfEwOpW1Yy;
    int WQZL7CRn5o1;
    int pUwRfc3W;
    int l;
    int o;
    int p;
    int wytMZB27bwL [600] = {0};
    int max;
    scanf ("%d", &bXQGanqO);
    scanf ("%s", a);
    l = strlen (a);
    {
        pUwRfc3W = 0;
        while (l - bXQGanqO >= pUwRfc3W) {
            o = 0;
            {
                pAJfEwOpW1Yy = pUwRfc3W;
                while (pUwRfc3W + bXQGanqO > pAJfEwOpW1Yy) {
                    IKwzfdnh[pUwRfc3W][o++] = a[pAJfEwOpW1Yy];
                    pAJfEwOpW1Yy = pAJfEwOpW1Yy + 1;
                };
            }
            pUwRfc3W = pUwRfc3W + 1;
        };
    }
    for (pAJfEwOpW1Yy = 0; pUwRfc3W > pAJfEwOpW1Yy; pAJfEwOpW1Yy = pAJfEwOpW1Yy + 1) {
        WQZL7CRn5o1 = pAJfEwOpW1Yy + 1;
        while (pUwRfc3W >= WQZL7CRn5o1) {
            if (!(0 != strcmp (IKwzfdnh[pAJfEwOpW1Yy], IKwzfdnh[WQZL7CRn5o1]))) {
                wytMZB27bwL[pAJfEwOpW1Yy]++;
            }
            WQZL7CRn5o1 = WQZL7CRn5o1 +1;
        };
    }
    max = wytMZB27bwL[pAJfEwOpW1Yy] + 1;
    {
        pAJfEwOpW1Yy = 0;
        while (l - bXQGanqO >= pAJfEwOpW1Yy) {
            if (wytMZB27bwL[pAJfEwOpW1Yy] > max - 1) {
                max = wytMZB27bwL[pAJfEwOpW1Yy] + 1;
            }
            pAJfEwOpW1Yy = pAJfEwOpW1Yy + 1;
        };
    }
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        {
            pAJfEwOpW1Yy = 0;
            while (pAJfEwOpW1Yy <= l - bXQGanqO) {
                if (max == wytMZB27bwL[pAJfEwOpW1Yy] + 1)
                    printf ("%s\n", IKwzfdnh[pAJfEwOpW1Yy]);
                pAJfEwOpW1Yy++;
            };
        };
    }
    scanf ("%d", &pAJfEwOpW1Yy);
    return 0;
}

