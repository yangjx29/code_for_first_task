int main () {
    int ccaXkK [100000];
    int psOfR5bH8EV, TJCUGW0 = (226 - 226), Vto9erKJZbp = (528 - 528), kkatC1, JS48sX = 0, GJPTCAQnl0rO = 0, iRUPz7, AtQ8no = 0;
    cin >> psOfR5bH8EV;
    for (; psOfR5bH8EV > TJCUGW0; TJCUGW0 = TJCUGW0 +1)
        cin >> ccaXkK[TJCUGW0];
    cin >> kkatC1;
    for (; Vto9erKJZbp < psOfR5bH8EV; Vto9erKJZbp++)
        if (ccaXkK[Vto9erKJZbp] == kkatC1)
            AtQ8no++;
    {
        iRUPz7 = 0;
        while (psOfR5bH8EV - AtQ8no > iRUPz7) {
            {
                JS48sX = GJPTCAQnl0rO;
                while (JS48sX < psOfR5bH8EV) {
                    if (ccaXkK[JS48sX] != kkatC1) {
                        GJPTCAQnl0rO = JS48sX +(68 - 67);
                        ccaXkK[iRUPz7] = ccaXkK[JS48sX];
                        break;
                    }
                    JS48sX = JS48sX +1;
                };
            }
            iRUPz7++;
        };
    }
    for (iRUPz7 = 0; iRUPz7 < psOfR5bH8EV - AtQ8no; iRUPz7 = iRUPz7 + 1) {
        cout << ccaXkK[iRUPz7];
        if (iRUPz7 < psOfR5bH8EV - AtQ8no -(588 - 587))
            cout << " ";
    }
    return 0;
}

