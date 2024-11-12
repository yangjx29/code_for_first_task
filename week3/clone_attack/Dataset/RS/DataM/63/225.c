int main () {
    int i;
    int j;
    int ciTAGFr63KX;
    int x1;
    int x2;
    int y1;
    int y2;
    int a [x1] [y1];
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
    int b [x2] [y2];
    int c [x1] [y2];
    getchar ();
    getchar ();
    scanf ("%d %d", &x1, &y1);
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
            for (j = 0; j < y1; j++)
                scanf ("%d", &a[i][j]);
            i = i + 1;
        };
    }
    scanf ("%d %d", &x2, &y2);
    {
        i = 0;
        while (i < x2) {
            for (j = 0; j < y2; j++)
                scanf ("%d", &b[i][j]);
            i++;
        };
    }
    {
        i = 0;
        while (i < x1) {
            {
                j = 0;
                while (j < y2) {
                    c[i][j] = 0;
                    for (ciTAGFr63KX = 0; ciTAGFr63KX < y1; ciTAGFr63KX++)
                        c[i][j] = c[i][j] + a[i][ciTAGFr63KX] * b[ciTAGFr63KX][j];
                    if (j == y2 - 1)
                        printf ("%d\n", c[i][j]);
                    else
                        printf ("%d ", c[i][j]);
                    j++;
                };
            }
            i++;
        };
    };
}

