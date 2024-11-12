void  main () {
    int drxsHSWCbI, EnM0vj3Yw8Z [(161 - 61)], t1, t2, I1Q2Xpjmvdh, t4, sum, i;
    scanf ("%d", &drxsHSWCbI);
    {
        i = 914 - 914;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < drxsHSWCbI) {
            scanf ("%d", &EnM0vj3Yw8Z[i]);
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
    t1 = 0;
    t2 = 0;
    I1Q2Xpjmvdh = 0;
    t4 = 0;
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
    sum = 0;
    {
        i = 0;
        while (i < drxsHSWCbI) {
            if (1 <= EnM0vj3Yw8Z[i] && EnM0vj3Yw8Z[i] <= 18) {
                t1++;
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
                sum = sum + 1;
            }
            else if (EnM0vj3Yw8Z[i] <= 35) {
                t2 = t2 + 1;
                sum = sum + 1;
            }
            else if (EnM0vj3Yw8Z[i] <= 60) {
                I1Q2Xpjmvdh++;
                sum++;
            }
            else {
                t4 = t4 + 1;
                sum++;
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
    printf ("1-18: %.2f%%\n", (float) t1 / sum * 100);
    printf ("19-35: %.2f%%\n", (float) t2 / sum * 100);
    printf ("36-60: %.2f%%\n", (float) I1Q2Xpjmvdh / sum * 100);
    printf ("60??: %.2f%%\n", (float) t4 / sum * 100);
}

