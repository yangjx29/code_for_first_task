int main () {
    int OizH2cR [(284 - 184)] [(311 - 211)];
    int WFMRhJp5Na2 [(285 - 185)] [100];
    int ZvOZdkI6G;
    int YGIH7r2Yd35e;
    int f3TMN6Y;
    int sQ0mP2bSj;
    int riFPKfkr5;
    int LHTkz86;
    int DtPn1YcQ;
    int XQEkwWvMu;
    int K1Zr2aLH [100] [100] = {{(337 - 337), (443 - 443)}};
    int LymeWB1zI7E;
    cin >> ZvOZdkI6G >> f3TMN6Y;
    {
        riFPKfkr5 = 345 - 345;
        while (ZvOZdkI6G -(459 - 458) >= riFPKfkr5) {
            LHTkz86 = 0;
            while (LHTkz86 <= f3TMN6Y - (932 - 931)) {
                cin >> OizH2cR[riFPKfkr5][LHTkz86];
                LHTkz86++;
            }
            riFPKfkr5++;
        }
    }
    cin >> YGIH7r2Yd35e >> sQ0mP2bSj;
    {
        DtPn1YcQ = 0;
        while (DtPn1YcQ <= YGIH7r2Yd35e -(178 - 177)) {
            {
                XQEkwWvMu = 0;
                while (XQEkwWvMu <= sQ0mP2bSj - 1) {
                    cin >> WFMRhJp5Na2[DtPn1YcQ][XQEkwWvMu];
                    XQEkwWvMu++;
                }
            }
            DtPn1YcQ++;
        }
    }
    {
        riFPKfkr5 = 0;
        while (riFPKfkr5 <= ZvOZdkI6G -1) {
            {
                LHTkz86 = 0;
                while (LHTkz86 <= sQ0mP2bSj - 1) {
                    {
                        LymeWB1zI7E = 0;
                        while (LymeWB1zI7E <= f3TMN6Y - 1) {
                            K1Zr2aLH[riFPKfkr5][LHTkz86] = K1Zr2aLH[riFPKfkr5][LHTkz86] + OizH2cR[riFPKfkr5][LymeWB1zI7E] * WFMRhJp5Na2[LymeWB1zI7E][LHTkz86];
                            LymeWB1zI7E++;
                        }
                    }
                    if (LHTkz86 == sQ0mP2bSj - 1 && riFPKfkr5 != ZvOZdkI6G -1) {
                        cout << K1Zr2aLH[riFPKfkr5][LHTkz86] << endl;
                    }
                    else {
                        if (LHTkz86 != sQ0mP2bSj - 1) {
                            cout << K1Zr2aLH[riFPKfkr5][LHTkz86] << ' ';
                        }
                        else {
                            cout << K1Zr2aLH[riFPKfkr5][LHTkz86];
                        }
                    }
                    LHTkz86++;
                }
            }
            riFPKfkr5++;
        }
    }
    return 0;
}

