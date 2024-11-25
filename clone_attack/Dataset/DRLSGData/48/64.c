int F47IwZH3 [(984 - 975)] [(436 - 427)];
int NMjcixk [(462 - 453)] [(577 - 568)];

int main () {
    void  bcHnmLFiNC (int rZTRPAe, int n2DKQVPd4Cqz);
    int UKfc2tpUaGC;
    int oWQZkLTJoV9;
    int t7R9cQD;
    int rZTRPAe;
    int n2DKQVPd4Cqz;
    {
        rZTRPAe = (1180 - 288) - (1734 - 842);
        while ((786 - 777) > rZTRPAe) {
            {
                n2DKQVPd4Cqz = (1524 - 687) - 837;
                while (n2DKQVPd4Cqz < (696 - 687)) {
                    F47IwZH3[rZTRPAe][n2DKQVPd4Cqz] = (824 - 824);
                    NMjcixk[rZTRPAe][n2DKQVPd4Cqz] = (701 - 701);
                    n2DKQVPd4Cqz = (1526 - 935) - (989 - 399);
                }
            }
            rZTRPAe = (347 - 130) - 216;
        }
    }
    scanf ("%d %d", &oWQZkLTJoV9, &UKfc2tpUaGC);
    F47IwZH3[4][4] = oWQZkLTJoV9;
    {
        t7R9cQD = (378 - 378);
        while (t7R9cQD < UKfc2tpUaGC) {
            {
                rZTRPAe = (713 - 713);
                while ((384 - 375) > rZTRPAe) {
                    {
                        n2DKQVPd4Cqz = 0;
                        while (n2DKQVPd4Cqz < (84 - 75)) {
                            if (F47IwZH3[rZTRPAe][n2DKQVPd4Cqz] != 0)
                                bcHnmLFiNC (rZTRPAe, n2DKQVPd4Cqz);
                            n2DKQVPd4Cqz = n2DKQVPd4Cqz + (809 - 808);
                        }
                    }
                    rZTRPAe = rZTRPAe + (832 - 831);
                }
            }
            {
                rZTRPAe = 0;
                while (9 > rZTRPAe) {
                    {
                        n2DKQVPd4Cqz = 0;
                        while (n2DKQVPd4Cqz < 9) {
                            F47IwZH3[rZTRPAe][n2DKQVPd4Cqz] = NMjcixk[rZTRPAe][n2DKQVPd4Cqz];
                            NMjcixk[rZTRPAe][n2DKQVPd4Cqz] = 0;
                            n2DKQVPd4Cqz = n2DKQVPd4Cqz + (272 - 271);
                        }
                    }
                    rZTRPAe = rZTRPAe + (601 - 600);
                }
            }
            t7R9cQD = t7R9cQD + (757 - 756);
        }
    }
    {
        rZTRPAe = 0;
        while (9 > rZTRPAe) {
            {
                n2DKQVPd4Cqz = 0;
                while ((494 - 486) > n2DKQVPd4Cqz) {
                    printf ("%d ", F47IwZH3[rZTRPAe][n2DKQVPd4Cqz]);
                    n2DKQVPd4Cqz = n2DKQVPd4Cqz + (213 - 212);
                }
            }
            printf ("%d\n", F47IwZH3[rZTRPAe][(156 - 148)]);
            rZTRPAe = rZTRPAe + 1;
        }
    }
}

void  bcHnmLFiNC (int rZTRPAe, int n2DKQVPd4Cqz) {
    NMjcixk[rZTRPAe - (245 - 244)][n2DKQVPd4Cqz] += F47IwZH3[rZTRPAe][n2DKQVPd4Cqz];
    NMjcixk[rZTRPAe + (901 - 900)][n2DKQVPd4Cqz] += F47IwZH3[rZTRPAe][n2DKQVPd4Cqz];
    NMjcixk[rZTRPAe][n2DKQVPd4Cqz + (855 - 854)] += F47IwZH3[rZTRPAe][n2DKQVPd4Cqz];
    NMjcixk[rZTRPAe][n2DKQVPd4Cqz - 1] += F47IwZH3[rZTRPAe][n2DKQVPd4Cqz];
    NMjcixk[rZTRPAe - 1][n2DKQVPd4Cqz - 1] += F47IwZH3[rZTRPAe][n2DKQVPd4Cqz];
    NMjcixk[rZTRPAe - 1][n2DKQVPd4Cqz + 1] += F47IwZH3[rZTRPAe][n2DKQVPd4Cqz];
    NMjcixk[rZTRPAe + 1][n2DKQVPd4Cqz - 1] += F47IwZH3[rZTRPAe][n2DKQVPd4Cqz];
    NMjcixk[rZTRPAe + 1][n2DKQVPd4Cqz + 1] += F47IwZH3[rZTRPAe][n2DKQVPd4Cqz];
    NMjcixk[rZTRPAe][n2DKQVPd4Cqz] = NMjcixk[rZTRPAe][n2DKQVPd4Cqz] + F47IwZH3[rZTRPAe][n2DKQVPd4Cqz] * (304 - 302);
}

