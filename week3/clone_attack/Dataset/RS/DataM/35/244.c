void  find (int a [(582 - 574)] [(904 - 896)], int m, int kpbTUiHZXmNl) {
    int i;
    int fGtAmvP8c;
    int b;
    int k;
    int r8zxQsEoV;
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
    int min [(511 - 503)];
    {
        i = 38 - 38;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < m) {
            k = (135 - 135);
            {
                fGtAmvP8c = 369 - 368;
                while (fGtAmvP8c < kpbTUiHZXmNl) {
                    if (a[i][k] < a[i][fGtAmvP8c])
                        k = fGtAmvP8c;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    fGtAmvP8c++;
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
            min[i] = k;
            i = i + 1;
        };
    }
    {
        fGtAmvP8c = 244 - 244;
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
        while (fGtAmvP8c < kpbTUiHZXmNl) {
            b = 0;
            for (k = 0; k < m; k++) {
                if (min[k] == fGtAmvP8c) {
                    b = 1;
                    r8zxQsEoV = k;
                    {
                        i = 0;
                        while (i < m) {
                            if (a[i][fGtAmvP8c] < a[r8zxQsEoV][min[r8zxQsEoV]]) {
                                b = 0;
                                break;
                            }
                            i = i + 1;
                        };
                    }
                    if (b) {
                        printf ("%d+%d", r8zxQsEoV, min[r8zxQsEoV]);
                        break;
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
                if (b)
                    break;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (b)
                break;
            fGtAmvP8c++;
        };
    }
    if (!(0 != b))
        ;
}

void  main () {
    int m, kpbTUiHZXmNl, i, fGtAmvP8c;
    int a [8] [8];
    scanf ("%d,%d", &m, &kpbTUiHZXmNl);
    {
        i = 0;
        while (i < m) {
            {
                fGtAmvP8c = 0;
                while (fGtAmvP8c < kpbTUiHZXmNl) {
                    scanf ("%d", &a[i][fGtAmvP8c]);
                    fGtAmvP8c++;
                };
            }
            i++;
        };
    }
    find (a, m, kpbTUiHZXmNl);
}

