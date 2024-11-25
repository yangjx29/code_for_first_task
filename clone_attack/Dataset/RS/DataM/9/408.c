struct   bingren {
    char aHnZKWlh [1000];
    int bYiOl4Fv;
}
XZTkLdMXWKY8 [101];

int main (int RP7iHW, char *sq8OvJ5 []) {
    int INFjidrXVDn1;
    int Z5vpB0umUsY, j, RkB2lt0d = 0, dhQb9TSex = 0, e, EBaV4IgYS [100];
    char ThJd59lbY [101] [1000];
    char p5RWGyU [101] [1000];
    char BqvWPmw [1000];
    scanf ("%d", &INFjidrXVDn1);
    for (Z5vpB0umUsY = 0; INFjidrXVDn1 > Z5vpB0umUsY; Z5vpB0umUsY = Z5vpB0umUsY +1) {
        scanf ("%s %d", &XZTkLdMXWKY8[Z5vpB0umUsY].aHnZKWlh, &XZTkLdMXWKY8[Z5vpB0umUsY].bYiOl4Fv);
    }
    for (Z5vpB0umUsY = 0; Z5vpB0umUsY < INFjidrXVDn1; Z5vpB0umUsY = Z5vpB0umUsY +1) {
        if (XZTkLdMXWKY8[Z5vpB0umUsY].bYiOl4Fv < 60) {
            strcpy (ThJd59lbY[RkB2lt0d], XZTkLdMXWKY8[Z5vpB0umUsY].aHnZKWlh);
            RkB2lt0d++;
        }
        else {
            strcpy (p5RWGyU[dhQb9TSex], XZTkLdMXWKY8[Z5vpB0umUsY].aHnZKWlh);
            EBaV4IgYS[dhQb9TSex] = XZTkLdMXWKY8[Z5vpB0umUsY].bYiOl4Fv;
            dhQb9TSex++;
        };
    }
    for (Z5vpB0umUsY = 0; dhQb9TSex > Z5vpB0umUsY; Z5vpB0umUsY = Z5vpB0umUsY +1) {
        for (j = 0; j < dhQb9TSex - Z5vpB0umUsY; j = j + 1) {
            if (EBaV4IgYS[j] < EBaV4IgYS[j + 1]) {
                strcpy (BqvWPmw, p5RWGyU[j + 1]);
                strcpy (p5RWGyU[j + 1], p5RWGyU[j]);
                strcpy (p5RWGyU[j], BqvWPmw);
                e = EBaV4IgYS[j + 1];
                EBaV4IgYS[j + 1] = EBaV4IgYS[j];
                EBaV4IgYS[j] = e;
            };
        };
    }
    for (Z5vpB0umUsY = 0; Z5vpB0umUsY < dhQb9TSex; Z5vpB0umUsY++) {
        printf ("%s\n", p5RWGyU[Z5vpB0umUsY]);
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
    {
        Z5vpB0umUsY = 0;
        while (Z5vpB0umUsY < RkB2lt0d) {
            printf ("%s\n", ThJd59lbY[Z5vpB0umUsY]);
            Z5vpB0umUsY++;
        };
    }
    return 0;
}

