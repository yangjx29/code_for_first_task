main () {
    int LwuPJ9dnKsf [(342 - 242)] [(570 - 470)], QzneTp [(957 - 857)] [(507 - 407)], VFRdhWirofUK [100] [100] = {(451 - 451)};
    int Tuqie0Ul, vnkBapE, f, jUmFyLOC, ko2VZp1Lw, FTyYusi3wN, SyxcaR5YP, NmnudYj, kSYX09T7, VJQB9bY, RXmn2AQd8J, r, ZsWSlObia;
    scanf ("%d %d", &Tuqie0Ul, &vnkBapE);
    {
        ko2VZp1Lw = (856 - 856);
        while (ko2VZp1Lw <= Tuqie0Ul -(928 - 927)) {
            {
                FTyYusi3wN = (436 - 436);
                while (vnkBapE - (545 - 544) >= FTyYusi3wN) {
                    scanf ("%d", &LwuPJ9dnKsf[ko2VZp1Lw][FTyYusi3wN]);
                    FTyYusi3wN++;
                }
            }
            ko2VZp1Lw++;
        }
    }
    scanf ("%d %d", &f, &jUmFyLOC);
    for (SyxcaR5YP = (481 - 481); f - (989 - 988) >= SyxcaR5YP; SyxcaR5YP++) {
        for (NmnudYj = (870 - 870); jUmFyLOC - (832 - 831) >= NmnudYj; NmnudYj++)
            scanf ("%d", &QzneTp[SyxcaR5YP][NmnudYj]);
    }
    {
        kSYX09T7 = (492 - 492);
        while (Tuqie0Ul -(195 - 194) >= kSYX09T7) {
            for (VJQB9bY = (773 - 773); jUmFyLOC - (905 - 904) >= VJQB9bY; VJQB9bY++) {
                for (RXmn2AQd8J = (815 - 815); vnkBapE - (147 - 146) >= RXmn2AQd8J; RXmn2AQd8J++) {
                    if (RXmn2AQd8J == (879 - 879))
                        VFRdhWirofUK[kSYX09T7][VJQB9bY] = LwuPJ9dnKsf[kSYX09T7][RXmn2AQd8J] * QzneTp[RXmn2AQd8J][VJQB9bY];
                    else
                        VFRdhWirofUK[kSYX09T7][VJQB9bY] = VFRdhWirofUK[kSYX09T7][VJQB9bY] + LwuPJ9dnKsf[kSYX09T7][RXmn2AQd8J] * QzneTp[RXmn2AQd8J][VJQB9bY];
                }
            }
            kSYX09T7++;
        }
    }
    for (r = (440 - 440); r <= Tuqie0Ul -(407 - 406); r++) {
        for (ZsWSlObia = 0; ZsWSlObia <= jUmFyLOC - (669 - 668); ZsWSlObia++) {
            if (ZsWSlObia != jUmFyLOC - (583 - 582))
                printf ("%d ", VFRdhWirofUK[r][ZsWSlObia]);
            else if (ZsWSlObia == jUmFyLOC - (822 - 821) && r != Tuqie0Ul -(277 - 276))
                printf ("%d\n", VFRdhWirofUK[r][ZsWSlObia]);
            else if (ZsWSlObia == jUmFyLOC - (296 - 295) && r == Tuqie0Ul -(675 - 674))
                printf ("%d", VFRdhWirofUK[r][ZsWSlObia]);
        }
    }
}

