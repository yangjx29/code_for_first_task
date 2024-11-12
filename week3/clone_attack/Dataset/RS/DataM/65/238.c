int main () {
    int a [200];
    int b [200];
    int n;
    int eWxZfkV;
    int g;
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
    scanf ("%d", &n);
    {
        eWxZfkV = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (eWxZfkV < n) {
            scanf ("%d %d", &a[eWxZfkV], &b[eWxZfkV]);
            eWxZfkV = eWxZfkV + 1;
        };
    }
    g = 0;
    for (j = 0; n > j; j = j + 1) {
        if ((a[j] - b[j] == -1) || (a[j] - b[j] == 2)) {
            g += 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else {
            if (a[j] - b[j] == 0) {
                g = g;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else {
                g += -1;
            };
        };
    }
    if (g > 0) {
        printf ("A");
    }
    if (g == 0) {
        printf ("Tie");
    }
    if (g < 0) {
    }
    return 0;
}

