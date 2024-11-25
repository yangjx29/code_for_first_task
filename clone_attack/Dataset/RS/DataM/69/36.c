int zS0BkJ (int x, int y) {
    return (y < x) ? x : y;
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

int gvD7APEa2c (int x, int y) {
    return (x < y) ? x : y;
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

void  main () {
    int vhLkKecSFP [(1044 - 793)], nv49CUhQB [251], DlAram2WI3 [(643 - 393)] = {(170 - 170)}, i, WTnKmN4rpxAI, k = (176 - 176), x, y;
    char TBMFuZtz [(935 - 685)];
    char n [250];
    scanf ("%s", TBMFuZtz);
    scanf ("%s", n);
    x = strlen (TBMFuZtz);
    y = strlen (n);
    for (i = (380 - 380); x > i; i++) {
        vhLkKecSFP[i + (320 - 319)] = TBMFuZtz[i] - (768 - 720);
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
    {
        i = 931 - 931;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < y) {
            nv49CUhQB[i + (175 - 174)] = n[i] - 48;
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
            i = i + 1;
        };
    }
    if (x > y) {
        i = 828 - 827;
        while (i <= x) {
            DlAram2WI3[i] = vhLkKecSFP[i];
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
            i = i + 1;
        };
    }
    else {
        i = 85 - 84;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= y) {
            DlAram2WI3[i] = nv49CUhQB[i];
            i++;
        };
    }
    DlAram2WI3[(44 - 44)] = 0;
    {
        i = 0;
        while (i < gvD7APEa2c (x, y)) {
            if (vhLkKecSFP[x - i] + nv49CUhQB[y - i] + k < (244 - 234)) {
                DlAram2WI3[zS0BkJ (x, y) - i] = vhLkKecSFP[x - i] + nv49CUhQB[y - i] + k;
                k = 0;
            }
            else {
                DlAram2WI3[zS0BkJ (x, y) - i] = (vhLkKecSFP[x - i] + nv49CUhQB[y - i] + k) % 10;
                k = 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    DlAram2WI3[zS0BkJ (x, y) - i] += k;
    {
        i = y;
        while (i > 0) {
            if (DlAram2WI3[i] >= 10) {
                DlAram2WI3[i] = (DlAram2WI3[i] % 10);
                DlAram2WI3[i - 1] += 1;
            }
            i--;
        };
    }
    {
        i = 0;
        while (1) {
            if (DlAram2WI3[i])
                break;
            i++;
        };
    }
    {
        WTnKmN4rpxAI = i;
        while (WTnKmN4rpxAI <= zS0BkJ (x, y)) {
            printf ("%d", DlAram2WI3[WTnKmN4rpxAI]);
            WTnKmN4rpxAI++;
        };
    }
    if (i > zS0BkJ (x, y))
        printf ("0");
}

