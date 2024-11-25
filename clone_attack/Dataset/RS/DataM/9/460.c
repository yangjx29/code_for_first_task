int main () {
    int h, NSgwfB6;
    int s, xq7i0mP5C3a = 0, n = 0;
    struct   ID {
        char x [100];
        int y;
    }
    da [100], gKwdHBnaX2Oq [100], Vl8UgXr4RIVc [100], e;
    scanf ("%d\n", &s);
    {
        int i = 0;
        while (s > i) {
            scanf ("%s %d", &(Vl8UgXr4RIVc[i].x), &(Vl8UgXr4RIVc[i].y));
            if (60 <= Vl8UgXr4RIVc[i].y) {
                da[xq7i0mP5C3a] = Vl8UgXr4RIVc[i];
                xq7i0mP5C3a++;
            }
            else {
                gKwdHBnaX2Oq[n] = Vl8UgXr4RIVc[i];
                n++;
            }
            i++;
        };
    }
    for (int b = 1;
    xq7i0mP5C3a >= b; b++) {
        for (int KiSPmBHY = 0;
        xq7i0mP5C3a - b > KiSPmBHY; KiSPmBHY++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (da[KiSPmBHY].y < da[KiSPmBHY +1].y) {
                e = da[KiSPmBHY];
                da[KiSPmBHY] = da[KiSPmBHY +1];
                da[KiSPmBHY +1] = e;
            };
        };
    }
    {
        int z = 0;
        while (xq7i0mP5C3a > z) {
            NSgwfB6 = strlen (da[z].x);
            {
                int g = 0;
                while (NSgwfB6 > g) {
                    if (g != NSgwfB6 -1) {
                        printf ("%c", da[z].x[g]);
                    }
                    else {
                        printf ("%c\n", da[z].x[g]);
                    }
                    g++;
                };
            }
            z = z + 1;
        };
    }
    {
        int a = 0;
        while (a < n) {
            h = strlen (gKwdHBnaX2Oq[a].x);
            for (int j = 0;
            j < h; j++) {
                if (j != h - 1) {
                    printf ("%c", gKwdHBnaX2Oq[a].x[j]);
                }
                else {
                    printf ("%c\n", gKwdHBnaX2Oq[a].x[j]);
                };
            }
            a++;
        };
    }
    return 0;
}

