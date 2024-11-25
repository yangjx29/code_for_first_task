int main (int argc, char *wR7rbHQS []) {
    double  x, y, c9pToun, fC0PoOq = 0;
    int g9lsPD5iq, JVQjdq, YJqIx0P, aejbk4Ci6Mld;
    double  pSyLOucdR3 [9999] [2];
    scanf ("%d", &JVQjdq);
    {
        g9lsPD5iq = 0;
        while (JVQjdq > g9lsPD5iq) {
            for (YJqIx0P = 0; 2 > YJqIx0P; YJqIx0P = YJqIx0P +1) {
                scanf ("%lf", &pSyLOucdR3[g9lsPD5iq][YJqIx0P]);
            }
            g9lsPD5iq++;
        }
    }
    for (g9lsPD5iq = 0; g9lsPD5iq < JVQjdq; g9lsPD5iq = g9lsPD5iq + 1) {
        aejbk4Ci6Mld = 0;
        while (g9lsPD5iq > aejbk4Ci6Mld) {
            if (aejbk4Ci6Mld != g9lsPD5iq) {
                x = pSyLOucdR3[g9lsPD5iq][1] - pSyLOucdR3[aejbk4Ci6Mld][1];
                y = pSyLOucdR3[g9lsPD5iq][0] - pSyLOucdR3[aejbk4Ci6Mld][0];
                c9pToun = sqrt (x * x + y * y);
                if (c9pToun > fC0PoOq)
                    fC0PoOq = c9pToun;
            }
            aejbk4Ci6Mld = aejbk4Ci6Mld + 1;
        }
    }
    printf ("%.4lf", fC0PoOq);
    return 0;
}

