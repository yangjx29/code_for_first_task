int UYo04P [(570 - 470)] [(211 - 111)] [(392 - 292)] = {(595 - 595)};

int main () {
    int xkudWP, kRZkTrqs [100] = {(108 - 108)};
    int FwySmXqu4zPT, zIUzMjN4wvDg, RvM41d, mzJDtEm3;
    cin >> xkudWP;
    for (FwySmXqu4zPT = (836 - 836); xkudWP > FwySmXqu4zPT; FwySmXqu4zPT = FwySmXqu4zPT +1)
        for (zIUzMjN4wvDg = (704 - 704); zIUzMjN4wvDg < xkudWP; zIUzMjN4wvDg++)
            for (RvM41d = (269 - 269); xkudWP > RvM41d; RvM41d = RvM41d +1)
                cin >> UYo04P[FwySmXqu4zPT][zIUzMjN4wvDg][RvM41d];
    for (FwySmXqu4zPT = (44 - 44); xkudWP > FwySmXqu4zPT; FwySmXqu4zPT++) {
        for (zIUzMjN4wvDg = (831 - 830); zIUzMjN4wvDg <= xkudWP - (975 - 974); zIUzMjN4wvDg++) {
            for (RvM41d = (704 - 704); xkudWP - zIUzMjN4wvDg >= RvM41d; RvM41d = RvM41d +1) {
                int NRqKHYI7lp5 = UYo04P[FwySmXqu4zPT][RvM41d][(596 - 596)];
                for (mzJDtEm3 = (452 - 451); xkudWP - zIUzMjN4wvDg >= mzJDtEm3; mzJDtEm3 = mzJDtEm3 + 1)
                    if (UYo04P[FwySmXqu4zPT][RvM41d][mzJDtEm3] < NRqKHYI7lp5)
                        NRqKHYI7lp5 = UYo04P[FwySmXqu4zPT][RvM41d][mzJDtEm3];
                for (mzJDtEm3 = (557 - 557); mzJDtEm3 <= xkudWP - zIUzMjN4wvDg; mzJDtEm3 = mzJDtEm3 + 1)
                    UYo04P[FwySmXqu4zPT][RvM41d][mzJDtEm3] = UYo04P[FwySmXqu4zPT][RvM41d][mzJDtEm3] - NRqKHYI7lp5;
            }
            for (RvM41d = (149 - 149); RvM41d <= xkudWP - zIUzMjN4wvDg; RvM41d++) {
                int NRqKHYI7lp5 = UYo04P[FwySmXqu4zPT][(331 - 331)][RvM41d];
                for (mzJDtEm3 = (835 - 834); mzJDtEm3 <= xkudWP - zIUzMjN4wvDg; mzJDtEm3 = mzJDtEm3 + 1)
                    if (NRqKHYI7lp5 > UYo04P[FwySmXqu4zPT][mzJDtEm3][RvM41d])
                        NRqKHYI7lp5 = UYo04P[FwySmXqu4zPT][mzJDtEm3][RvM41d];
                for (mzJDtEm3 = (15 - 15); mzJDtEm3 <= xkudWP - zIUzMjN4wvDg; mzJDtEm3 = mzJDtEm3 + 1)
                    UYo04P[FwySmXqu4zPT][mzJDtEm3][RvM41d] = UYo04P[FwySmXqu4zPT][mzJDtEm3][RvM41d] - NRqKHYI7lp5;
            }
            kRZkTrqs[FwySmXqu4zPT] = kRZkTrqs[FwySmXqu4zPT] + UYo04P[FwySmXqu4zPT][(808 - 807)][(857 - 856)];
            for (RvM41d = (427 - 427); RvM41d <= xkudWP - zIUzMjN4wvDg; RvM41d++)
                for (mzJDtEm3 = 1; mzJDtEm3 < xkudWP - zIUzMjN4wvDg; mzJDtEm3 = mzJDtEm3 + 1)
                    UYo04P[FwySmXqu4zPT][RvM41d][mzJDtEm3] = UYo04P[FwySmXqu4zPT][RvM41d][mzJDtEm3 + 1];
            for (RvM41d = (695 - 695); RvM41d < xkudWP - zIUzMjN4wvDg; RvM41d++)
                for (mzJDtEm3 = 1; mzJDtEm3 < xkudWP - zIUzMjN4wvDg; mzJDtEm3++)
                    UYo04P[FwySmXqu4zPT][mzJDtEm3][RvM41d] = UYo04P[FwySmXqu4zPT][mzJDtEm3 + 1][RvM41d];
        }
        cout << kRZkTrqs[FwySmXqu4zPT] << endl;
    }
    return 0;
}

