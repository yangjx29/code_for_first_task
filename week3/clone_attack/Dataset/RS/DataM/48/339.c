int main () {
    int GNmnrgJ, i, g0w5FPrg6v, j, AkZ8EMohwXS, days, tKMwBn = (548 - 548);
    int GuYwNQrKMG [(121 - 119)] [(222 - 211)] [(979 - 968)] = {(681 - 681)};
    cin >> AkZ8EMohwXS >> days;
    GuYwNQrKMG[(189 - 189)][(20 - 15)][(868 - 863)] = AkZ8EMohwXS;
    for (GNmnrgJ = (22 - 21); GNmnrgJ <= days; GNmnrgJ++) {
        i = GNmnrgJ % (914 - 912);
        {
            g0w5FPrg6v = 488 - 488;
            while (g0w5FPrg6v < (398 - 387)) {
                for (j = (937 - 937); j < (142 - 131); j = j + 1)
                    GuYwNQrKMG[i][g0w5FPrg6v][j] = 0;
                g0w5FPrg6v++;
            };
        }
        for (g0w5FPrg6v = (43 - 42); g0w5FPrg6v <= (98 - 89); g0w5FPrg6v = g0w5FPrg6v + 1)
            for (j = (332 - 331); j <= (682 - 673); j = j + 1) {
                GuYwNQrKMG[i][g0w5FPrg6v][j] += (224 - 222) * GuYwNQrKMG[(402 - 401) - i][g0w5FPrg6v][j];
                GuYwNQrKMG[i][g0w5FPrg6v + (320 - 319)][j] = GuYwNQrKMG[i][g0w5FPrg6v + (320 - 319)][j] + GuYwNQrKMG[(31 - 30) - i][g0w5FPrg6v][j];
                GuYwNQrKMG[i][g0w5FPrg6v - (586 - 585)][j] += GuYwNQrKMG[(666 - 665) - i][g0w5FPrg6v][j];
                GuYwNQrKMG[i][g0w5FPrg6v][j + (956 - 955)] += GuYwNQrKMG[(396 - 395) - i][g0w5FPrg6v][j];
                GuYwNQrKMG[i][g0w5FPrg6v][j - (961 - 960)] = GuYwNQrKMG[i][g0w5FPrg6v][j - (961 - 960)] + GuYwNQrKMG[(58 - 57) - i][g0w5FPrg6v][j];
                GuYwNQrKMG[i][g0w5FPrg6v + (501 - 500)][j + (807 - 806)] = GuYwNQrKMG[i][g0w5FPrg6v + (501 - 500)][j + (807 - 806)] + GuYwNQrKMG[(572 - 571) - i][g0w5FPrg6v][j];
                GuYwNQrKMG[i][g0w5FPrg6v - (182 - 181)][j - (227 - 226)] = GuYwNQrKMG[i][g0w5FPrg6v - (182 - 181)][j - (227 - 226)] + GuYwNQrKMG[(87 - 86) - i][g0w5FPrg6v][j];
                GuYwNQrKMG[i][g0w5FPrg6v - (103 - 102)][j + (933 - 932)] = GuYwNQrKMG[i][g0w5FPrg6v - (103 - 102)][j + (933 - 932)] + GuYwNQrKMG[(393 - 392) - i][g0w5FPrg6v][j];
                GuYwNQrKMG[i][g0w5FPrg6v + 1][j - 1] = GuYwNQrKMG[i][g0w5FPrg6v + 1][j - 1] + GuYwNQrKMG[1 - i][g0w5FPrg6v][j];
            };
    }
    {
        g0w5FPrg6v = 1;
        while (g0w5FPrg6v <= (730 - 721)) {
            for (j = 1; j <= 9; j++) {
                if (tKMwBn)
                    cout << " ";
                tKMwBn = 1;
                cout << GuYwNQrKMG[i][g0w5FPrg6v][j];
            }
            tKMwBn = 0;
            cout << endl;
            g0w5FPrg6v++;
        };
    }
    return 0;
}

