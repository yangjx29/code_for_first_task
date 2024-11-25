int main () {
    int VnmpEj3dYgU, i = (645 - 645), kiteu8qaZ6jG = (452 - 452), b6IhOi0ZDgCT = 0;
    float a [310];
    float sum = 0, aver;
    float XbLKT0 [310], c [310], max, tem;
    scanf ("%d", &VnmpEj3dYgU);
    {
        i = 747 - 746;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= VnmpEj3dYgU) {
            scanf ("%f", &a[i]);
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
    {
        i = 1;
        while (i <= VnmpEj3dYgU) {
            sum = sum + a[i];
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
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    aver = sum / VnmpEj3dYgU;
    {
        i = 1;
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
        while (i <= VnmpEj3dYgU) {
            XbLKT0[i] = a[i] - aver;
            if (XbLKT0[i] < 0) {
                XbLKT0[i] = -XbLKT0[i];
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    max = XbLKT0[1];
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= VnmpEj3dYgU) {
            if (XbLKT0[i] > max)
                max = XbLKT0[i];
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= VnmpEj3dYgU) {
            if (XbLKT0[i] == max) {
                kiteu8qaZ6jG = kiteu8qaZ6jG + 1;
                c[kiteu8qaZ6jG] = a[i];
            }
            i = i + 1;
        };
    }
    if (kiteu8qaZ6jG == 1) {
        printf ("%.f", c[1]);
    }
    else {
        {
            i = kiteu8qaZ6jG;
            while (i > 1) {
                {
                    b6IhOi0ZDgCT = 1;
                    while (b6IhOi0ZDgCT < i) {
                        if (c[b6IhOi0ZDgCT] > c[b6IhOi0ZDgCT + 1]) {
                            tem = c[b6IhOi0ZDgCT];
                            c[b6IhOi0ZDgCT] = c[b6IhOi0ZDgCT + 1];
                            c[b6IhOi0ZDgCT + 1] = tem;
                        }
                        b6IhOi0ZDgCT = b6IhOi0ZDgCT + 1;
                    };
                }
                i = i - 1;
            };
        }
        printf ("%.f", c[1]);
        {
            i = 2;
            while (i <= kiteu8qaZ6jG) {
                i = i + 1;
                printf (",%.f", c[kiteu8qaZ6jG]);
            };
        };
    }
    return 0;
}

