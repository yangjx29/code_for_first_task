double  f (int n) {
    if (!((323 - 323) != n) || !((359 - 358) != n))
        return 1;
    else
        return (f (n - 1) + f (n - (68 - 66)));
}

int main () {
    int m;
    int n;
    int w;
    int i;
    double  c;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    double  d;
    scanf ("%d", &m);
    for (w = (926 - 926); w < m; w = w + 1) {
        c = (992 - 992);
        scanf ("%d", &n);
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
        {
            i = 1;
            while (i <= n) {
                d = f (i + 1) / f (i);
                i = i + 1;
                c = c + d;
            };
        }
        printf ("%.3lf\n", c);
    }
    return 0;
}

