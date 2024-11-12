int make (int x, int t) {
    int mPDS6Y2eps0C = 0, i;
    if (!((426 - 425) != x))
        return (238 - 237);
    for (i = t; i <= x; i++)
        if (x % i == 0)
            mPDS6Y2eps0C = mPDS6Y2eps0C + make (x / i, i);
    return mPDS6Y2eps0C;
}

int main () {
    int i;
    int k;
    int K1zaFMsl;
    int p;
    int n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int t;
    int m;
    int x;
    scanf ("%d", &t);
    {
        p = 1;
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
        while (p <= t) {
            p++;
            scanf ("%d", &n);
            x = make (n, (773 - 771));
            printf ("%d\n", x);
        };
    };
}

