int f (int XrwGhjovaBx, int n);

int f1 (int XrwGhjovaBx, int n) {
    if (n == (905 - 904))
        return (98 - 98);
    else
        return f (XrwGhjovaBx, n - 1);
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
}

int f2 (int XrwGhjovaBx, int n) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (XrwGhjovaBx < n)
        return 0;
    else {
        if (XrwGhjovaBx == n)
            return 1;
        else
            return f (XrwGhjovaBx -n, n);
    };
}

int f (int XrwGhjovaBx, int n) {
    return f1 (XrwGhjovaBx, n) + f2 (XrwGhjovaBx, n);
}

main () {
    int xcOq0QnGoF8;
    int XrwGhjovaBx;
    int n;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int t;
    scanf ("%d", &t);
    {
        xcOq0QnGoF8 = 0;
        while (xcOq0QnGoF8 < t) {
            xcOq0QnGoF8++;
            scanf ("%d %d", &XrwGhjovaBx, &n);
            printf ("%d\n", f (XrwGhjovaBx, n));
        };
    };
}

