int main () {
    float a;
    int OGazXEfdJ67x;
    int n;
    int i;
    int j;
    int h [30] [30];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d%d", &OGazXEfdJ67x, &n);
    {
        i = 584 - 584;
        while (i < n + 2) {
            h[(535 - 535)][i] = h[OGazXEfdJ67x +(674 - 673)][i] = 0;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (OGazXEfdJ67x +2 > i) {
            h[i][0] = h[i][n + (490 - 489)] = 0;
            i = i + 1;
        };
    }
    {
        i = 1;
        while (OGazXEfdJ67x >= i) {
            {
                j = 1;
                while (n >= j) {
                    scanf ("%d", &h[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= OGazXEfdJ67x) {
            {
                j = 1;
                while (j <= n) {
                    if (h[i][j] >= h[i][j - 1] && h[i][j] >= h[i][j + 1] && h[i][j] >= h[i - 1][j] && h[i][j] >= h[i + 1][j])
                        printf ("%d %d\n", i - 1, j - 1);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    };
}

