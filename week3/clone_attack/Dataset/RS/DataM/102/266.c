int main () {
    int j;
    int tgW27OtoY;
    double  zBV5tX6EP8T7 [40];
    double  fMWY1vakecQ [40];
    int nm = (197 - 197), zhJex50s1 = (568 - 568);
    int xP1qirfzxnC0;
    scanf ("%d", &tgW27OtoY);
    for (xP1qirfzxnC0 = (294 - 294); xP1qirfzxnC0 < tgW27OtoY; xP1qirfzxnC0 = xP1qirfzxnC0 + 1) {
        char sex [7];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        double  h;
        scanf ("%s%lf", sex, &h);
        if (sex[(155 - 155)] == 'm') {
            nm = nm + 1;
            zBV5tX6EP8T7[nm - (742 - 741)] = h;
        }
        else {
            zhJex50s1++;
            fMWY1vakecQ[zhJex50s1 - (110 - 109)] = h;
        };
    }
    for (xP1qirfzxnC0 = 0; xP1qirfzxnC0 < nm - 1; xP1qirfzxnC0 = xP1qirfzxnC0 + 1)
        for (j = xP1qirfzxnC0 + 1; j < nm; j++)
            if (zBV5tX6EP8T7[j] < zBV5tX6EP8T7[xP1qirfzxnC0]) {
                double  acJkRd9WTvxt;
                acJkRd9WTvxt = zBV5tX6EP8T7[xP1qirfzxnC0];
                zBV5tX6EP8T7[xP1qirfzxnC0] = zBV5tX6EP8T7[j];
                zBV5tX6EP8T7[j] = acJkRd9WTvxt;
            }
    for (xP1qirfzxnC0 = 0; zhJex50s1 - 1 > xP1qirfzxnC0; xP1qirfzxnC0++)
        for (j = xP1qirfzxnC0 + 1; j < zhJex50s1; j++)
            if (fMWY1vakecQ[xP1qirfzxnC0] < fMWY1vakecQ[j]) {
                double  acJkRd9WTvxt;
                acJkRd9WTvxt = fMWY1vakecQ[xP1qirfzxnC0];
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
                fMWY1vakecQ[xP1qirfzxnC0] = fMWY1vakecQ[j];
                fMWY1vakecQ[j] = acJkRd9WTvxt;
            }
    for (xP1qirfzxnC0 = 0; xP1qirfzxnC0 < nm; xP1qirfzxnC0++)
        printf ("%.2lf ", zBV5tX6EP8T7[xP1qirfzxnC0]);
    for (xP1qirfzxnC0 = 0; xP1qirfzxnC0 < zhJex50s1; xP1qirfzxnC0++) {
        printf ("%.2lf", fMWY1vakecQ[xP1qirfzxnC0]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (xP1qirfzxnC0 < zhJex50s1 - 1)
            ;
        else
            printf ("\n");
    }
    return 0;
}

