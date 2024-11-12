void  main () {
    int p1qZiH;
    int n;
    int i;
    int j;
    int a [(319 - 19)];
    int xQpdva4yZ3C0;
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
    p1qZiH = (860 - 860);
    double  aver, cY53iM [(873 - 573)], t2;
    scanf ("%d", &n);
    {
        i = 136 - 136;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d", &a[i]);
            p1qZiH += a[i];
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
    aver = (double ) p1qZiH / n;
    {
        i = 369 - 369;
        while (n > i) {
            cY53iM[i] = fabs (a[i] - aver);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 570 - 569;
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
        while (i < n) {
            {
                j = 424 - 424;
                while (n - i > j) {
                    if (cY53iM[j + (268 - 267)] > cY53iM[j]) {
                        t2 = cY53iM[j];
                        cY53iM[j] = cY53iM[j + (324 - 323)];
                        cY53iM[j + (224 - 223)] = t2;
                        xQpdva4yZ3C0 = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = xQpdva4yZ3C0;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 905 - 905;
        while (i < n) {
            if (!(cY53iM[0] != cY53iM[i])) {
                printf ("%d%c", a[i], (cY53iM[i + 1] == cY53iM[i]) ? ',' : '\n');
            }
            i++;
        };
    };
}

