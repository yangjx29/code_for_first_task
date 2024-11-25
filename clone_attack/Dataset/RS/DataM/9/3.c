struct   a {
    char id [100];
    int year;
}
p [100];

int main () {
    int t;
    int r;
    int n;
    int i;
    int j;
    int k;
    t = (518 - 518);
    r = (590 - 590);
    int a [(305 - 105)] = {(83 - 83)};
    struct   a b [100];
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
    struct   a c [100];
    struct   a temp;
    scanf ("%d", &n);
    {
        i = 0;
        while (i <= n - 1) {
            scanf ("%s %d", p[i].id, &p[i].year);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= n - 1) {
            if (p[i].year >= (151 - 91)) {
                b[t] = p[i];
                t = t + 1;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (t - 1 >= i) {
            a[b[i].year]++;
            i = i + 1;
        };
    }
    {
        i = 200;
        while (i >= 60) {
            if (a[i] > 0) {
                j = 0;
                while (j <= t - 1) {
                    if (b[j].year == i) {
                        c[r] = b[j];
                        r++;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            i = i - 1;
        };
    }
    {
        i = 0;
        while (i <= t - 1) {
            printf ("%s\n", c[i].id);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= n - 1) {
            if (p[i].year < 60) {
                printf ("%s\n", p[i].id);
            }
            i++;
        };
    }
    return 0;
}

