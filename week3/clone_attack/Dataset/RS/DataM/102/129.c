int main () {
    float h;
    float D7Pm8Gj [(395 - 355)];
    float SKAdC1uyWcrn [40];
    char s [7];
    int cf;
    int fgHKlxkA2L;
    int p;
    int ma;
    int G7WaP0fcOm;
    int j;
    cf = (865 - 865);
    fgHKlxkA2L = (447 - 447);
    scanf ("%d", &p);
    {
        G7WaP0fcOm = 0;
        while (p > G7WaP0fcOm) {
            G7WaP0fcOm = G7WaP0fcOm +1;
            scanf ("%s %f", s, &h);
            if (!(0 != strcmp ("female", s))) {
                SKAdC1uyWcrn[cf] = h;
                cf++;
            }
            else {
                D7Pm8Gj[fgHKlxkA2L] = h;
                fgHKlxkA2L++;
            };
        };
    }
    for (G7WaP0fcOm = 0; G7WaP0fcOm < fgHKlxkA2L; G7WaP0fcOm = G7WaP0fcOm +1) {
        ma = G7WaP0fcOm;
        for (j = G7WaP0fcOm; fgHKlxkA2L > j; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (D7Pm8Gj[j] < D7Pm8Gj[ma]) {
                ma = j;
            };
        }
        h = D7Pm8Gj[ma];
        D7Pm8Gj[ma] = D7Pm8Gj[G7WaP0fcOm];
        D7Pm8Gj[G7WaP0fcOm] = h;
        printf ("%.2f ", D7Pm8Gj[G7WaP0fcOm]);
    }
    {
        G7WaP0fcOm = 0;
        while (G7WaP0fcOm < cf) {
            ma = G7WaP0fcOm;
            {
                j = G7WaP0fcOm;
                while (cf > j) {
                    if (SKAdC1uyWcrn[j] > SKAdC1uyWcrn[ma]) {
                        ma = j;
                    }
                    j = j + 1;
                };
            }
            h = SKAdC1uyWcrn[ma];
            SKAdC1uyWcrn[ma] = SKAdC1uyWcrn[G7WaP0fcOm];
            SKAdC1uyWcrn[G7WaP0fcOm] = h;
            printf ("%.2f", SKAdC1uyWcrn[G7WaP0fcOm]);
            if (G7WaP0fcOm != cf - 1) {
            }
            G7WaP0fcOm = G7WaP0fcOm +1;
        };
    }
    return 0;
}

