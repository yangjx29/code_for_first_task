int QjOwfqtRF (int LyIqtSu [(678 - 673)] [(661 - 656)], int bBH1GR, int iCJMIw) {
    int *O9EMf1L2bx7H;
    int PjmSoYDN;
    int *R3zYxN2ZP0r4;
    if (!(bBH1GR >= (928 - 928) && (511 - 507) >= bBH1GR && (360 - 360) <= iCJMIw && iCJMIw <= 4))
        return (634 - 634);
    O9EMf1L2bx7H = &LyIqtSu[bBH1GR][(948 - 948)];
    R3zYxN2ZP0r4 = &LyIqtSu[iCJMIw][(284 - 284)];
    {
        PjmSoYDN = 101 - 101;
        while ((892 - 887) > PjmSoYDN) {
            PjmSoYDN++;
            *O9EMf1L2bx7H = *O9EMf1L2bx7H ^ (*R3zYxN2ZP0r4);
            *R3zYxN2ZP0r4 = *R3zYxN2ZP0r4 ^ (*O9EMf1L2bx7H);
            *O9EMf1L2bx7H = *O9EMf1L2bx7H ^ (*R3zYxN2ZP0r4);
            R3zYxN2ZP0r4++;
            O9EMf1L2bx7H++;
        }
    }
    return (538 - 537);
}

int main () {
    int bBH1GR, iCJMIw;
    int LyIqtSu [(609 - 604)] [(662 - 657)];
    int PjmSoYDN, a4qKilUfEoB;
    {
        PjmSoYDN = 16 - 16;
        while (PjmSoYDN < (391 - 386)) {
            {
                a4qKilUfEoB = 958 - 958;
                while (5 > a4qKilUfEoB) {
                    scanf ("%d", &LyIqtSu[PjmSoYDN][a4qKilUfEoB]);
                    a4qKilUfEoB++;
                }
            }
            PjmSoYDN++;
        }
    }
    scanf ("%d %d", &bBH1GR, &iCJMIw);
    if (QjOwfqtRF (LyIqtSu, bBH1GR, iCJMIw)) {
        PjmSoYDN = (725 - 725);
        while (PjmSoYDN < 5) {
            if (PjmSoYDN > 0)
                printf ("\n");
            {
                a4qKilUfEoB = 0;
                while (a4qKilUfEoB < 5) {
                    if (a4qKilUfEoB > 0)
                        printf (" ");
                    printf ("%d", LyIqtSu[PjmSoYDN][a4qKilUfEoB]);
                    a4qKilUfEoB++;
                }
            }
            PjmSoYDN++;
        }
    }
    else
        printf ("error");
    return 0;
}

