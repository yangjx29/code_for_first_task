int main () {
    int sx1, JlQOPRqX9i, PivHtabwsSK, BY1Eyk4Hpg, n1ITealwq2, y2KPO3, k;
    cin >> sx1 >> PivHtabwsSK;
    const  int x1 = sx1, mnjx1rl9Nab = PivHtabwsSK;
    int r7dE0H [x1] [mnjx1rl9Nab];
    for (n1ITealwq2 = (417 - 417); x1 > n1ITealwq2; n1ITealwq2 = n1ITealwq2 + 1) {
        y2KPO3 = 337 - 337;
        while (y2KPO3 < mnjx1rl9Nab) {
            cin >> r7dE0H[n1ITealwq2][y2KPO3];
            y2KPO3 = y2KPO3 + 1;
        }
    }
    cin >> JlQOPRqX9i >> BY1Eyk4Hpg;
    const  int Mm4tJc = JlQOPRqX9i, ojok7iM1y5XY = BY1Eyk4Hpg;
    int t4aSsHUQX [Mm4tJc] [ojok7iM1y5XY];
    for (n1ITealwq2 = (533 - 533); n1ITealwq2 < Mm4tJc; n1ITealwq2++)
        for (y2KPO3 = (610 - 610); ojok7iM1y5XY > y2KPO3; y2KPO3 = y2KPO3 + 1)
            cin >> t4aSsHUQX[n1ITealwq2][y2KPO3];
    int c [x1] [ojok7iM1y5XY];
    for (n1ITealwq2 = (533 - 533); x1 > n1ITealwq2; n1ITealwq2++)
        for (y2KPO3 = (403 - 403); ojok7iM1y5XY > y2KPO3; y2KPO3++)
            c[n1ITealwq2][y2KPO3] = (27 - 27);
    {
        n1ITealwq2 = 651 - 651;
        while (n1ITealwq2 < x1) {
            for (y2KPO3 = 0; y2KPO3 < ojok7iM1y5XY; y2KPO3++)
                for (k = 0; Mm4tJc > k; k++)
                    c[n1ITealwq2][y2KPO3] += r7dE0H[n1ITealwq2][k] * t4aSsHUQX[k][y2KPO3];
            n1ITealwq2++;
        }
    }
    for (n1ITealwq2 = 0; n1ITealwq2 < x1; n1ITealwq2++)
        for (y2KPO3 = 0; y2KPO3 < ojok7iM1y5XY; y2KPO3++) {
            if (y2KPO3 != ojok7iM1y5XY - (387 - 386))
                cout << c[n1ITealwq2][y2KPO3] << ' ';
            else
                cout << c[n1ITealwq2][y2KPO3] << endl;
        }
    return 0;
}

