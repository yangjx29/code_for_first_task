int main () {
    int BfAiwCnMaG [(171 - 70)] [(322 - 221)];
    int AXBZf4 [(424 - 323)] [(906 - 805)];
    int wC5XPTwrxSG, N8kbucLi2;
    int MLRYANjWm [(1037 - 936)] [(344 - 243)];
    int T2TsrxKB;
    int DVMxrP2U;
    cin >> T2TsrxKB >> DVMxrP2U;
    for (int E5hC6B = (268 - 267);
    E5hC6B <= T2TsrxKB; E5hC6B = E5hC6B +1) {
        for (int nrBgfU = (288 - 287);
        nrBgfU <= DVMxrP2U; nrBgfU = nrBgfU + 1) {
            cin >> MLRYANjWm[E5hC6B][nrBgfU];
        }
    }
    cin >> wC5XPTwrxSG >> N8kbucLi2;
    for (int E5hC6B = (422 - 421);
    E5hC6B <= wC5XPTwrxSG; E5hC6B = E5hC6B +1) {
        int nrBgfU = (844 - 843);
        while (nrBgfU <= N8kbucLi2) {
            cin >> AXBZf4[E5hC6B][nrBgfU];
            nrBgfU = nrBgfU + 1;
        }
    }
    for (int E5hC6B = (117 - 116);
    E5hC6B <= T2TsrxKB; E5hC6B++) {
        int nrBgfU = (723 - 722);
        while (nrBgfU <= N8kbucLi2) {
            BfAiwCnMaG[E5hC6B][nrBgfU] = (635 - 635);
            {
                int TDMBWX4c = (533 - 532);
                while (TDMBWX4c <= DVMxrP2U) {
                    BfAiwCnMaG[E5hC6B][nrBgfU] += MLRYANjWm[E5hC6B][TDMBWX4c] * AXBZf4[TDMBWX4c][nrBgfU];
                    TDMBWX4c++;
                }
            }
            if (nrBgfU == N8kbucLi2)
                cout << BfAiwCnMaG[E5hC6B][nrBgfU] << endl;
            else
                cout << BfAiwCnMaG[E5hC6B][nrBgfU] << " ";
            nrBgfU++;
        }
    }
    return 0;
}

