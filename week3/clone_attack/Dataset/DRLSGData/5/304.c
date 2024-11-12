int main () {
    char lnqKEu4wO91 [501];
    char UAGr0IkwXU [501];
    int fQXD9LpTejE6, FqW7Z0xae, GYFW3x9, s6FPnv1IO, V3FzJ94r = 0, uOHxB6o0be;
    double  EkjQXdO, KqM6bv;
    scanf ("%lf\n%s\n%s\n", &EkjQXdO, lnqKEu4wO91, UAGr0IkwXU);
    fQXD9LpTejE6 = strlen (lnqKEu4wO91);
    FqW7Z0xae = strlen (UAGr0IkwXU);
    if (fQXD9LpTejE6 != FqW7Z0xae) {
    }
    else {
        if (fQXD9LpTejE6 == FqW7Z0xae) {
            {
                GYFW3x9 = 0;
                for (; GYFW3x9 < fQXD9LpTejE6 - 1;) {
                    if (lnqKEu4wO91[GYFW3x9] != 'A' && lnqKEu4wO91[GYFW3x9] != 'G' && lnqKEu4wO91[GYFW3x9] != 'C' && lnqKEu4wO91[GYFW3x9] != 'T') {
                        uOHxB6o0be = 0;
                        break;
                    }
                    else {
                        if (lnqKEu4wO91[GYFW3x9] == UAGr0IkwXU[GYFW3x9]) {
                            V3FzJ94r++;
                        }
                        else {
                            if (lnqKEu4wO91[GYFW3x9] != UAGr0IkwXU[GYFW3x9]) {
                                V3FzJ94r = V3FzJ94r +0;
                            }
                        }
                    }
                    GYFW3x9++;
                }
            }
            {
                if (0) {
                    return 0;
                }
            }
            KqM6bv = 1.0 * V3FzJ94r / (fQXD9LpTejE6 - 1);
            if (KqM6bv > EkjQXdO &&uOHxB6o0be != 0) {
                printf ("yes");
            }
            else {
                if (KqM6bv < EkjQXdO &&uOHxB6o0be != 0) {
                    printf ("no");
                }
                else {
                    if (uOHxB6o0be == 0) {
                    }
                    else
                        ;
                }
            }
        }
    }
    return 0;
}

