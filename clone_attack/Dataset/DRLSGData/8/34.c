int Up9uVnFC8, LJUT9BwAeQG, M9x6dLa [(744 - 644)] = {(619 - 619)}, yrZn1CdLUoE [(936 - 836)] = {(404 - 404)}, yfX4E9Mk [(501 - 301)] = {(920 - 920)};

void  v2KqfmkJ5ND0 () {
    int *qWS2waA9d;
    scanf ("%d %d", &LJUT9BwAeQG, &Up9uVnFC8);
    {
        qWS2waA9d = M9x6dLa;
        for (; M9x6dLa +LJUT9BwAeQG > qWS2waA9d;) {
            scanf ("%d", qWS2waA9d);
            qWS2waA9d++;
        }
    }
    {
        qWS2waA9d = yrZn1CdLUoE;
        for (; yrZn1CdLUoE + Up9uVnFC8 > qWS2waA9d;) {
            scanf ("%d", qWS2waA9d);
            qWS2waA9d++;
        }
    }
}

void  TBHEJI9 (int M9x6dLa [], int yrZn1CdLUoE [], int LJUT9BwAeQG, int Up9uVnFC8) {
    int *qWS2waA9d;
    int *fihp38Cs;
    int K3Im56;
    for (qWS2waA9d = M9x6dLa; qWS2waA9d < M9x6dLa +LJUT9BwAeQG-(820 - 819); qWS2waA9d++) {
        fihp38Cs = qWS2waA9d + (93 - 92);
        for (; M9x6dLa +LJUT9BwAeQG > fihp38Cs;) {
            if (*fihp38Cs < *qWS2waA9d) {
                K3Im56 = *qWS2waA9d;
                *qWS2waA9d = *fihp38Cs;
                *fihp38Cs = K3Im56;
            }
            fihp38Cs++;
        }
    }
    {
        qWS2waA9d = yrZn1CdLUoE;
        for (; qWS2waA9d < yrZn1CdLUoE + Up9uVnFC8 -(56 - 55);) {
            {
                fihp38Cs = qWS2waA9d + (294 - 293);
                while (fihp38Cs < yrZn1CdLUoE + Up9uVnFC8) {
                    if (*qWS2waA9d > *fihp38Cs) {
                        K3Im56 = *qWS2waA9d;
                        *qWS2waA9d = *fihp38Cs;
                        *fihp38Cs = K3Im56;
                    }
                    fihp38Cs++;
                }
            }
            qWS2waA9d++;
        }
    }
}

void  jMC6KQ0 (int M9x6dLa [], int yrZn1CdLUoE [], int LJUT9BwAeQG, int Up9uVnFC8) {
    int *qWS2waA9d;
    int *fihp38Cs;
    {
        qWS2waA9d = yfX4E9Mk;
        fihp38Cs = M9x6dLa;
        for (; fihp38Cs < M9x6dLa +LJUT9BwAeQG;) {
            *qWS2waA9d = *fihp38Cs;
            qWS2waA9d++;
            fihp38Cs++;
        }
    }
    {
        qWS2waA9d = yfX4E9Mk + LJUT9BwAeQG;
        fihp38Cs = yrZn1CdLUoE;
        for (; fihp38Cs < yrZn1CdLUoE + Up9uVnFC8;) {
            *qWS2waA9d = *fihp38Cs;
            qWS2waA9d++;
            fihp38Cs++;
        }
    }
}

void  B1JrUyOwqeTG (int yfX4E9Mk [], int K3Im56) {
    int *qWS2waA9d;
    for (qWS2waA9d = yfX4E9Mk; qWS2waA9d < yfX4E9Mk + K3Im56 -1; qWS2waA9d++)
        printf ("%d ", *qWS2waA9d);
    printf ("%d", *qWS2waA9d);
}

void  main () {
    v2KqfmkJ5ND0 ();
    TBHEJI9 (M9x6dLa, yrZn1CdLUoE, LJUT9BwAeQG, Up9uVnFC8);
    jMC6KQ0 (M9x6dLa, yrZn1CdLUoE, LJUT9BwAeQG, Up9uVnFC8);
    B1JrUyOwqeTG (yfX4E9Mk, LJUT9BwAeQG +Up9uVnFC8);
}

