int main () {
    int n, ziRgfzoCMjE, BoYA6R53jQ8N, YVv0KCHu3bB;
    int *sz = (int *) malloc (sizeof (int) * n);
    scanf ("%d", &n);
    {
        ziRgfzoCMjE = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > ziRgfzoCMjE) {
            scanf ("%d", &sz[ziRgfzoCMjE]);
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
            ziRgfzoCMjE = ziRgfzoCMjE + 1;
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
    for (YVv0KCHu3bB = 1; 2 >= YVv0KCHu3bB; YVv0KCHu3bB++) {
        for (ziRgfzoCMjE = 0; ziRgfzoCMjE < n - YVv0KCHu3bB; ziRgfzoCMjE++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (sz[ziRgfzoCMjE] > sz[ziRgfzoCMjE + 1]) {
                BoYA6R53jQ8N = sz[ziRgfzoCMjE];
                sz[ziRgfzoCMjE] = sz[ziRgfzoCMjE + 1];
                sz[ziRgfzoCMjE + 1] = BoYA6R53jQ8N;
            };
        };
    }
    printf ("%d\n%d", sz[n - 1], sz[n - 2]);
    return 0;
}

