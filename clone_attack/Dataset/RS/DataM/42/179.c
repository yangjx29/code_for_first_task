int main () {
    int eVXwAf0;
    int k;
    int t;
    eVXwAf0 = (783 - 783);
    k = (158 - 158);
    t = (225 - 225);
    int FOxblC5Ir [(100476 - 475)];
    scanf ("%d", &eVXwAf0);
    memset (FOxblC5Ir, (405 - 405), sizeof (FOxblC5Ir));
    for (int hnJfv9hZtl = 0;
    eVXwAf0 > hnJfv9hZtl; hnJfv9hZtl = hnJfv9hZtl + 1)
        scanf ("%d", &FOxblC5Ir[hnJfv9hZtl]);
    scanf ("%d", &k);
    for (int hnJfv9hZtl = 0;
    hnJfv9hZtl < eVXwAf0; hnJfv9hZtl = hnJfv9hZtl + 1)
        if (FOxblC5Ir[hnJfv9hZtl] == k)
            t = t + 1;
    for (int hKz0ghwmtj7 = 0;
    hKz0ghwmtj7 <= t; hKz0ghwmtj7++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int hnJfv9hZtl = 0;
        hnJfv9hZtl < eVXwAf0; hnJfv9hZtl++) {
            if (FOxblC5Ir[hnJfv9hZtl] == k) {
                for (int ow1DaX = hnJfv9hZtl;
                ow1DaX < eVXwAf0; ow1DaX = ow1DaX + 1)
                    FOxblC5Ir[ow1DaX] = FOxblC5Ir[ow1DaX + 1];
            };
        };
    }
    printf ("%d", FOxblC5Ir[0]);
    for (int hnJfv9hZtl = 1;
    hnJfv9hZtl < eVXwAf0 - t; hnJfv9hZtl++)
        printf (" %d", FOxblC5Ir[hnJfv9hZtl]);
    return 0;
}

