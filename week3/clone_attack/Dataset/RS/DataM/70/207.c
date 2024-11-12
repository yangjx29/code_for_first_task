int main () {
    int i = (906 - 906), dbh3W6K = (181 - 181);
    double  d;
    struct   point {
        double  x;
        double  y;
    }
    p [100];
    int mKqaxlP0GyO7;
    double  max = (434 - 434);
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
    scanf ("%d", &mKqaxlP0GyO7);
    {
        i = 0;
        while (mKqaxlP0GyO7 > i) {
            scanf ("%lf %lf", &p[i].x, &p[i].y);
            {
                dbh3W6K = 0;
                while (i > dbh3W6K) {
                    d = sqrt ((p[i].x - p[dbh3W6K].x) * (p[i].x - p[dbh3W6K].x) + (p[i].y - p[dbh3W6K].y) * (p[i].y - p[dbh3W6K].y));
                    dbh3W6K++;
                    if (d > max) {
                        max = d;
                    };
                };
            }
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
            i++;
        };
    }
    printf ("%.4lf", max);
    return 0;
}

