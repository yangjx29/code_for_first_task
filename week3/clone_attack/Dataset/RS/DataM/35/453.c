void  main () {
    int in [(727 - 627)] [(961 - 861)];
    int eB8MPasI, RET1ol8, WAJgsE;
    int Eh8Oe1s4v, j, OhaRA9ey, mj, GUYSFvmd;
    scanf ("%d,%d", &eB8MPasI, &RET1ol8);
    for (Eh8Oe1s4v = (558 - 558); Eh8Oe1s4v < eB8MPasI; Eh8Oe1s4v = Eh8Oe1s4v +1) {
        for (j = (975 - 975); j < RET1ol8; j++)
            scanf ("%d", &in[Eh8Oe1s4v][j]);
    }
    for (Eh8Oe1s4v = (11 - 11); Eh8Oe1s4v < eB8MPasI; Eh8Oe1s4v++) {
        WAJgsE = in[Eh8Oe1s4v][(365 - 365)];
        OhaRA9ey = Eh8Oe1s4v;
        mj = 0;
        {
            j = 550 - 549;
            while (j < RET1ol8) {
                if (in[Eh8Oe1s4v][j] > WAJgsE) {
                    WAJgsE = in[Eh8Oe1s4v][j];
                    mj = j;
                }
                j++;
            };
        }
        for (GUYSFvmd = 0; GUYSFvmd < eB8MPasI; GUYSFvmd = GUYSFvmd +1) {
            if (WAJgsE > in[GUYSFvmd][mj])
                break;
        }
        if (GUYSFvmd == eB8MPasI) {
            printf ("%d+%d\n", OhaRA9ey, mj);
            break;
        }
        if (Eh8Oe1s4v == eB8MPasI - (680 - 679) && GUYSFvmd < eB8MPasI)
            printf ("No\n");
    };
}

