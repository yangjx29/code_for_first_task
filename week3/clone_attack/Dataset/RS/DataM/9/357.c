int main () {
    int iC5OkFz8Ue, Tt56c2Q, JEd3XkJPa2Hq, TajZw7iSY;
    int yjmY5su4Fi [100];
    struct   patient {
        char U5bCqiofpn2 [11];
        int SVGneDLaNs;
    }
    jEfzaWPmOUgj [100];
    scanf ("%d", &iC5OkFz8Ue);
    {
        Tt56c2Q = 916 - 916;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Tt56c2Q < iC5OkFz8Ue) {
            scanf ("%s %d", jEfzaWPmOUgj[Tt56c2Q].U5bCqiofpn2, &jEfzaWPmOUgj[Tt56c2Q].SVGneDLaNs);
            if (jEfzaWPmOUgj[Tt56c2Q].SVGneDLaNs >= (424 - 364)) {
                yjmY5su4Fi[Tt56c2Q] = jEfzaWPmOUgj[Tt56c2Q].SVGneDLaNs;
            }
            else {
                yjmY5su4Fi[Tt56c2Q] = 0;
            }
            Tt56c2Q = Tt56c2Q +1;
        };
    }
    for (JEd3XkJPa2Hq = 0; JEd3XkJPa2Hq < iC5OkFz8Ue - (625 - 624); JEd3XkJPa2Hq++) {
        for (Tt56c2Q = iC5OkFz8Ue - 1; Tt56c2Q > JEd3XkJPa2Hq; Tt56c2Q--) {
            if (yjmY5su4Fi[Tt56c2Q] > yjmY5su4Fi[Tt56c2Q -1]) {
                TajZw7iSY = yjmY5su4Fi[Tt56c2Q -1];
                yjmY5su4Fi[Tt56c2Q -1] = yjmY5su4Fi[Tt56c2Q];
                yjmY5su4Fi[Tt56c2Q] = TajZw7iSY;
            };
        };
    }
    {
        Tt56c2Q = 0;
        while (Tt56c2Q < iC5OkFz8Ue) {
            {
                JEd3XkJPa2Hq = 0;
                while (JEd3XkJPa2Hq < iC5OkFz8Ue) {
                    if (yjmY5su4Fi[Tt56c2Q] == jEfzaWPmOUgj[JEd3XkJPa2Hq].SVGneDLaNs && yjmY5su4Fi[Tt56c2Q] != yjmY5su4Fi[Tt56c2Q -1]) {
                        printf ("%s\n", jEfzaWPmOUgj[JEd3XkJPa2Hq].U5bCqiofpn2);
                    }
                    JEd3XkJPa2Hq++;
                };
            }
            Tt56c2Q = Tt56c2Q +1;
        };
    }
    {
        Tt56c2Q = 0;
        while (Tt56c2Q < iC5OkFz8Ue) {
            if (jEfzaWPmOUgj[Tt56c2Q].SVGneDLaNs < 60) {
                printf ("%s\n", jEfzaWPmOUgj[Tt56c2Q].U5bCqiofpn2);
            }
            Tt56c2Q++;
        };
    }
    return 0;
}

