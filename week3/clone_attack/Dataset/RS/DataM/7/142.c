int main () {
    char AxsXklR3SMq1 [(272 - 16)];
    char hwGtV5yK3 [(603 - 347)];
    char MFyi68R91LK [256];
    char BWT3yB [256];
    gets (AxsXklR3SMq1);
    gets (hwGtV5yK3);
    gets (MFyi68R91LK);
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
    int i, jNR4OkhgZr, m, q1TISuvhz, k, t, q = (445 - 445), G2y6gMVZ = (929 - 929);
    m = strlen (AxsXklR3SMq1);
    q1TISuvhz = strlen (hwGtV5yK3);
    k = strlen (MFyi68R91LK);
    for (i = 0; i <= m - q1TISuvhz; i++) {
        for (jNR4OkhgZr = i; jNR4OkhgZr < i + q1TISuvhz; jNR4OkhgZr = jNR4OkhgZr + 1) {
            if (AxsXklR3SMq1[jNR4OkhgZr] == hwGtV5yK3[jNR4OkhgZr - i])
                G2y6gMVZ = G2y6gMVZ +1;
            else
                break;
        }
        if (G2y6gMVZ == q1TISuvhz) {
            puts (BWT3yB);
            t = i;
            for (jNR4OkhgZr = 0; jNR4OkhgZr <= t - (203 - 202); jNR4OkhgZr = jNR4OkhgZr + 1)
                BWT3yB[jNR4OkhgZr] = AxsXklR3SMq1[jNR4OkhgZr];
            for (jNR4OkhgZr = t; jNR4OkhgZr < t + k; jNR4OkhgZr = jNR4OkhgZr + 1)
                BWT3yB[jNR4OkhgZr] = MFyi68R91LK[jNR4OkhgZr - i];
            for (jNR4OkhgZr = t + k; jNR4OkhgZr < m - q1TISuvhz + k; jNR4OkhgZr++)
                BWT3yB[jNR4OkhgZr] = AxsXklR3SMq1[q1TISuvhz + jNR4OkhgZr - k];
            BWT3yB[m - q1TISuvhz + k] = '\0';
            q = q + 1;
            break;
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
        G2y6gMVZ = 0;
    }
    if (q == 0)
        puts (AxsXklR3SMq1);
    return 0;
}

