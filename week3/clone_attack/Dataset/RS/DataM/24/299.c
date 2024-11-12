void  main () {
    char ccB3d80bGKjp [1000];
    char *AhtsD1gBiFCX;
    int len, i, a [100] = {(842 - 842)}, srP56jdeE = 0, t = 0, LoXtiZn = 0, max, XaCBQFHq2tJy, pmax, ZQ8zy0NhC, summax = 0, unwokfSpFL = 0;
    gets (ccB3d80bGKjp);
    AhtsD1gBiFCX = ccB3d80bGKjp;
    len = strlen (ccB3d80bGKjp);
    for (i = 0; i < len + 1; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (((*(AhtsD1gBiFCX +i) >= 'a') && (*(AhtsD1gBiFCX +i) <= 'z')) || ((*(AhtsD1gBiFCX +i) >= 'A') && ('Z' >= *(AhtsD1gBiFCX +i)))) {
            srP56jdeE = srP56jdeE + 1;
        }
        else {
            a[t] = srP56jdeE;
            srP56jdeE = 0;
            t = t + 1;
        };
    }
    t = 0;
    while (a[t] != 0) {
        t = t + 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    max = a[0];
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
    XaCBQFHq2tJy = a[0];
    for (i = 0; t > i; i = i + 1) {
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
        if (a[i] > max) {
            max = a[i];
        };
    }
    for (i = 0; i < t; i = i + 1) {
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
        if (XaCBQFHq2tJy > a[i]) {
            XaCBQFHq2tJy = a[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    for (i = 0; i < t; i = i + 1) {
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
        if (a[i] == max) {
            pmax = i;
            break;
        };
    }
    for (i = 0; i < t; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (a[i] == XaCBQFHq2tJy) {
            ZQ8zy0NhC = i;
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
            break;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < pmax) {
            summax = summax + a[i] + 1;
            i = i + 1;
        };
    }
    for (i = 0; i < ZQ8zy0NhC; i = i + 1) {
        unwokfSpFL = unwokfSpFL + a[i] + 1;
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
    for (i = 0; i < a[pmax]; i = i + 1) {
        printf ("%c", ccB3d80bGKjp[summax + i]);
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
    for (i = 0; i < a[ZQ8zy0NhC]; i++) {
        printf ("%c", ccB3d80bGKjp[unwokfSpFL + i]);
    }
    printf ("\n");
    return;
}

