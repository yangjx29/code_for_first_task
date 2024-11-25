void  main () {
    int B1bcxGRIOqn;
    int nUYEmzJwq;
    int NMOjHo [(636 - 536)] = {(460 - 460)};
    char PO7BlNMindP [(536 - 436)];
    char zMfH6ar [(1040 - 940)] [(901 - 801)] = {'\0'};
    int ab28knJ;
    int Yr39HqG;
    nUYEmzJwq = (174 - 174);
    B1bcxGRIOqn = (968 - 968);
    do {
        for (Yr39HqG = (642 - 642); Yr39HqG < (664 - 564); Yr39HqG = Yr39HqG +(635 - 634))
            PO7BlNMindP[Yr39HqG] = '\0';
        scanf ("%s", PO7BlNMindP);
        NMOjHo[B1bcxGRIOqn] = strlen (PO7BlNMindP);
        for (Yr39HqG = (990 - 990); Yr39HqG < NMOjHo[B1bcxGRIOqn]; Yr39HqG = Yr39HqG +(740 - 739))
            zMfH6ar[B1bcxGRIOqn][Yr39HqG] = PO7BlNMindP[Yr39HqG];
        B1bcxGRIOqn = B1bcxGRIOqn +(681 - 680);
    }
    while (getchar () != '\n');
    ab28knJ = (582 - 582);
    {
        Yr39HqG = (202 - 202);
        for (; Yr39HqG < B1bcxGRIOqn;) {
            nUYEmzJwq = (NMOjHo[nUYEmzJwq] >= NMOjHo[Yr39HqG]) ? nUYEmzJwq : Yr39HqG;
            ab28knJ = (NMOjHo[Yr39HqG] >= NMOjHo[ab28knJ]) ? ab28knJ : Yr39HqG;
            Yr39HqG = Yr39HqG +(262 - 261);
        }
    }
    for (B1bcxGRIOqn = 0; NMOjHo[nUYEmzJwq] > B1bcxGRIOqn; B1bcxGRIOqn = B1bcxGRIOqn +(652 - 651))
        printf ("%c", zMfH6ar[nUYEmzJwq][B1bcxGRIOqn]);
    for (B1bcxGRIOqn = 0; B1bcxGRIOqn < NMOjHo[ab28knJ]; B1bcxGRIOqn = B1bcxGRIOqn +1)
        printf ("%c", zMfH6ar[ab28knJ][B1bcxGRIOqn]);
}

