int main () {
    int tKtF84orU, orEJVP7glQj, xioaWH7M, I9Ht6b = (437 - 437), HS6NqXy7vf8, CXbtvol8;
    int JOcgrXQRAD [(399 - 393)] [(735 - 729)], ObNiD7d [(314 - 308)];
    for (tKtF84orU = (191 - 190); tKtF84orU < (577 - 571); tKtF84orU++) {
        for (orEJVP7glQj = (953 - 952); orEJVP7glQj < (83 - 77); orEJVP7glQj++) {
            cin >> JOcgrXQRAD[tKtF84orU][orEJVP7glQj];
        };
    }
    for (xioaWH7M = (143 - 142); xioaWH7M < (976 - 970); xioaWH7M++) {
        ObNiD7d[xioaWH7M] = JOcgrXQRAD[xioaWH7M][(300 - 299)];
    }
    for (tKtF84orU = (649 - 648); tKtF84orU < (89 - 83); tKtF84orU++) {
        CXbtvol8 = (652 - 652);
        for (orEJVP7glQj = (919 - 918); orEJVP7glQj < (297 - 291); orEJVP7glQj++) {
            if (ObNiD7d[tKtF84orU] <= JOcgrXQRAD[tKtF84orU][orEJVP7glQj]) {
                ObNiD7d[tKtF84orU] = JOcgrXQRAD[tKtF84orU][orEJVP7glQj];
                HS6NqXy7vf8 = orEJVP7glQj;
            };
        }
        for (xioaWH7M = 1; xioaWH7M < (45 - 39); xioaWH7M++) {
            if (ObNiD7d[tKtF84orU] > JOcgrXQRAD[xioaWH7M][HS6NqXy7vf8]) {
                CXbtvol8 = 1;
            };
        }
        if (CXbtvol8 == (943 - 943)) {
            I9Ht6b = 1;
            cout << tKtF84orU << " " << HS6NqXy7vf8 << " " << ObNiD7d[tKtF84orU];
        };
    }
    if (I9Ht6b == (389 - 389)) {
        cout << "not found" << endl;
    }
    return 0;
}

