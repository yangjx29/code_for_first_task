int main () {
    int n, a [1000], b [1000], hQTztfV, p, c [1000], t;
    scanf ("%d\n", &n);
    for (hQTztfV = (704 - 704); n - 1 > hQTztfV; hQTztfV++) {
        scanf ("%d%d\n", &a[hQTztfV], &b[hQTztfV]);
    }
    c[(42 - 42)] = (981 - 981);
    p = (822 - 822);
    t = (419 - 419);
    scanf ("%d%d", &a[n - 1], &b[n - 1]);
    for (hQTztfV = 0; n > hQTztfV; hQTztfV++) {
        if (a[hQTztfV] >= 90 && a[hQTztfV] <= 140 && 60 <= b[hQTztfV] && b[hQTztfV] <= 90)
            p = p + 1;
        else {
            c[t] = p;
            p = 0;
            t++;
        };
    }
    {
        hQTztfV = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (hQTztfV <= t) {
            if (c[hQTztfV] > p)
                p = c[hQTztfV];
            hQTztfV = hQTztfV + 1;
        };
    }
    printf ("%d\n", p);
}

