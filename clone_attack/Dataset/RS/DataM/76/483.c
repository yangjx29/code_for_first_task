int main () {
    int max, AlHX50DabFmU, n, bA7bsfJ9I [mRrSte9kywOs], AhN1x9f8 [mRrSte9kywOs], okCTdN4, qpDBzhOUuYoK, jg [mRrSte9kywOs];
    scanf ("%d", &n);
    scanf ("%d %d", &bA7bsfJ9I[0], &AhN1x9f8[0]);
    max = AlHX50DabFmU = bA7bsfJ9I[0];
    {
        okCTdN4 = 1;
        while (okCTdN4 < n) {
            scanf ("%d %d", &bA7bsfJ9I[okCTdN4], &AhN1x9f8[okCTdN4]);
            if (AhN1x9f8[okCTdN4] > max) {
                max = AhN1x9f8[okCTdN4];
            }
            if (bA7bsfJ9I[okCTdN4] < AlHX50DabFmU) {
                AlHX50DabFmU = bA7bsfJ9I[okCTdN4];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            okCTdN4++;
        };
    }
    for (okCTdN4 = AlHX50DabFmU; okCTdN4 < max; okCTdN4 = okCTdN4 + 1) {
        jg[okCTdN4] = 0;
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
    {
        qpDBzhOUuYoK = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (qpDBzhOUuYoK < n) {
            {
                okCTdN4 = qpDBzhOUuYoK;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (okCTdN4 < AhN1x9f8[qpDBzhOUuYoK]) {
                    jg[okCTdN4] = 1;
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
                    okCTdN4++;
                };
            }
            qpDBzhOUuYoK++;
        };
    }
    {
        okCTdN4 = AlHX50DabFmU;
        while (okCTdN4 < max) {
            if (jg[okCTdN4] == 0) {
                break;
            }
            if (okCTdN4 == max - 1) {
                printf ("%d %d", AlHX50DabFmU, max);
            }
            okCTdN4++;
        };
    }
    return 0;
}

