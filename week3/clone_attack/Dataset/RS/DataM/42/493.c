int main () {
    int wcEmwOIn, JOdN578JKI6e, qQnLp2FKTIiC, JEv42K = 0;
    int *Ozh40e5p = (int *) malloc (sizeof (int) * wcEmwOIn);
    int *pmt2cYDq = (int *) malloc (sizeof (int) * wcEmwOIn);
    free (pmt2cYDq);
    free (Ozh40e5p);
    scanf ("%d", &wcEmwOIn);
    {
        qQnLp2FKTIiC = 0;
        while (qQnLp2FKTIiC < wcEmwOIn) {
            scanf ("%d", &Ozh40e5p[qQnLp2FKTIiC]);
            qQnLp2FKTIiC = qQnLp2FKTIiC + 1;
        };
    }
    scanf ("%d", &JOdN578JKI6e);
    {
        qQnLp2FKTIiC = 0;
        while (qQnLp2FKTIiC < wcEmwOIn) {
            if (Ozh40e5p[qQnLp2FKTIiC] != JOdN578JKI6e) {
                pmt2cYDq[JEv42K] = Ozh40e5p[qQnLp2FKTIiC];
                JEv42K = JEv42K +1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            qQnLp2FKTIiC++;
        };
    }
    {
        qQnLp2FKTIiC = 0;
        while (qQnLp2FKTIiC < JEv42K -1) {
            printf ("%d ", pmt2cYDq[qQnLp2FKTIiC]);
            qQnLp2FKTIiC++;
        };
    }
    printf ("%d", pmt2cYDq[JEv42K -1]);
    return 0;
}

