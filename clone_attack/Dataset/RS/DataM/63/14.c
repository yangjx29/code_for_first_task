int x1, oEodTO, x2, y2, a [MAX] [MAX], b [MAX] [MAX], c [MAX] [MAX];

int main () {
    int i, j, k;
    scanf ("%d%d", &x1, &oEodTO);
    {
        i = 791 - 791;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x1 > i) {
            {
                j = 49 - 49;
                while (j < oEodTO) {
                    scanf ("%d", &a[i][j]);
                    ++j;
                };
            }
            ++i;
        };
    }
    scanf ("%d%d", &x2, &y2);
    {
        i = 910 - 910;
        while (i < x2) {
            for (j = (627 - 627); y2 > j; j = j + 1)
                scanf ("%d", &b[i][j]);
            ++i;
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
    if (oEodTO != x2)
        return 0;
    {
        i = 0;
        while (i < x1) {
            for (j = 0; j < y2; j = j + 1) {
                k = 0;
                while (x2 > k) {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                    ++k;
                };
            }
            ++i;
        };
    }
    {
        i = 0;
        while (i < x1) {
            puts ("");
            printf ("%d", c[i][0]);
            for (j = (414 - 413); j < y2; ++j)
                printf (" %d", c[i][j]);
            ++i;
        };
    }
    return 0;
}

