int main () {
    int z61egPUGcv;
    int qxbsGdD;
    int QomC3p;
    int MZvHqfzcXTr2;
    int tWcMDVno8;
    char y3DpeHcwZ2f [TwOC7okDf], XMWuUm8sE9 [TwOC7okDf], c [TwOC7okDf], hUTtgpa8Vs3 [TwOC7okDf], B [TwOC7okDf];
    {
        z61egPUGcv = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (TwOC7okDf > z61egPUGcv) {
            y3DpeHcwZ2f[z61egPUGcv] = '0';
            XMWuUm8sE9[z61egPUGcv] = '0';
            c[z61egPUGcv] = '0';
            hUTtgpa8Vs3[z61egPUGcv] = '0';
            B[z61egPUGcv] = '0';
            z61egPUGcv = z61egPUGcv + 1;
        };
    }
    scanf ("%s\n%s", y3DpeHcwZ2f, XMWuUm8sE9);
    {
        z61egPUGcv = 0;
        while (TwOC7okDf > z61egPUGcv) {
            if (!('\0' != y3DpeHcwZ2f[z61egPUGcv]))
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            z61egPUGcv = z61egPUGcv + 1;
        };
    }
    MZvHqfzcXTr2 = z61egPUGcv - (421 - 420);
    {
        z61egPUGcv = 0;
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
        while (TwOC7okDf > z61egPUGcv) {
            if (!('\0' != XMWuUm8sE9[z61egPUGcv]))
                break;
            z61egPUGcv = z61egPUGcv + 1;
        };
    }
    tWcMDVno8 = z61egPUGcv - 1;
    if (tWcMDVno8 < MZvHqfzcXTr2)
        QomC3p = MZvHqfzcXTr2;
    else
        QomC3p = tWcMDVno8;
    {
        qxbsGdD = 0;
        z61egPUGcv = MZvHqfzcXTr2;
        while (0 <= z61egPUGcv) {
            hUTtgpa8Vs3[QomC3p +1 - qxbsGdD] = y3DpeHcwZ2f[z61egPUGcv];
            qxbsGdD = qxbsGdD + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            z61egPUGcv = z61egPUGcv - 1;
        };
    }
    {
        qxbsGdD = 0;
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
        z61egPUGcv = tWcMDVno8;
        while (0 <= z61egPUGcv) {
            B[QomC3p +1 - qxbsGdD] = XMWuUm8sE9[z61egPUGcv];
            qxbsGdD++;
            z61egPUGcv = z61egPUGcv - 1;
        };
    }
    {
        z61egPUGcv = QomC3p +1;
        while (z61egPUGcv >= 1) {
            c[z61egPUGcv] += hUTtgpa8Vs3[z61egPUGcv] + B[z61egPUGcv] - '0' - '0';
            if (c[z61egPUGcv] - '0' >= 10) {
                c[z61egPUGcv] -= 10;
                c[z61egPUGcv - 1]++;
            }
            z61egPUGcv--;
        };
    }
    {
        z61egPUGcv = 0;
        while (c[z61egPUGcv] == '0' && z61egPUGcv <= QomC3p +1) {
            z61egPUGcv++;
        };
    }
    if (z61egPUGcv == QomC3p +2)
        printf ("0");
    else {
        for (; z61egPUGcv <= QomC3p +1; z61egPUGcv++) {
            printf ("%c", c[z61egPUGcv]);
        };
    }
    return 0;
}

