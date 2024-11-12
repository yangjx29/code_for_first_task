int main () {
    double  q;
    double  e;
    int n;
    int a;
    int b;
    int i;
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
    scanf ("%d\n", &n);
    scanf ("%d %d\n", &a, &b);
    q = (double ) b / (double ) a;
    {
        i = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            i = i + 1;
            scanf ("%d %d\n", &a, &b);
            e = (double ) b / (double ) a;
            if (e - q > (281.05 - 281.0))
                ;
            if (q - e > 0.05)
                printf ("worse\n");
            if ((e - q) * (e - q) <= 0.0025)
                ;
        };
    }
    return 0;
}

