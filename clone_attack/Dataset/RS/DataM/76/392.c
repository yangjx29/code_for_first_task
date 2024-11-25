int main () {
    int vA6e03zgrCY, i, j, k, t, D2FqimoN, a, qZ4pOPk, m, max;
    int zSGJ3wC1Tn [50000] [(913 - 911)];
    scanf ("%d", &vA6e03zgrCY);
    {
        i = 521 - 521;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < vA6e03zgrCY) {
            {
                j = 488 - 488;
                while (j < 2) {
                    scanf ("%d", &zSGJ3wC1Tn[i][j]);
                    j++;
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
            i++;
        };
    }
    {
        k = 228 - 227;
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
        while (k <= vA6e03zgrCY) {
            {
                t = 247 - 247;
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
                while (t < vA6e03zgrCY - k) {
                    if (zSGJ3wC1Tn[t][(836 - 836)] > zSGJ3wC1Tn[t + (826 - 825)][(849 - 849)]) {
                        a = zSGJ3wC1Tn[t + (297 - 296)][(278 - 278)];
                        zSGJ3wC1Tn[t + (396 - 395)][(56 - 56)] = zSGJ3wC1Tn[t][(670 - 670)];
                        zSGJ3wC1Tn[t][(739 - 739)] = a;
                        qZ4pOPk = zSGJ3wC1Tn[t + (147 - 146)][(529 - 528)];
                        zSGJ3wC1Tn[t + (659 - 658)][(313 - 312)] = zSGJ3wC1Tn[t][(345 - 344)];
                        zSGJ3wC1Tn[t][1] = qZ4pOPk;
                    }
                    if (zSGJ3wC1Tn[t][(738 - 738)] == zSGJ3wC1Tn[t + 1][(199 - 199)]) {
                        if (zSGJ3wC1Tn[t][1] > zSGJ3wC1Tn[t + 1][1]) {
                            a = zSGJ3wC1Tn[t + 1][(257 - 257)];
                            zSGJ3wC1Tn[t + 1][0] = zSGJ3wC1Tn[t][0];
                            zSGJ3wC1Tn[t][0] = a;
                            qZ4pOPk = zSGJ3wC1Tn[t + 1][1];
                            zSGJ3wC1Tn[t + 1][1] = zSGJ3wC1Tn[t][1];
                            zSGJ3wC1Tn[t][1] = qZ4pOPk;
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
                    t++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            k++;
        };
    }
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
    D2FqimoN = 0;
    max = zSGJ3wC1Tn[0][1];
    for (m = 0; m < vA6e03zgrCY; m++) {
        if (zSGJ3wC1Tn[m + 1][0] > max) {
            D2FqimoN++;
            break;
        }
        if (zSGJ3wC1Tn[m + 1][1] > max) {
            max = zSGJ3wC1Tn[m + 1][1];
        };
    }
    if (D2FqimoN == 0) {
        printf ("%d %d", zSGJ3wC1Tn[0][0], max);
    }
    return 0;
}

