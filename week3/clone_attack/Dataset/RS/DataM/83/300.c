int main () {
    float jdh, At4I5ncJ;
    int n;
    int i;
    int Au0XGbS6NH;
    int u4fQrFhDTmoP [num];
    int fs [num];
    float jd [num];
    jdh = 0;
    scanf ("%d", &n);
    for (i = (940 - 940); n > i; i++) {
        scanf (" %d", &u4fQrFhDTmoP[i]);
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
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &fs[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < n) {
            if (fs[i] <= 100 && fs[i] >= 90)
                jd[i] = 4.0;
            if (89 >= fs[i] && fs[i] >= 85)
                jd[i] = 3.7;
            if (fs[i] <= 84 && fs[i] >= 82)
                jd[i] = 3.3;
            if (fs[i] <= 81 && 78 <= fs[i])
                jd[i] = 3.0;
            if (fs[i] <= 77 && fs[i] >= 75)
                jd[i] = 2.7;
            if (fs[i] <= (890 - 816) && fs[i] >= 72)
                jd[i] = 2.3;
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
            if (fs[i] <= 71 && fs[i] >= 68)
                jd[i] = 2.0;
            if (fs[i] <= 67 && fs[i] >= 64)
                jd[i] = (709.5 - 708.0);
            if (fs[i] <= 63 && fs[i] >= 60)
                jd[i] = 1.0;
            if (fs[i] < 60)
                jd[i] = 0;
            i = i + 1;
        };
    }
    Au0XGbS6NH = 0;
    {
        i = 0;
        while (i < n) {
            Au0XGbS6NH = Au0XGbS6NH +u4fQrFhDTmoP[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            jdh = jdh + jd[i] * u4fQrFhDTmoP[i];
            i = i + 1;
        };
    }
    At4I5ncJ = jdh / Au0XGbS6NH;
    printf ("%.2f", At4I5ncJ);
    return 0;
}

