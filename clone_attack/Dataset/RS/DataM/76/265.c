int main () {
    int i, GbOyroq6FnV, max, e, n, j, sum = 0, p, k, s;
    int a [50000];
    int N1gkoC2 [50000];
    int sz [50000] = {(722 - 722)};
    double  r;
    s = 0;
    scanf ("%d\n", &n);
    for (i = 0; n > i; i++) {
        scanf ("%d %d", &a[i], &N1gkoC2[i]);
    }
    GbOyroq6FnV = 0;
    {
        i = 0;
        while (n > i) {
            if (a[GbOyroq6FnV] > a[i]) {
                GbOyroq6FnV = i;
            }
            i = i + 1;
        };
    }
    max = 0;
    {
        i = 0;
        while (n > i) {
            if (N1gkoC2[max] < N1gkoC2[i]) {
                max = i;
            }
            i = i + 1;
        };
    }
    {
        r = GbOyroq6FnV;
        while (N1gkoC2[max] + 0.1 >= r) {
            for (i = 0; n > i; i++) {
                if (a[i] <= r && r <= N1gkoC2[i]) {
                    sum = sum + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
            if (sum > 0) {
                sum = 0;
                s++;
            }
            r++;
        };
    }
    p = N1gkoC2[max] - a[GbOyroq6FnV];
    if (s != p) {
        printf ("no");
    }
    else {
        printf ("%d %d", a[GbOyroq6FnV], N1gkoC2[max]);
    }
    return 0;
}

