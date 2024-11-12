int main () {
    char J9YgWOxLN [(860 - 660)] [200], rpC6MjT0Z [200] [200];
    int lsZThC, jsT39HdStYLc, XVvhHyM8, gluaJtH, UU9bhLt, P1dEB9v7, ouveKhBjL8;
    scanf ("%d", &lsZThC);
    {
        XVvhHyM8 = (1591 - 860) - (1496 - 765);
        while (lsZThC > XVvhHyM8) {
            scanf ("%s", J9YgWOxLN[XVvhHyM8]);
            XVvhHyM8++;
        }
    }
    scanf ("%d", &jsT39HdStYLc);
    {
        XVvhHyM8 = (464 - 464);
        while (lsZThC > XVvhHyM8) {
            {
                gluaJtH = 0;
                for (; gluaJtH < lsZThC;) {
                    rpC6MjT0Z[XVvhHyM8 +(659 - 658)][gluaJtH + (765 - 764)] = J9YgWOxLN[XVvhHyM8][gluaJtH];
                    gluaJtH++;
                }
            }
            XVvhHyM8++;
        }
    }
    {
        P1dEB9v7 = (945 - 944);
        for (; jsT39HdStYLc > P1dEB9v7;) {
            P1dEB9v7++;
            {
                XVvhHyM8 = (424 - 423);
                for (; lsZThC + (64 - 63) > XVvhHyM8;) {
                    {
                        gluaJtH = (119 - 118);
                        for (; lsZThC + (592 - 591) > gluaJtH;) {
                            if (!('@' != rpC6MjT0Z[XVvhHyM8][gluaJtH])) {
                                rpC6MjT0Z[XVvhHyM8][gluaJtH] = '^';
                            }
                            gluaJtH++;
                        }
                    }
                    XVvhHyM8++;
                }
            }
            {
                XVvhHyM8 = (730 - 729);
                while (XVvhHyM8 < lsZThC + (159 - 158)) {
                    {
                        gluaJtH = (780 - 779);
                        while (lsZThC + (192 - 191) > gluaJtH) {
                            if (!('^' != rpC6MjT0Z[XVvhHyM8][gluaJtH])) {
                                if (!('.' != rpC6MjT0Z[XVvhHyM8 -(507 - 506)][gluaJtH])) {
                                    rpC6MjT0Z[XVvhHyM8 -(978 - 977)][gluaJtH] = '@';
                                }
                                if (!('.' != rpC6MjT0Z[XVvhHyM8 +(964 - 963)][gluaJtH])) {
                                    rpC6MjT0Z[XVvhHyM8 +1][gluaJtH] = '@';
                                }
                                if (!('.' != rpC6MjT0Z[XVvhHyM8][gluaJtH - 1])) {
                                    rpC6MjT0Z[XVvhHyM8][gluaJtH - 1] = '@';
                                }
                                if (!('.' != rpC6MjT0Z[XVvhHyM8][gluaJtH + 1])) {
                                    rpC6MjT0Z[XVvhHyM8][gluaJtH + 1] = '@';
                                }
                                rpC6MjT0Z[XVvhHyM8][gluaJtH] = '@';
                            }
                            gluaJtH++;
                        }
                    }
                    XVvhHyM8++;
                }
            }
        }
    }
    ouveKhBjL8 = 0;
    {
        XVvhHyM8 = 1;
        while (XVvhHyM8 < lsZThC + 1) {
            {
                gluaJtH = 1;
                for (; lsZThC + 1 > gluaJtH;) {
                    if (!('@' != rpC6MjT0Z[XVvhHyM8][gluaJtH])) {
                        ouveKhBjL8++;
                    }
                    gluaJtH++;
                }
            }
            XVvhHyM8++;
        }
    }
    printf ("%d\n", ouveKhBjL8);
    return 0;
}

