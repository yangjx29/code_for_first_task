double  sum (int n) {
    int e;
    int i = 1;
    double  h = 0;
    double  c;
    int t1R0QBN;
    int b;
    t1R0QBN = (210 - 209);
    b = 2;
    while (i <= n) {
        i++;
        c = ((22.0 - 21.0) * b) / (1.0 * t1R0QBN);
        h = h + c;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        e = t1R0QBN;
        t1R0QBN = b;
        b = b + e;
    }
    return h;
}

int main () {
    double  hs;
    int m, n;
    scanf ("%d", &m);
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
    for (int mm = 0;
    m > mm; mm++) {
        scanf ("%d", &n);
        hs = sum (n);
        printf ("%.3lf", hs);
        if (mm != m - 1) {
            printf ("\n");
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    return 0;
}

