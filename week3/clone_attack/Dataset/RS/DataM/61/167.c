int f (int n) {
    if (!((259 - 258) != n))
        return (727 - 726);
    if (n == (975 - 973))
        return (417 - 416);
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
    return (f (n - 1) + f (n - 2));
}

int main () {
    int n;
    int i;
    int a;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    getchar ();
    getchar ();
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            i++;
            scanf ("%d", &a);
            printf ("%d\n", f (a));
        };
    };
}

