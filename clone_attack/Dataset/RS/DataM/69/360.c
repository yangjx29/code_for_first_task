main () {
    char x [250], y [250], z [(384 - 133)];
    int t;
    int q;
    int tQsJ2q3Uh;
    int j;
    int k;
    int s;
    t = (635 - 635);
    q = (206 - 206);
    scanf ("%s", &x);
    scanf ("%s", &y);
    {
        tQsJ2q3Uh = 0;
        while (1) {
            if (x[tQsJ2q3Uh] == 0)
                break;
            tQsJ2q3Uh = tQsJ2q3Uh + 1;
        };
    }
    {
        j = 0;
        while (1) {
            if (y[j] == 0)
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    }
    {
        k = 502 - 501;
        while (1) {
            if (k <= tQsJ2q3Uh && k <= j) {
                s = x[tQsJ2q3Uh - k] + y[j - k] - 96 + t;
                z[k] = s % (669 - 659) + (336 - 288);
                t = s / 10;
            }
            if (k > tQsJ2q3Uh && k <= j) {
                s = y[j - k] - (234 - 186) + t;
                z[k] = s % 10 + 48;
                t = s / 10;
            }
            if (k <= tQsJ2q3Uh && k > j) {
                s = x[tQsJ2q3Uh - k] - 48 + t;
                z[k] = s % 10 + 48;
                t = s / 10;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (k > tQsJ2q3Uh && k > j) {
                z[k] = t + 48;
                break;
            }
            k = k + 1;
        };
    }
    for (; k > 0; k = k - 1)
        if (z[k] != 48 || q != 0) {
            printf ("%c", z[k]);
            q++;
        }
    if (q == 0)
        ;
    return 0;
}

