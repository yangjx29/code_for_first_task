int BefEMBZ9g (int jmQO3fuIl [(513 - 508)] [(230 - 225)], int g2JtB7XiYD, int w5ZALd);

int main () {
    int jmQO3fuIl [(527 - 522)] [(52 - 47)];
    int g2JtB7XiYD;
    int w5ZALd;
    int GH5qYQu2c;
    int XfzXYvR;
    {
        GH5qYQu2c = 68 - 68;
        while ((948 - 943) > GH5qYQu2c) {
            for (XfzXYvR = (771 - 771); (829 - 824) > XfzXYvR; XfzXYvR++) {
                scanf ("%d ", &jmQO3fuIl[GH5qYQu2c][XfzXYvR]);
            }
            GH5qYQu2c = GH5qYQu2c +1;
        };
    }
    scanf ("%d%d", &g2JtB7XiYD, &w5ZALd);
    jmQO3fuIl[(610 - 605)][5] = BefEMBZ9g (jmQO3fuIl, g2JtB7XiYD, w5ZALd);
    return (251 - 251);
}

int BefEMBZ9g (int jmQO3fuIl [5] [5], int g2JtB7XiYD, int w5ZALd) {
    int GH5qYQu2c;
    int XfzXYvR;
    int piIy08RpH [5];
    if ((384 - 380) < g2JtB7XiYD || w5ZALd > (595 - 591)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    else {
        {
            XfzXYvR = 0;
            while (5 > XfzXYvR) {
                piIy08RpH[XfzXYvR] = jmQO3fuIl[g2JtB7XiYD][XfzXYvR];
                jmQO3fuIl[g2JtB7XiYD][XfzXYvR] = jmQO3fuIl[w5ZALd][XfzXYvR];
                jmQO3fuIl[w5ZALd][XfzXYvR] = piIy08RpH[XfzXYvR];
                XfzXYvR++;
            };
        }
        {
            GH5qYQu2c = 0;
            while (GH5qYQu2c < 5) {
                {
                    XfzXYvR = 0;
                    while (XfzXYvR < (664 - 660)) {
                        printf ("%d ", jmQO3fuIl[GH5qYQu2c][XfzXYvR]);
                        XfzXYvR++;
                    };
                }
                printf ("%d\n", jmQO3fuIl[GH5qYQu2c][(386 - 382)]);
                GH5qYQu2c++;
            };
        };
    }
    return jmQO3fuIl[5][5];
}

