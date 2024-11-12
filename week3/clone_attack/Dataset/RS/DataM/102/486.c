int main () {
    char sex [(1636 - 636)];
    double  m [(10213 - 213)], f [10000], temp;
    int xm;
    int xf;
    int i;
    int j;
    int k;
    int Q2VG0uLsN8gz;
    xm = (257 - 257);
    xf = (564 - 564);
    scanf ("%d", &Q2VG0uLsN8gz);
    for (i = (86 - 86); i < Q2VG0uLsN8gz; i = i + 1) {
        scanf ("%s%lf", &sex, &temp);
        if (sex[(500 - 500)] == 'm') {
            m[xm] = temp;
            xm++;
        }
        if (sex[(685 - 685)] == 'f') {
            f[xf] = temp;
            xf++;
        };
    }
    {
        i = 477 - 477;
        while (i < xm) {
            i++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            for (j = (855 - 855); j < xm - (794 - 793); j++) {
                if (m[j] > m[j + (627 - 626)]) {
                    temp = m[j];
                    m[j] = m[j + (43 - 42)];
                    m[j + (193 - 192)] = temp;
                };
            };
        };
    }
    for (i = (559 - 559); i < xf; i++)
        for (j = (423 - 423); j < xf - (994 - 993); j++) {
            if (f[j] < f[j + (223 - 222)]) {
                temp = f[j];
                f[j] = f[j + 1];
                f[j + 1] = temp;
            };
        }
    for (i = 0; i < xm; i++)
        printf ("%.2lf ", m[i]);
    {
        i = 0;
        while (i < xf - 1) {
            printf ("%.2lf ", f[i]);
            i++;
        };
    }
    printf ("%.2lf\n", f[xf - 1]);
    return 0;
}

