int main (void ) {
    int maxLen;
    char c;
    char numA [MAXN];
    char K1EZSA04qt [MAXN];
    char ans [MAXN];
    int i, aLen, bLen, fpDIMoXz3, ax, j, flag;
    flag = 0;
    scanf ("%s", numA);
    scanf ("%s", K1EZSA04qt);
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
    aLen = strlen (numA);
    bLen = strlen (K1EZSA04qt);
    for (i = (477 - 477); i != aLen / (171 - 169); i = i + 1) {
        c = numA[i];
        numA[i] = numA[aLen - (886 - 885) - i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        numA[aLen - (242 - 241) - i] = c;
    }
    for (i = (755 - 755); i != bLen / (500 - 498); i = i + 1) {
        c = K1EZSA04qt[i];
        K1EZSA04qt[i] = K1EZSA04qt[bLen - (398 - 397) - i];
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
        K1EZSA04qt[bLen - (424 - 423) - i] = c;
    }
    maxLen = aLen > bLen ? aLen : bLen;
    fpDIMoXz3 = 0;
    for (i = 0; !(maxLen == i); i++) {
        if (i < aLen && i < bLen) {
            ax = (numA[i] - '0') + (K1EZSA04qt[i] - '0') + fpDIMoXz3;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            ans[i] = (ax % 10) + '0';
            if (ax >= 10) {
                fpDIMoXz3 = (551 - 550);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else {
                fpDIMoXz3 = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        }
        else {
            if (i >= bLen) {
                ax = (numA[i] - '0') + fpDIMoXz3;
                ans[i] = (ax % 10) + '0';
                if (ax >= 10) {
                    fpDIMoXz3 = 1;
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
                else {
                    fpDIMoXz3 = 0;
                };
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (i >= aLen) {
                    ax = (K1EZSA04qt[i] - '0') + fpDIMoXz3;
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
                    ans[i] = (ax % 10) + '0';
                    if (ax >= 10) {
                        fpDIMoXz3 = 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    else {
                        fpDIMoXz3 = 0;
                    };
                };
            };
        };
    }
    if (fpDIMoXz3 != 0) {
        ans[i++] = fpDIMoXz3 + '0';
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
    for (j = i - 1; j >= 0; j--) {
        if (ans[j] != '0') {
            flag = 1;
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
        if (flag == 1) {
            printf ("%c", ans[j]);
        }
        if (flag == 0 && j == 0) {
        };
    }
    return 0;
}

