void  main () {
    int bQ9NuDAdoy3;
    int m;
    int CNWnAL;
    int i;
    int rsiPLNOZHSBe [(657 - 647)];
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
    bQ9NuDAdoy3 = 0;
    int ocE5hPZiB6n (int o);
    int hui (int g5KjSh);
    scanf ("%d %d", &m, &CNWnAL);
    for (i = m; i <= CNWnAL; i++)
        if (ocE5hPZiB6n (i) == (921 - 920) && hui (i) == 1) {
            rsiPLNOZHSBe[bQ9NuDAdoy3] = i;
            bQ9NuDAdoy3 = bQ9NuDAdoy3 + 1;
        }
    if (!(0 != bQ9NuDAdoy3))
        ;
    else {
        for (i = 0; i < bQ9NuDAdoy3 - 1; i++)
            printf ("%d,", rsiPLNOZHSBe[i]);
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
        printf ("%d", rsiPLNOZHSBe[bQ9NuDAdoy3 - 1]);
    };
}

int ocE5hPZiB6n (int o) {
    int k, rsiPLNOZHSBe;
    k = sqrt (o);
    for (rsiPLNOZHSBe = 2; rsiPLNOZHSBe <= k; rsiPLNOZHSBe = rsiPLNOZHSBe + 1)
        if (o % rsiPLNOZHSBe == 0)
            break;
    if (rsiPLNOZHSBe > k)
        return (1);
    else
        return (0);
}

int hui (int g5KjSh) {
    int k = 0, ae8gtU7nr [10], NdeBSqimPxFh, flag = 1, i;
    if (g5KjSh <= 999)
        NdeBSqimPxFh = 3;
    else {
        if (g5KjSh <= 9999)
            NdeBSqimPxFh = 4;
        else if (g5KjSh <= 99999)
            NdeBSqimPxFh = 5;
        else if (g5KjSh <= 999999)
            NdeBSqimPxFh = 6;
    }
    k = 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (i = 0; i < NdeBSqimPxFh; i++) {
        ae8gtU7nr[k] = g5KjSh % 10;
        g5KjSh = (g5KjSh - ae8gtU7nr[k]) / 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        k++;
    }
    for (i = 0; i < k / 2; i++)
        if (ae8gtU7nr[i] != ae8gtU7nr[k - 1 - i]) {
            flag = 0;
            break;
        }
    if (flag == 1)
        return (1);
    else
        return (0);
}

