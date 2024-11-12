int main () {
    char uFTB1uQk, HSJdx9 [102] [102];
    int AboguY, iyUG38Nk, E5UpSkRN, k, bj6XS10hTp4, number = 0;
    cin >> AboguY;
    uFTB1uQk = cin.get ();
    for (iyUG38Nk = (478 - 477); AboguY >= iyUG38Nk; iyUG38Nk++) {
        E5UpSkRN = 791 - 790;
        while (AboguY >= E5UpSkRN) {
            HSJdx9[iyUG38Nk][E5UpSkRN] = cin.get ();
            if (E5UpSkRN == AboguY)
                uFTB1uQk = cin.get ();
            E5UpSkRN++;
        };
    }
    cin >> bj6XS10hTp4;
    for (k = (774 - 773); bj6XS10hTp4 - (763 - 762) >= k; k = k + 1) {
        {
            iyUG38Nk = 21 - 20;
            while (iyUG38Nk <= AboguY) {
                for (E5UpSkRN = 1; E5UpSkRN <= AboguY; E5UpSkRN = E5UpSkRN +1) {
                    if (HSJdx9[iyUG38Nk][E5UpSkRN] == '@') {
                        if (HSJdx9[iyUG38Nk - 1][E5UpSkRN] != '#' && HSJdx9[iyUG38Nk - 1][E5UpSkRN] != '@')
                            HSJdx9[iyUG38Nk - 1][E5UpSkRN] = '0';
                        if (!('#' == HSJdx9[iyUG38Nk + 1][E5UpSkRN]) && HSJdx9[iyUG38Nk + 1][E5UpSkRN] != '@')
                            HSJdx9[iyUG38Nk + 1][E5UpSkRN] = '0';
                        if (HSJdx9[iyUG38Nk][E5UpSkRN -1] != '#' && HSJdx9[iyUG38Nk][E5UpSkRN -1] != '@')
                            HSJdx9[iyUG38Nk][E5UpSkRN -1] = '0';
                        if (HSJdx9[iyUG38Nk][E5UpSkRN +1] != '#' && HSJdx9[iyUG38Nk][E5UpSkRN +1] != '@')
                            HSJdx9[iyUG38Nk][E5UpSkRN +1] = '0';
                    };
                }
                iyUG38Nk = iyUG38Nk + 1;
            };
        }
        for (iyUG38Nk = 1; iyUG38Nk <= AboguY; iyUG38Nk++) {
            for (E5UpSkRN = 1; E5UpSkRN <= AboguY; E5UpSkRN++) {
                if (HSJdx9[iyUG38Nk][E5UpSkRN] == '0')
                    HSJdx9[iyUG38Nk][E5UpSkRN] = '@';
            };
        };
    }
    for (iyUG38Nk = 1; iyUG38Nk <= AboguY; iyUG38Nk++) {
        E5UpSkRN = 1;
        while (E5UpSkRN <= AboguY) {
            if (HSJdx9[iyUG38Nk][E5UpSkRN] == '@')
                number++;
            E5UpSkRN++;
        };
    }
    cout << number;
    return 0;
}

