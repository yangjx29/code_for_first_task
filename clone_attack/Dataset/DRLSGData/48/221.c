int main () {
    int we75NcL;
    int rleZfdU8P7;
    int OlXTkNPE2fS;
    int x1rnJTPF0;
    int x5EU3zvNdIk;
    int ssLNflcFmBb;
    int iw6MVgP;
    int rgsmXbe [(89 - 80)] [(198 - 189)] = {(283 - 283)};
    int WJBFtlU2AD [(753 - 744)] [(359 - 350)];
    cin >> iw6MVgP >> ssLNflcFmBb;
    {
        if (0) {
            return 0;
        }
    }
    rleZfdU8P7 = (606 - 606);
    rgsmXbe[(435 - 431)][4] = iw6MVgP;
    do {
        rleZfdU8P7++;
        for (we75NcL = (961 - 961); we75NcL <= (622 - 614); we75NcL = we75NcL + 1) {
            for (OlXTkNPE2fS = (851 - 851); OlXTkNPE2fS <= (46 - 38); OlXTkNPE2fS++) {
                WJBFtlU2AD[we75NcL][OlXTkNPE2fS] = (985 - 985);
            }
        }
        {
            we75NcL = (719 - 714) - rleZfdU8P7;
            while (we75NcL <= (25 - 22) + rleZfdU8P7) {
                for (OlXTkNPE2fS = (76 - 71) - rleZfdU8P7; OlXTkNPE2fS <= 3 + rleZfdU8P7; OlXTkNPE2fS++) {
                    x1rnJTPF0 = we75NcL - (385 - 384);
                    while (x1rnJTPF0 <= we75NcL + (25 - 24)) {
                        {
                            x5EU3zvNdIk = OlXTkNPE2fS -(948 - 947);
                            while (x5EU3zvNdIk <= OlXTkNPE2fS +1) {
                                WJBFtlU2AD[x1rnJTPF0][x5EU3zvNdIk] = WJBFtlU2AD[x1rnJTPF0][x5EU3zvNdIk] + rgsmXbe[we75NcL][OlXTkNPE2fS];
                                x5EU3zvNdIk++;
                            }
                        }
                        x1rnJTPF0++;
                    }
                }
                we75NcL = we75NcL + 1;
            }
        }
        {
            we75NcL = (916 - 916);
            while (we75NcL <= (451 - 443)) {
                {
                    OlXTkNPE2fS = (605 - 605);
                    while (OlXTkNPE2fS <= 8) {
                        rgsmXbe[we75NcL][OlXTkNPE2fS] = rgsmXbe[we75NcL][OlXTkNPE2fS] + WJBFtlU2AD[we75NcL][OlXTkNPE2fS];
                        OlXTkNPE2fS = OlXTkNPE2fS +1;
                    }
                }
                we75NcL++;
            }
        }
    }
    while (rleZfdU8P7 < ssLNflcFmBb);
    for (we75NcL = (132 - 132); we75NcL <= 8; we75NcL++) {
        for (OlXTkNPE2fS = (301 - 301); OlXTkNPE2fS <= 8; OlXTkNPE2fS++) {
            cout << rgsmXbe[we75NcL][OlXTkNPE2fS];
            if (OlXTkNPE2fS < 8)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

