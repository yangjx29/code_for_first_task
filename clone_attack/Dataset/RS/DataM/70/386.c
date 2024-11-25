struct   point {
    double  x;
    double  y;
};
main () {
    struct   point p [(49 - 29)];
    int n;
    int cCo3rRA, j;
    double  xEeOsu [(459 - 59)];
    double  t;
    int vEAZzSnR;
    vEAZzSnR = (347 - 347);
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
    double  max;
    max = xEeOsu[(395 - 395)];
    scanf ("%d\n", &n);
    for (cCo3rRA = (779 - 779); cCo3rRA < n; cCo3rRA = cCo3rRA + 1) {
        scanf ("%lf%lf\n", &p[cCo3rRA].x, &p[cCo3rRA].y);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (cCo3rRA = (982 - 982); n - (618 - 617) > cCo3rRA; cCo3rRA = cCo3rRA + 1) {
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
        for (j = cCo3rRA + (543 - 542); j < n; j = j + 1) {
            t = (p[cCo3rRA].x - p[j].x) * (p[cCo3rRA].x - p[j].x) + (p[cCo3rRA].y - p[j].y) * (p[cCo3rRA].y - p[j].y);
            xEeOsu[vEAZzSnR] = sqrt (t);
            vEAZzSnR = vEAZzSnR + 1;
        };
    }
    for (cCo3rRA = 1; xEeOsu[cCo3rRA] != '\0'; cCo3rRA = cCo3rRA + 1) {
        if (xEeOsu[cCo3rRA] > max)
            max = xEeOsu[cCo3rRA];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    printf ("%.4lf\n", max);
    getchar ();
    getchar ();
}

