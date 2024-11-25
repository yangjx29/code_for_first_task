void  main () {
    int a;
    int b;
    int c;
    int m;
    int n;
    int i;
    i = 3;
    scanf ("%d", &n);
    scanf ("%d", &a);
    scanf ("%d", &b);
    if (a < b) {
        m = a;
        a = b;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b = m;
    }
    while (i <= n) {
        i = i + 1;
        scanf ("%d", &c);
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
        if (c > b) {
            m = b;
            b = c;
            c = m;
        }
        if (b > a) {
            m = a;
            a = b;
            b = m;
        };
    }
    printf ("%d\n%d", a, b);
}

