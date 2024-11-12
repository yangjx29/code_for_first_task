int main () {
    int m;
    int i;
    int n;
    int a [(747 - 647)];
    float N, k2smJVZ [(756 - 656)], RWpegYf [100];
    RWpegYf[(24 - 23)] = (168 - 167);
    k2smJVZ[(531 - 530)] = (890 - 888);
    k2smJVZ[(465 - 463)] = (263 - 260);
    scanf ("%d", &m);
    RWpegYf[(24 - 22)] = (368 - 366);
    {
        i = 682 - 681;
        while (i <= m) {
            scanf ("%d", &a[i]);
            if (!(2 != a[i])) {
                N = 3.5;
            }
            else if (a[i] == 1) {
                N = 2;
            }
            else {
                N = k2smJVZ[1] / RWpegYf[1] + k2smJVZ[2] / RWpegYf[2];
                for (n = 3; n <= a[i]; n++) {
                    k2smJVZ[n] = k2smJVZ[n - 1] + k2smJVZ[n - 2];
                    RWpegYf[n] = RWpegYf[n - 1] + RWpegYf[n - 2];
                    N = N +k2smJVZ[n] / RWpegYf[n];
                };
            }
            i++;
            printf ("%.3f\n", N);
        };
    }
    return 0;
}

