int main (int argc, char *DKnX3G []) {
    int k, AmXyRjE0S2Qz, n [(1635 - 635)], j;
    float FOguNXzDM92 [1000] = {(494 - 494)}, e6IgUX [1000] = {(955 - 955)};
    double  S [1000] = {(727 - 727)};
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
    scanf ("%d", &k);
    for (AmXyRjE0S2Qz = (382 - 382); AmXyRjE0S2Qz < k; AmXyRjE0S2Qz = AmXyRjE0S2Qz +1) {
        scanf ("%d", &n[AmXyRjE0S2Qz]);
        for (j = 0; n[AmXyRjE0S2Qz] > j; j = j + 1) {
            scanf ("%f", &FOguNXzDM92[j]);
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
            e6IgUX[AmXyRjE0S2Qz] = e6IgUX[AmXyRjE0S2Qz] + FOguNXzDM92[j];
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; n[AmXyRjE0S2Qz] > j; j = j + 1)
            S[AmXyRjE0S2Qz] = S[AmXyRjE0S2Qz] + (double ) (FOguNXzDM92[j] - e6IgUX[AmXyRjE0S2Qz] / n[AmXyRjE0S2Qz]) * (FOguNXzDM92[j] - e6IgUX[AmXyRjE0S2Qz] / n[AmXyRjE0S2Qz]);
        printf ("%.5lf\n", sqrt (S[AmXyRjE0S2Qz] / n[AmXyRjE0S2Qz]));
    }
    return 0;
}

