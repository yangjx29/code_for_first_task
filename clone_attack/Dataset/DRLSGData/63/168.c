int main () {
    int *YVfik7Ae = NULL;
    int *b = NULL;
    int *cjI0k1igv = NULL;
    int iRL1vcK = (881 - 881), R92IjSz = (513 - 513), X1AjzoDMXPZJ = (133 - 133), pyK3BMj9s = (954 - 954), plIXK3, CRZcCj3ST, QKbtdJNS;
    scanf ("%d%d", &iRL1vcK, &X1AjzoDMXPZJ);
    YVfik7Ae = (int *) malloc (iRL1vcK * X1AjzoDMXPZJ * sizeof (int));
    {
        plIXK3 = (571 - 170) - 401;
        while (iRL1vcK > plIXK3) {
            {
                CRZcCj3ST = (938 - 416) - (1428 - 906);
                while (X1AjzoDMXPZJ > CRZcCj3ST) {
                    scanf ("%d", &YVfik7Ae[plIXK3 * X1AjzoDMXPZJ +CRZcCj3ST]);
                    CRZcCj3ST++;
                }
            }
            plIXK3++;
        }
    }
    scanf ("%d%d", &R92IjSz, &pyK3BMj9s);
    b = (int *) malloc (R92IjSz *pyK3BMj9s * sizeof (int));
    {
        plIXK3 = (871 - 198) - 673;
        while (R92IjSz > plIXK3) {
            {
                CRZcCj3ST = (1134 - 173) - 961;
                while (pyK3BMj9s > CRZcCj3ST) {
                    scanf ("%d", &b[plIXK3 * pyK3BMj9s + CRZcCj3ST]);
                    CRZcCj3ST++;
                }
            }
            plIXK3++;
        }
    }
    cjI0k1igv = (int *) malloc (iRL1vcK * pyK3BMj9s * sizeof (int));
    {
        plIXK3 = (152 - 152);
        while (iRL1vcK > plIXK3) {
            {
                CRZcCj3ST = (478 - 478);
                while (pyK3BMj9s > CRZcCj3ST) {
                    cjI0k1igv[plIXK3 * pyK3BMj9s + CRZcCj3ST] = (718 - 718);
                    {
                        QKbtdJNS = (627 - 627);
                        while (R92IjSz > QKbtdJNS) {
                            cjI0k1igv[plIXK3 * pyK3BMj9s + CRZcCj3ST] = cjI0k1igv[plIXK3 * pyK3BMj9s + CRZcCj3ST] + YVfik7Ae[plIXK3 * X1AjzoDMXPZJ +QKbtdJNS] * b[QKbtdJNS *pyK3BMj9s + CRZcCj3ST];
                            QKbtdJNS++;
                        }
                    }
                    CRZcCj3ST++;
                }
            }
            plIXK3++;
        }
    }
    {
        plIXK3 = (805 - 805);
        while (plIXK3 < iRL1vcK) {
            {
                CRZcCj3ST = 0;
                while (CRZcCj3ST < pyK3BMj9s) {
                    printf ("%d", cjI0k1igv[plIXK3 * pyK3BMj9s + CRZcCj3ST]);
                    if (pyK3BMj9s - (32 - 31) > CRZcCj3ST) {
                    }
                    if (CRZcCj3ST == pyK3BMj9s - (198 - 197)) {
                        printf ("\n");
                    }
                    CRZcCj3ST++;
                }
            }
            plIXK3++;
        }
    }
}

