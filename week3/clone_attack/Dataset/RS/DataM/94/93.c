int main () {
    int Pf80qtFrDI [500];
    int uRZo1l;
    int i;
    int k;
    int NM3frx8cks, bNjGK60lu, lK2xaDoSMIH;
    int jishu [500];
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
    scanf ("%d", &uRZo1l);
    {
        i = 0;
        while (i < uRZo1l) {
            scanf ("%d", &Pf80qtFrDI[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < uRZo1l) {
            if (Pf80qtFrDI[i] % 2 != 0) {
                jishu[i] = Pf80qtFrDI[i];
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
            if (Pf80qtFrDI[i] % 2 == 0) {
                jishu[i] = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            i = i + 1;
        };
    }
    {
        NM3frx8cks = 621 - 620;
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
        while (NM3frx8cks <= uRZo1l) {
            {
                bNjGK60lu = 0;
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
                while (bNjGK60lu < uRZo1l - NM3frx8cks) {
                    if (jishu[bNjGK60lu] > jishu[bNjGK60lu + 1]) {
                        lK2xaDoSMIH = jishu[bNjGK60lu];
                        jishu[bNjGK60lu] = jishu[bNjGK60lu + 1];
                        jishu[bNjGK60lu + 1] = lK2xaDoSMIH;
                    }
                    bNjGK60lu = bNjGK60lu + 1;
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
            NM3frx8cks = NM3frx8cks +1;
        };
    }
    {
        i = 0;
        while (i < uRZo1l - 1) {
            if (jishu[i] != 0) {
                printf ("%d,", jishu[i]);
            }
            i = i + 1;
        };
    }
    printf ("%d", jishu[uRZo1l - 1]);
    return 0;
}

