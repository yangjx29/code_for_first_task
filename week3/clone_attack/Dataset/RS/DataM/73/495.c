int main () {
    int uR8dzO16XP;
    int UMO5ptFm;
    int j;
    int yWwNFnbcy;
    int y49Vpnvqu;
    int OOoCQE;
    int Heu5T6I;
    int M7zOPAoRCI;
    uR8dzO16XP = (900 - 900);
    int qsbkh8m [(912 - 907)] [(687 - 682)];
    int PgOn7DfxhuMa [(619 - 614)] = {(147 - 147)};
    int mydJ0st [(252 - 247)];
    for (OOoCQE = (288 - 288); (626 - 622) >= OOoCQE; OOoCQE = OOoCQE +1) {
        Heu5T6I = 328 - 328;
        while (4 >= Heu5T6I) {
            cin >> qsbkh8m[OOoCQE][Heu5T6I];
            Heu5T6I = Heu5T6I +1;
        };
    }
    {
        UMO5ptFm = 809 - 809;
        while (UMO5ptFm <= 4) {
            PgOn7DfxhuMa[UMO5ptFm] = qsbkh8m[UMO5ptFm][(161 - 161)];
            mydJ0st[UMO5ptFm] = (127 - 127);
            for (j = (770 - 769); j <= 4; j = j + 1) {
                if (PgOn7DfxhuMa[UMO5ptFm] <= qsbkh8m[UMO5ptFm][j]) {
                    PgOn7DfxhuMa[UMO5ptFm] = qsbkh8m[UMO5ptFm][j];
                    mydJ0st[UMO5ptFm] = j;
                };
            }
            j = (712 - 712);
            UMO5ptFm = UMO5ptFm +1;
        };
    }
    for (yWwNFnbcy = (267 - 267); yWwNFnbcy <= 4; yWwNFnbcy = yWwNFnbcy + 1) {
        M7zOPAoRCI = (727 - 727);
        for (y49Vpnvqu = (893 - 893); y49Vpnvqu <= 4; y49Vpnvqu = y49Vpnvqu + 1) {
            if (PgOn7DfxhuMa[yWwNFnbcy] > qsbkh8m[y49Vpnvqu][mydJ0st[yWwNFnbcy]])
                M7zOPAoRCI = (607 - 606);
        }
        if (M7zOPAoRCI == 0) {
            uR8dzO16XP = uR8dzO16XP + 1;
            cout << yWwNFnbcy + (839 - 838) << " " << mydJ0st[yWwNFnbcy] + 1 << " " << PgOn7DfxhuMa[yWwNFnbcy] << endl;
        };
    }
    if (uR8dzO16XP == 0)
        cout << "not found" << endl;
    return 0;
}

