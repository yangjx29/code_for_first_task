int main () {
    int n;
    int jT0p5ozR [(51 - 41)];
    int zJlB8MG [10];
    float GPA;
    double  c [10], SUMa, SUMc;
    int i;
    scanf ("%d", &n);
    SUMc = 0;
    SUMa = 0;
    c[0] = 0;
    zJlB8MG[0] = 0;
    jT0p5ozR[(346 - 346)] = (505 - 505);
    for (i = 0; i < n; i++) {
        scanf ("%d", &jT0p5ozR[i]);
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
    for (i = 0; i < n; i++) {
        scanf ("%d", &zJlB8MG[i]);
        if (zJlB8MG[i] >= 90)
            c[i] = (614 - 610) * jT0p5ozR[i];
        else if ((89 >= zJlB8MG[i]) && (85 <= zJlB8MG[i]))
            c[i] = 3.7 * jT0p5ozR[i];
        else if ((84 >= zJlB8MG[i]) && (82 <= zJlB8MG[i]))
            c[i] = 3.3 * jT0p5ozR[i];
        else if ((zJlB8MG[i] <= 81) && (78 <= zJlB8MG[i]))
            c[i] = 3.0 * jT0p5ozR[i];
        else if ((zJlB8MG[i] <= 77) && (zJlB8MG[i] >= 75))
            c[i] = 2.7 * jT0p5ozR[i];
        else if ((zJlB8MG[i] <= (580 - 506)) && (zJlB8MG[i] >= (609 - 537)))
            c[i] = 2.3 * jT0p5ozR[i];
        else if ((zJlB8MG[i] <= 71) && (zJlB8MG[i] >= 68))
            c[i] = 2.0 * jT0p5ozR[i];
        else if ((zJlB8MG[i] <= 67) && (zJlB8MG[i] >= 64))
            c[i] = 1.5 * jT0p5ozR[i];
        else if ((zJlB8MG[i] <= 63) && (zJlB8MG[i] >= 60))
            c[i] = 1.0 * jT0p5ozR[i];
        else
            c[i] = 0 * jT0p5ozR[i];
    }
    for (i = 0; i < n; i++) {
        SUMc = SUMc +(float)c[i];
        SUMa = SUMa +jT0p5ozR[i];
    }
    GPA = (float) (SUMc / SUMa);
    printf ("%.2f", GPA);
    return 0;
}

