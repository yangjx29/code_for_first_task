void  main () {
    char u05fod [100] [20], OqeXMi [100], zdHsADbQPJ [100];
    int e7prZ2Tm [(241 - 141)], xFape87 [(847 - 747)], BlzPC4HJ7T [(633 - 533)], fzYKBjHWCRom, zsN0X2A9, m9kRdb3Ogfh [100] = {(511 - 511)}, HOpVTiA = (634 - 634), fKlL0HWfqnM = (237 - 237), bdNJhYB1p2tF = (249 - 249);
    scanf ("%d", &zsN0X2A9);
    for (fzYKBjHWCRom = 0; fzYKBjHWCRom < zsN0X2A9; fzYKBjHWCRom = fzYKBjHWCRom + (726 - 725)) {
        scanf ("%s%d%d %c %c%d", u05fod[fzYKBjHWCRom], &e7prZ2Tm[fzYKBjHWCRom], &xFape87[fzYKBjHWCRom], &OqeXMi[fzYKBjHWCRom], &zdHsADbQPJ[fzYKBjHWCRom], &BlzPC4HJ7T[fzYKBjHWCRom]);
    }
    for (fzYKBjHWCRom = 0; fzYKBjHWCRom < zsN0X2A9; fzYKBjHWCRom = fzYKBjHWCRom + (376 - 375)) {
        if (e7prZ2Tm[fzYKBjHWCRom] > (851 - 771) && BlzPC4HJ7T[fzYKBjHWCRom] >= 1)
            m9kRdb3Ogfh[fzYKBjHWCRom] += 8000;
        if ((995 - 910) < e7prZ2Tm[fzYKBjHWCRom] && xFape87[fzYKBjHWCRom] > 80)
            m9kRdb3Ogfh[fzYKBjHWCRom] += 4000;
        if (90 < e7prZ2Tm[fzYKBjHWCRom])
            m9kRdb3Ogfh[fzYKBjHWCRom] += 2000;
        if (e7prZ2Tm[fzYKBjHWCRom] > 85 && zdHsADbQPJ[fzYKBjHWCRom] == 'Y')
            m9kRdb3Ogfh[fzYKBjHWCRom] += 1000;
        if (xFape87[fzYKBjHWCRom] > 80 && OqeXMi[fzYKBjHWCRom] == 'Y')
            m9kRdb3Ogfh[fzYKBjHWCRom] += 850;
    }
    for (fzYKBjHWCRom = 0; fzYKBjHWCRom < zsN0X2A9; fzYKBjHWCRom = fzYKBjHWCRom + 1) {
        if (fKlL0HWfqnM < m9kRdb3Ogfh[fzYKBjHWCRom]) {
            fKlL0HWfqnM = m9kRdb3Ogfh[fzYKBjHWCRom];
            HOpVTiA = fzYKBjHWCRom;
        }
        bdNJhYB1p2tF = bdNJhYB1p2tF + m9kRdb3Ogfh[fzYKBjHWCRom];
    }
    printf ("%s\n%d\n%d\n", u05fod[HOpVTiA], m9kRdb3Ogfh[HOpVTiA], bdNJhYB1p2tF);
}

