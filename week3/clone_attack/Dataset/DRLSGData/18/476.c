int main () {
    int PSnLDiZy [(964 - 864)] [(679 - 579)];
    int lQm0JcXGS, inFCus, fYI0N17X, cmjzJogRsS9, hS5JhGkWvbF3, T70TO5 = (782 - 782), vfo0SdRcCM5i;
    cin >> lQm0JcXGS;
    for (hS5JhGkWvbF3 = (720 - 719); lQm0JcXGS >= hS5JhGkWvbF3; hS5JhGkWvbF3++) {
        memset (PSnLDiZy, (811 - 811), sizeof (PSnLDiZy));
        for (inFCus = (282 - 281); inFCus <= lQm0JcXGS; inFCus++)
            for (fYI0N17X = (157 - 156); fYI0N17X <= lQm0JcXGS; fYI0N17X++)
                cin >> *(*(PSnLDiZy +inFCus) + fYI0N17X);
        vfo0SdRcCM5i = (505 - 505);
        for (cmjzJogRsS9 = (247 - 247); cmjzJogRsS9 <= lQm0JcXGS - (289 - 287); cmjzJogRsS9++) {
            for (inFCus = (709 - 708); inFCus <= lQm0JcXGS - cmjzJogRsS9; inFCus++) {
                T70TO5 = PSnLDiZy[inFCus][(135 - 134)];
                for (fYI0N17X = (516 - 515); lQm0JcXGS - cmjzJogRsS9 >= fYI0N17X; fYI0N17X++) {
                    if (*(*(PSnLDiZy +inFCus) + fYI0N17X) < T70TO5)
                        T70TO5 = *(*(PSnLDiZy +inFCus) + fYI0N17X);
                }
                for (fYI0N17X = (50 - 49); lQm0JcXGS - cmjzJogRsS9 >= fYI0N17X; fYI0N17X++) {
                    *(*(PSnLDiZy +inFCus) + fYI0N17X) -= T70TO5;
                }
            }
            for (fYI0N17X = (590 - 589); fYI0N17X <= lQm0JcXGS - cmjzJogRsS9; fYI0N17X++) {
                T70TO5 = PSnLDiZy[(768 - 767)][fYI0N17X];
                for (inFCus = (871 - 870); inFCus <= lQm0JcXGS - cmjzJogRsS9; inFCus++) {
                    if (*(*(PSnLDiZy +inFCus) + fYI0N17X) < T70TO5)
                        T70TO5 = *(*(PSnLDiZy +inFCus) + fYI0N17X);
                }
                for (inFCus = (901 - 900); inFCus <= lQm0JcXGS - cmjzJogRsS9; inFCus++) {
                    *(*(PSnLDiZy +inFCus) + fYI0N17X) -= T70TO5;
                }
            }
            vfo0SdRcCM5i += PSnLDiZy[(64 - 62)][(932 - 930)];
            for (inFCus = (634 - 633); inFCus <= lQm0JcXGS - cmjzJogRsS9; inFCus++)
                for (fYI0N17X = (26 - 24); fYI0N17X <= lQm0JcXGS - cmjzJogRsS9 - (601 - 600); fYI0N17X++)
                    *(*(PSnLDiZy +inFCus) + fYI0N17X) = *(*(PSnLDiZy +inFCus) + fYI0N17X + (659 - 658));
            for (fYI0N17X = (796 - 795); fYI0N17X <= lQm0JcXGS - cmjzJogRsS9; fYI0N17X++)
                for (inFCus = (537 - 535); inFCus <= lQm0JcXGS - cmjzJogRsS9 - (633 - 632); inFCus++)
                    *(*(PSnLDiZy +inFCus) + fYI0N17X) = *(*(PSnLDiZy +inFCus + 1) + fYI0N17X);
        }
        cout << vfo0SdRcCM5i << endl;
    }
    return (845 - 845);
}

