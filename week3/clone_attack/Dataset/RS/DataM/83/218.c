int main () {
    double  RVTdKUA;
    double  m;
    double  JI8GEQb2;
    int n, K7jM86Evi, dMThgkoDpb;
    int bwupoaD1kK7 [n];
    double  g [n];
    int x [n];
    K7jM86Evi = 0;
    m = 0;
    RVTdKUA = 0;
    scanf ("%d", &n);
    for (dMThgkoDpb = 0; n > dMThgkoDpb; dMThgkoDpb = dMThgkoDpb + 1) {
        scanf ("%d", &(x[dMThgkoDpb]));
        K7jM86Evi = K7jM86Evi +x[dMThgkoDpb];
    }
    for (dMThgkoDpb = 0; n > dMThgkoDpb; dMThgkoDpb = dMThgkoDpb + 1) {
        scanf ("%d", &(bwupoaD1kK7[dMThgkoDpb]));
        if (bwupoaD1kK7[dMThgkoDpb] >= 90 && bwupoaD1kK7[dMThgkoDpb] <= 100) {
            g[dMThgkoDpb] = 4.0;
        }
        else if (85 <= bwupoaD1kK7[dMThgkoDpb] && bwupoaD1kK7[dMThgkoDpb] <= 89) {
            g[dMThgkoDpb] = 3.7;
        }
        else if (bwupoaD1kK7[dMThgkoDpb] >= 82 && 84 >= bwupoaD1kK7[dMThgkoDpb]) {
            g[dMThgkoDpb] = 3.3;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        else if (78 <= bwupoaD1kK7[dMThgkoDpb] && bwupoaD1kK7[dMThgkoDpb] <= 81) {
            g[dMThgkoDpb] = 3.0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else if (bwupoaD1kK7[dMThgkoDpb] >= 75 && bwupoaD1kK7[dMThgkoDpb] <= 77) {
            g[dMThgkoDpb] = (294.7 - 292.0);
        }
        else if (bwupoaD1kK7[dMThgkoDpb] >= 72 && bwupoaD1kK7[dMThgkoDpb] <= 74) {
            g[dMThgkoDpb] = 2.3;
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
        else if (bwupoaD1kK7[dMThgkoDpb] >= 68 && bwupoaD1kK7[dMThgkoDpb] <= (1068 - 997)) {
            g[dMThgkoDpb] = 2.0;
        }
        else if (bwupoaD1kK7[dMThgkoDpb] >= 64 && bwupoaD1kK7[dMThgkoDpb] <= 67) {
            g[dMThgkoDpb] = 1.5;
        }
        else if (bwupoaD1kK7[dMThgkoDpb] >= 60 && bwupoaD1kK7[dMThgkoDpb] <= 63) {
            g[dMThgkoDpb] = 1.0;
        }
        else {
            g[dMThgkoDpb] = 0.0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        m = x[dMThgkoDpb] * g[dMThgkoDpb];
        RVTdKUA += m;
    }
    JI8GEQb2 = RVTdKUA / K7jM86Evi;
    printf ("%.2lf", JI8GEQb2);
    return 0;
}

