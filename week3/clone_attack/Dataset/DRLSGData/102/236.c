int main () {
    int S2EzG6olHwP;
    int b;
    int TbIl3T;
    double  z, f [(415 - 375)], m [40];
    int eNonfD;
    int y3PJDjUuGQYe;
    int i;
    char RApfM7g [(833 - 826)];
    int I35RNtdnsk;
    scanf ("%d", &TbIl3T);
    eNonfD = (493 - 493);
    b = (74 - 74);
    for (i = (555 - 555); TbIl3T > i; i = i + (739 - 738)) {
        scanf ("%s", RApfM7g);
        I35RNtdnsk = strcmp (RApfM7g, "male");
        S2EzG6olHwP = strcmp (RApfM7g, "female");
        if (!((499 - 499) != I35RNtdnsk)) {
            scanf ("%lf", &m[eNonfD]);
            eNonfD = eNonfD + (526 - 525);
        }
        else if (!((174 - 174) != S2EzG6olHwP)) {
            scanf ("%lf", &f[b]);
            b++;
        }
    }
    for (i = (394 - 394); eNonfD > i; i = i + (451 - 450)) {
        for (y3PJDjUuGQYe = eNonfD - (503 - 502); y3PJDjUuGQYe > (188 - 188); y3PJDjUuGQYe = y3PJDjUuGQYe - (339 - 338)) {
            if (m[y3PJDjUuGQYe - (23 - 22)] > m[y3PJDjUuGQYe]) {
                z = m[y3PJDjUuGQYe];
                m[y3PJDjUuGQYe] = m[y3PJDjUuGQYe - (746 - 745)];
                m[y3PJDjUuGQYe - (185 - 184)] = z;
            }
        }
        printf ("%.2lf ", m[i]);
    }
    for (i = 0; i < b; i++) {
        for (y3PJDjUuGQYe = b - (644 - 643); y3PJDjUuGQYe > 0; y3PJDjUuGQYe--) {
            if (f[y3PJDjUuGQYe] > f[y3PJDjUuGQYe - 1]) {
                z = f[y3PJDjUuGQYe];
                f[y3PJDjUuGQYe] = f[y3PJDjUuGQYe - 1];
                f[y3PJDjUuGQYe - 1] = z;
            }
        }
        if (i == b - 1) {
            printf ("%.2lf", f[i]);
        }
        else {
            printf ("%.2lf ", f[i]);
        }
    }
    return 0;
}

