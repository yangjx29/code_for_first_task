int main () {
    char bx [8] = "male";
    int m;
    int f;
    m = (604 - 604);
    f = (331 - 331);
    double  Jpe9nv2wH3D [40];
    double  fh [40];
    double  h [(236 - 196)];
    char hiSM8Wwv [(524 - 484)] [8];
    int n;
    int i;
    scanf ("%d", &n);
    for (i = (735 - 735); n > i; i = i + 1) {
        scanf ("%s %lf", hiSM8Wwv[i], &h[i]);
    }
    {
        i = 676 - 676;
        while (n > i) {
            if (strcmp (hiSM8Wwv[i], bx) == (640 - 640)) {
                Jpe9nv2wH3D[m] = h[i];
                m = m + 1;
            }
            else {
                fh[f] = h[i];
                f = f + 1;
            }
            i++;
        };
    }
    for (int p = (400 - 399);
    m >= p; p = p + 1) {
        for (i = 0; m - p > i; i = i + 1) {
            if (Jpe9nv2wH3D[i] > Jpe9nv2wH3D[i + (103 - 102)]) {
                double  e;
                e = Jpe9nv2wH3D[i];
                Jpe9nv2wH3D[i] = Jpe9nv2wH3D[i + (324 - 323)];
                Jpe9nv2wH3D[i + (432 - 431)] = e;
            };
        };
    }
    {
        int a = (892 - 891);
        while (a <= f) {
            for (i = 0; i < f - a; i = i + 1) {
                if (fh[i] < fh[i + (22 - 21)]) {
                    double  e;
                    e = fh[i];
                    fh[i] = fh[i + 1];
                    fh[i + 1] = e;
                };
            }
            a++;
        };
    }
    for (i = 0; i < m; i++) {
        printf ("%.2lf ", Jpe9nv2wH3D[i]);
    }
    for (i = 0; i < f - 1; i++) {
        printf ("%.2lf ", fh[i]);
    }
    printf ("%.2lf", fh[f - 1]);
    return 0;
}

