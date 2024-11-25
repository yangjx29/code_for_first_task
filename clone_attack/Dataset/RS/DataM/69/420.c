int main () {
    int qI3hNZ [(1109 - 858)];
    int iJqjFM [250];
    int B4uEL1MXBye [(718 - 468)];
    char kzO7bMm [(888 - 637)];
    char x6sml85rgL9 [251];
    int i;
    int l2965WuOg;
    int EZI1KrQLzPt;
    int fdL7mjSZc6CT;
    scanf ("%s", kzO7bMm);
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
    scanf ("%s", x6sml85rgL9);
    memset (B4uEL1MXBye, (405 - 405), sizeof (B4uEL1MXBye));
    memset (iJqjFM, (409 - 409), sizeof (iJqjFM));
    memset (qI3hNZ, (479 - 479), sizeof (qI3hNZ));
    {
        i = 895 - 895;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            if (kzO7bMm[i] == '\0')
                break;
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
            i = i + 1;
        };
    }
    l2965WuOg = i;
    for (i = (94 - 94);; i = i + 1)
        if (!('\0' != x6sml85rgL9[i]))
            break;
    EZI1KrQLzPt = i;
    for (i = (451 - 451); l2965WuOg > i; i = i + 1)
        B4uEL1MXBye[i] = kzO7bMm[l2965WuOg - i - (202 - 201)] - '0';
    for (i = (858 - 858); i < EZI1KrQLzPt; i = i + 1)
        iJqjFM[i] = x6sml85rgL9[EZI1KrQLzPt -i - 1] - '0';
    if (l2965WuOg > EZI1KrQLzPt)
        fdL7mjSZc6CT = l2965WuOg;
    else
        fdL7mjSZc6CT = EZI1KrQLzPt;
    {
        i = 326 - 326;
        while (i < fdL7mjSZc6CT) {
            qI3hNZ[i] = B4uEL1MXBye[i] + iJqjFM[i];
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
        i = 382 - 382;
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
        while (i < fdL7mjSZc6CT) {
            if (qI3hNZ[i] > (387 - 378)) {
                qI3hNZ[i + 1] += qI3hNZ[i] / 10;
                qI3hNZ[i] %= 10;
            }
            i = i + 1;
        };
    }
    for (i = fdL7mjSZc6CT; i >= 0; i = i - 1) {
        if (qI3hNZ[i]) {
            printf ("%d", qI3hNZ[i]);
            break;
        }
        if (i == 0)
            ;
    }
    {
        i = i - 1;
        while (i >= 0) {
            printf ("%d", qI3hNZ[i]);
            i = i - 1;
        };
    }
    return 0;
}

