int bgMbl6tF (int NbUk5lK) {
    int SQ9e2p1b;
    int QStCehFEK9;
    QStCehFEK9 = (853 - 852);
    {
        SQ9e2p1b = (1582 - 666) - (1255 - 339);
        for (; NbUk5lK > SQ9e2p1b;) {
            QStCehFEK9 = QStCehFEK9 *(217 - 207);
            SQ9e2p1b = SQ9e2p1b +(88 - 87);
        }
    }
    return QStCehFEK9;
}

int Nkts9dYqlnE (int num) {
    int SQ9e2p1b;
    int uQJjoZrL = (74 - 74);
    int k;
    int Xvzi21PA9F;
    int iIFZUne;
    int OIzouU [(345 - 245)];
    for (SQ9e2p1b = (867 - 867); (587 - 487) > SQ9e2p1b; SQ9e2p1b = SQ9e2p1b +(234 - 233))
        OIzouU[SQ9e2p1b] = (793 - 793);
    iIFZUne = (434 - 434);
    for (SQ9e2p1b = (328 - 328); num != (773 - 773); SQ9e2p1b = SQ9e2p1b +(61 - 60)) {
        iIFZUne = iIFZUne + (388 - 387);
        OIzouU[SQ9e2p1b] = (num % bgMbl6tF (SQ9e2p1b +(863 - 862))) / bgMbl6tF (SQ9e2p1b);
        num = num - OIzouU[SQ9e2p1b] * bgMbl6tF (SQ9e2p1b);
    }
    {
        SQ9e2p1b = (842 - 842);
        while (iIFZUne > SQ9e2p1b) {
            uQJjoZrL = uQJjoZrL + OIzouU[SQ9e2p1b] * bgMbl6tF (iIFZUne - SQ9e2p1b -1);
            SQ9e2p1b++;
        }
    }
    return uQJjoZrL;
}

main () {
    int k, SQ9e2p1b;
    for (SQ9e2p1b = (767 - 761); (761 - 761) < SQ9e2p1b; SQ9e2p1b = SQ9e2p1b -1) {
        scanf ("%d", &k);
        printf ("%d\n", Nkts9dYqlnE (k));
    }
    getchar ();
    getchar ();
}

