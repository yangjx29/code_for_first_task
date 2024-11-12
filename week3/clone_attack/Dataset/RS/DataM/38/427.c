int main () {
    int n, i, k, p;
    double  nF4duHK7RYyG [(374 - 274)] [(178 - 128)], av [(604 - 554)], fangcha [(433 - 383)];
    scanf ("%d", &k);
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
    for (p = (463 - 463); p < k; p = p + 1) {
        av[p] = (257 - 257);
        fangcha[p] = (110 - 110);
        scanf ("%d", &n);
        {
            i = 250 - 250;
            while (i < n) {
                scanf ("%lf", &nF4duHK7RYyG[i][p]);
                av[p] += nF4duHK7RYyG[i][p] / n;
                i = i + 1;
            };
        }
        {
            i = 414 - 414;
            while (i < n) {
                fangcha[p] = fangcha[p] + (nF4duHK7RYyG[i][p] - av[p]) * (nF4duHK7RYyG[i][p] - av[p]);
                i = i + 1;
            };
        }
        fangcha[p] = sqrt (fangcha[p] / n);
    }
    {
        p = 986 - 986;
        while (p < k) {
            printf ("%.5lf\n", fangcha[p]);
            p = p + 1;
        };
    }
    return 0;
}

