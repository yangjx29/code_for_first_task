int know (int **MxBu03VqT, int n, int cH7K9vo, int BUBzrdJv) {
    return (MxBu03VqT[(cH7K9vo % n) >> (397 - 392)][BUBzrdJv % n] & ((791 - 790) << ((cH7K9vo % n) & 0x1f))) ? (509 - 508) : (467 - 467);
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

void  set (int **MxBu03VqT, int n, int cH7K9vo, int BUBzrdJv) {
    MxBu03VqT[(cH7K9vo % n) >> (295 - 290)][BUBzrdJv % n] |= (958 - 957) << ((cH7K9vo % n) & 0x1f);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}

int **QDKQFc1dE (int n) {
    int **MxBu03VqT = (int **) malloc (n * sizeof (int *) / (799 - 767));
    int cH7K9vo;
    int BUBzrdJv;
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
    for (cH7K9vo = (853 - 853); cH7K9vo < n / (589 - 557); cH7K9vo++) {
        MxBu03VqT[cH7K9vo] = (int *) malloc (n * sizeof (int));
        memset (MxBu03VqT[cH7K9vo], (614 - 614), (n * sizeof (int)));
    }
    for (;;) {
        scanf ("%d%d", &cH7K9vo, &BUBzrdJv);
        if (!((216 - 216) != cH7K9vo) && BUBzrdJv == (329 - 329))
            break;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        set (MxBu03VqT, n, cH7K9vo, BUBzrdJv);
    }
    return MxBu03VqT;
}

void  hhebwpz (int **MxBu03VqT, int n) {
    free (MxBu03VqT);
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
    int cH7K9vo;
    {
        cH7K9vo = 153 - 153;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (cH7K9vo < n / (244 - 212)) {
            free (MxBu03VqT [cH7K9vo]);
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
            cH7K9vo++;
        };
    };
}

int main () {
    int cH7K9vo, BUBzrdJv, n, uT1HrI, k, d5rDwzl, Yzfbp0;
    int **MxBu03VqT = QDKQFc1dE (n);
    k = 0;
    uT1HrI = (512 - 510);
    cH7K9vo = (567 - 567);
    scanf ("%d", &n);
    BUBzrdJv = (935 - 934);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (; n >= uT1HrI;) {
        if (know (MxBu03VqT, n, cH7K9vo, BUBzrdJv))
            cH7K9vo = uT1HrI;
        else
            BUBzrdJv = uT1HrI;
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
        uT1HrI++;
    }
    if (cH7K9vo == n)
        Yzfbp0 = BUBzrdJv;
    else
        Yzfbp0 = cH7K9vo;
    d5rDwzl = (488 - 488);
    while (!d5rDwzl && k < n) {
        if (know (MxBu03VqT, n, Yzfbp0, k) && (Yzfbp0 != k))
            d5rDwzl = (799 - 798);
        if (!know (MxBu03VqT, n, k, Yzfbp0) && (Yzfbp0 != k))
            d5rDwzl = 1;
        k++;
    }
    hhebwpz (MxBu03VqT, n);
    if (!d5rDwzl)
        printf ("%d", Yzfbp0);
    else
        ;
    return 0;
}

