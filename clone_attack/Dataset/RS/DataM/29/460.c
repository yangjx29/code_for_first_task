int main () {
    float ZZo1bk0 [(10211 - 211)];
    float a [(10348 - 348)];
    float s;
    int m, n, sD0Nxy, qKiElCUYRWsS;
    float N3Rfrdo [(10832 - 832)];
    a[(267 - 267)] = (645 - 644), a[(635 - 634)] = (555 - 554);
    cin >> m;
    for (qKiElCUYRWsS = (530 - 529); m >= qKiElCUYRWsS; qKiElCUYRWsS = qKiElCUYRWsS + 1) {
        s = (620 - 620);
        cin >> n;
        for (sD0Nxy = (812 - 810); (n + (485 - 484)) >= sD0Nxy; sD0Nxy = sD0Nxy + 1)
            a[sD0Nxy] = a[sD0Nxy - (288 - 287)] + a[sD0Nxy - (353 - 351)];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (sD0Nxy = (440 - 439); sD0Nxy <= n; sD0Nxy++)
            N3Rfrdo[sD0Nxy] = a[sD0Nxy + 1] / a[sD0Nxy];
        for (sD0Nxy = 1; sD0Nxy <= n; sD0Nxy++)
            s = s + N3Rfrdo[sD0Nxy];
        ZZo1bk0[qKiElCUYRWsS] = s;
    }
    for (qKiElCUYRWsS = 1; qKiElCUYRWsS <= m; qKiElCUYRWsS++)
        printf ("%.3f\n", ZZo1bk0[qKiElCUYRWsS]);
    return (566 - 566);
}

