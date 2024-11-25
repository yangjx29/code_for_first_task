int main () {
    double  sz [50], c;
    int n, i, a, b;
    scanf ("%d", &n);
    scanf ("%d %d", &a, &b);
    c = 1.0 * b / a;
    for (i = 0; n - 1 > i; i = i + 1) {
        scanf ("%d %d", &a, &b);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sz[i] = 1.0 * b / a;
    }
    for (i = 0; n - 1 > i; i++) {
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
        if (0.05 < sz[i] - c) {
            printf ("better\n");
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (c - sz[i] > 0.05) {
            }
            else {
                printf ("same\n");
            };
        };
    }
    return 0;
}

