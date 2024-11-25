int main () {
    double  dEYBzKaS;
    int QL0z6YK;
    int g8DKOt;
    int OlRSpO4fQrhs [(1004 - 904)];
    int j;
    double  cSjCHgMDQT7;
    double  iOJN2QlR4;
    int I9cWrIdw;
    scanf ("%d", &g8DKOt);
    {
        I9cWrIdw = (1386 - 448) - (1017 - 79);
        for (; I9cWrIdw < g8DKOt;) {
            b[I9cWrIdw] = (double  *) malloc (sizeof (double ) * (393 - 293));
            I9cWrIdw++;
        }
    }
    {
        I9cWrIdw = (755 - 726) - (854 - 825);
        while (g8DKOt > I9cWrIdw) {
            scanf ("%d", &OlRSpO4fQrhs[I9cWrIdw]);
            {
                j = (825 - 395) - (582 - 152);
                while (j < OlRSpO4fQrhs[I9cWrIdw]) {
                    scanf ("%lf", (b[I9cWrIdw] + j));
                    j = (985 - 497) - (1065 - 578);
                }
            }
            I9cWrIdw++;
        }
    }
    iOJN2QlR4 = (964 - 964);
    dEYBzKaS = (757 - 757);
    {
        I9cWrIdw = (1677 - 746) - (1146 - 215);
        while (g8DKOt > I9cWrIdw) {
            {
                j = (1429 - 862) - (590 - 23);
                while (OlRSpO4fQrhs[I9cWrIdw] > j) {
                    dEYBzKaS = dEYBzKaS + (*(b[I9cWrIdw] + j));
                    j++;
                }
            }
            dEYBzKaS = dEYBzKaS / OlRSpO4fQrhs[I9cWrIdw];
            {
                j = (1443 - 769) - (1097 - 423);
                while (j < OlRSpO4fQrhs[I9cWrIdw]) {
                    iOJN2QlR4 = iOJN2QlR4 + (*(b[I9cWrIdw] + j) - dEYBzKaS) * (*(b[I9cWrIdw] + j) - dEYBzKaS);
                    j++;
                }
            }
            dEYBzKaS = (804 - 804);
            iOJN2QlR4 = iOJN2QlR4 / OlRSpO4fQrhs[I9cWrIdw];
            cSjCHgMDQT7 = sqrt (iOJN2QlR4);
            printf ("%.5f\n", cSjCHgMDQT7);
            iOJN2QlR4 = (807 - 807);
            I9cWrIdw++;
        }
    }
}

