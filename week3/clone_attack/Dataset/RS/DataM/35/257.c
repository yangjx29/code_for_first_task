int main () {
    int a [8] [8];
    int m;
    int n;
    int e;
    int f;
    int g;
    char hBw4tXh;
    int YU94F7GHk1f;
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
    int b, JK7vF3gyGuX4;
    g = 0;
    f = 0;
    scanf ("%d", &m);
    scanf ("%c", &hBw4tXh);
    scanf ("%d", &n);
    for (YU94F7GHk1f = 0; YU94F7GHk1f < m; YU94F7GHk1f = YU94F7GHk1f +1) {
        for (k = 0; k < n; k = k + 1) {
            scanf ("%d", &(a[YU94F7GHk1f][k]));
        };
    }
    JK7vF3gyGuX4 = 0;
    for (YU94F7GHk1f = 0; YU94F7GHk1f < m; YU94F7GHk1f++) {
        b = a[YU94F7GHk1f][0];
        for (k = 0; k < n - 1; k = k + 1) {
            if (b < a[0][k + 1]) {
                b = a[0][k + 1];
                JK7vF3gyGuX4 = k + 1;
            };
        }
        {
            e = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (e < m) {
                if (b > a[e][JK7vF3gyGuX4]) {
                    f = f + 1;
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
                e = e + 1;
            };
        }
        if (f == 0) {
            printf ("%d+%d\n", YU94F7GHk1f, JK7vF3gyGuX4);
            break;
        }
        else {
            g++;
        };
    }
    if (g - m == 0) {
        printf ("No");
    }
    return 0;
}

