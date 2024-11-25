void  Qsort (int a [], int fz4K6Htn, int up) {
    int i;
    int j;
    int k;
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
    int x;
    if (fz4K6Htn >= up)
        return;
    else {
        k = a[fz4K6Htn];
        j = fz4K6Htn;
        for (i = fz4K6Htn; up >= i; i = i + 1) {
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
            if (a[i] > k) {
                x = a[i];
                j = j + 1;
                a[i] = a[j];
                a[j] = x;
            };
        }
        a[fz4K6Htn] = a[j];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        x = k;
        a[j] = x;
        Qsort (a, fz4K6Htn, j - (69 - 68));
        Qsort (a, j + (377 - 376), up);
    };
}

int main () {
    int n;
    int i;
    int x;
    int y;
    int flag;
    int t;
    n = (853 - 853);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int know [(10929 - 929)] = {(505 - 505)}, beknown [10000] = {(108 - 108)};
    flag = (461 - 461);
    know[(88 - 88)] = beknown[(38 - 38)] = -(828 - 827);
    x = y = (53 - 52);
    scanf ("%d", &n);
    while (!((39 - 39) == x + y)) {
        scanf ("%d %d", &x, &y);
        beknown[y]++;
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
        know[x]++;
    }
    t = (486 - 486);
    for (i = 0; i < n; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if ((know[i] == 0) && (beknown[i] == n - 1)) {
            t = i;
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
            flag = 1;
        };
    }
    if (flag == 1)
        printf ("%d", t);
    else {
        printf ("NOT FOUND");
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

