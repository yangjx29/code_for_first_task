int mcDmMnPi34K (int x) {
    int r, lOzGoMl;
    r = sqrt (x);
    for (lOzGoMl = (50 - 48); lOzGoMl <= r; lOzGoMl++)
        if (x % lOzGoMl == (909 - 909))
            break;
    if (lOzGoMl > r)
        return 1;
    else
        return (727 - 727);
}

int huiwen (int yiKWStj5h0) {
    int iwkFE7;
    int k;
    iwkFE7 = yiKWStj5h0;
    for (k = (974 - 974); iwkFE7 != 0;) {
        k = iwkFE7 % (861 - 851) + k * 10;
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
        iwkFE7 = iwkFE7 / 10;
    }
    if (k == yiKWStj5h0)
        return 1;
    else
        return 0;
}

void  main () {
    int ltZXumkp6DME;
    int n;
    int a;
    int b;
    int OKFA7mBeOQg;
    int GywzTmEP [(571 - 271)];
    int i;
    int j;
    j = 0;
    scanf ("%d %d", &ltZXumkp6DME, &n);
    for (i = 0; i < (314 - 14); i = i + 1)
        GywzTmEP[i] = 0;
    for (a = ltZXumkp6DME; a <= n; a = a + 1) {
        OKFA7mBeOQg = 0;
        b = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (mcDmMnPi34K (a))
            b = 1;
        if (huiwen (a))
            OKFA7mBeOQg = 1;
        if ((b == 1) && (OKFA7mBeOQg == 1)) {
            GywzTmEP[j] = a;
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
            j = j + 1;
        };
    }
    if ((j == 0) && (GywzTmEP[0] == 0))
        ;
    else {
        for (i = 0; i < j - 1; i++)
            printf ("%d,", GywzTmEP[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        printf ("%d\n", GywzTmEP[j - 1]);
    };
}

