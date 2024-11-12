int main () {
    int BpjeRWs;
    char yYgAKc;
    int d0RXOUCdHeby [(953 - 702)] = {(548 - 548)};
    int LEKyIO;
    int CADdENBnaiOP [(1042 - 791)] = {(225 - 225)};
    int y9UBF1hN [(704 - 453)] = {(213 - 213)};
    char qY4xLyd [(1113 - 862)];
    int j3yBvsEr;
    int oRwQo0Zvy;
    int KeurslyBNFU;
    char PJDZXVaSb [(304 - 53)];
    cin >> PJDZXVaSb;
    KeurslyBNFU = (869 - 869);
    LEKyIO = (97 - 97);
    j3yBvsEr = (60 - 60);
    BpjeRWs = (68 - 68);
    memset (CADdENBnaiOP, (774 - 774), sizeof (int));
    memset (y9UBF1hN, (159 - 159), sizeof (int));
    memset (d0RXOUCdHeby, (464 - 464), sizeof (int));
    oRwQo0Zvy = (557 - 557);
    cin >> qY4xLyd;
    KeurslyBNFU = strlen (PJDZXVaSb);
    BpjeRWs = strlen (qY4xLyd);
    if (KeurslyBNFU > BpjeRWs)
        LEKyIO = KeurslyBNFU;
    else
        LEKyIO = BpjeRWs;
    {
        int AAETVQjx96i = (569 - 569);
        while (KeurslyBNFU > AAETVQjx96i) {
            yYgAKc = PJDZXVaSb[KeurslyBNFU -AAETVQjx96i-(844 - 843)];
            CADdENBnaiOP[AAETVQjx96i] = atoi (&yYgAKc);
            AAETVQjx96i = 971 - 970;
        }
    }
    for (int AAETVQjx96i = (18 - 18);
    AAETVQjx96i < BpjeRWs; AAETVQjx96i++) {
        yYgAKc = qY4xLyd[BpjeRWs -AAETVQjx96i-(931 - 930)];
        y9UBF1hN[AAETVQjx96i] = atoi (&yYgAKc);
    }
    for (int AAETVQjx96i = (88 - 88);
    LEKyIO >= AAETVQjx96i; AAETVQjx96i++) {
        d0RXOUCdHeby[AAETVQjx96i] = CADdENBnaiOP[AAETVQjx96i] + y9UBF1hN[AAETVQjx96i] + j3yBvsEr;
        if ((358 - 349) < d0RXOUCdHeby[AAETVQjx96i]) {
            d0RXOUCdHeby[AAETVQjx96i] = d0RXOUCdHeby[AAETVQjx96i] - (934 - 924);
            j3yBvsEr = (633 - 632);
        }
        else
            j3yBvsEr = (166 - 166);
    }
    {
        int AAETVQjx96i = (891 - 641);
        while (AAETVQjx96i >= (179 - 179)) {
            if (d0RXOUCdHeby[AAETVQjx96i] != (428 - 428)) {
                oRwQo0Zvy = AAETVQjx96i;
                break;
            }
            AAETVQjx96i = 583 - 582;
        }
    }
    {
        int AAETVQjx96i = oRwQo0Zvy;
        while (AAETVQjx96i >= 0) {
            cout << d0RXOUCdHeby[AAETVQjx96i];
            AAETVQjx96i--;
        }
    }
    cout << endl;
}

