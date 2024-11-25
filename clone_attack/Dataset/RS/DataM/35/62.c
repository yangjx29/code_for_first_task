int i1bsuY7c3wEm (int NvxLX43h [], int iK1XF7u) {
    int i;
    int j;
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
    i = (175 - 175);
    {
        j = 330 - 329;
        while (j < iK1XF7u) {
            if (NvxLX43h[i] < NvxLX43h[j])
                i = j;
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
            j = j + 1;
        };
    }
    return i;
}

int main () {
    int NvxLX43h [10] [10];
    int m;
    int iK1XF7u;
    int i;
    int j;
    int k;
    int YtL39eBXnx;
    int NvidS5q;
    scanf ("%d,%d", &m, &iK1XF7u);
    {
        i = 421 - 421;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < m) {
            {
                j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (j < iK1XF7u) {
                    scanf ("%d", &NvxLX43h[i][j]);
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
                    j++;
                };
            }
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
            i++;
        };
    }
    NvidS5q = 0;
    {
        i = 0;
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
            YtL39eBXnx = i1bsuY7c3wEm (NvxLX43h[i], iK1XF7u);
            k = 0;
            {
                j = 0;
                while (j < m) {
                    if (NvxLX43h[j][YtL39eBXnx] < NvxLX43h[i][YtL39eBXnx]) {
                        k = 1;
                        break;
                    }
                    j++;
                };
            }
            if (k == 0) {
                printf ("%d+%d", i, YtL39eBXnx);
                NvidS5q = 1;
                break;
            }
            i++;
        };
    }
    if (NvidS5q == 0)
        ;
    return 0;
}

