int main () {
    int x1;
    int y1;
    int x2;
    int wR53WomDYM;
    int i;
    int j;
    int t;
    int a [200] [200];
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
    int b [200] [200];
    int c [200] [200] = {0};
    scanf ("%d%d", &x1, &y1);
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
        while (i < x1) {
            {
                j = 0;
                while (j < y1) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d%d", &x2, &wR53WomDYM);
    for (i = 0; i < x2; i++) {
        j = 0;
        while (j < wR53WomDYM) {
            scanf ("%d", &b[i][j]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j++;
        };
    }
    {
        i = 0;
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
        while (i < x1) {
            {
                j = 0;
                while (j < wR53WomDYM) {
                    for (t = 0; t < y1; t++) {
                        c[i][j] = c[i][j] + a[i][t] * b[t][j];
                    }
                    if (j == wR53WomDYM - 1)
                        printf ("%d\n", c[i][j]);
                    else
                        printf ("%d ", c[i][j]);
                    j++;
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

