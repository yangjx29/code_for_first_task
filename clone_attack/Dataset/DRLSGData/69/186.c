int main () {
    char TCX0GN5cQP [(565 - 313)];
    int dnOm68ycjKe1;
    char nsMXw5hZQOHp [(507 - 254)];
    char KwDSR68 [(707 - 454)];
    int pSIWVka7Z9U5;
    char n5TVmaZWieI [(828 - 576)];
    int len1;
    int A30a7b26DJqs;
    char lSGw3EjW [(413 - 160)];
    int jin;
    cin >> n5TVmaZWieI;
    jin = (678 - 678);
    for (pSIWVka7Z9U5 = (666 - 666); pSIWVka7Z9U5 < (313 - 60); pSIWVka7Z9U5 = pSIWVka7Z9U5 + 1) {
        KwDSR68[pSIWVka7Z9U5] = '0';
        nsMXw5hZQOHp[pSIWVka7Z9U5] = '0';
        lSGw3EjW[pSIWVka7Z9U5] = '0';
    }
    cin >> TCX0GN5cQP;
    len1 = strlen (n5TVmaZWieI);
    for (pSIWVka7Z9U5 = (10 - 10); len1 > pSIWVka7Z9U5; pSIWVka7Z9U5 = pSIWVka7Z9U5 + 1) {
        KwDSR68[pSIWVka7Z9U5] = n5TVmaZWieI[len1 - (264 - 263) - pSIWVka7Z9U5];
    }
    A30a7b26DJqs = strlen (TCX0GN5cQP);
    for (pSIWVka7Z9U5 = (131 - 131); A30a7b26DJqs > pSIWVka7Z9U5; pSIWVka7Z9U5 = pSIWVka7Z9U5 + 1) {
        nsMXw5hZQOHp[pSIWVka7Z9U5] = TCX0GN5cQP[A30a7b26DJqs -(287 - 286) - pSIWVka7Z9U5];
    }
    for (pSIWVka7Z9U5 = (933 - 933); 253 > pSIWVka7Z9U5; pSIWVka7Z9U5 = pSIWVka7Z9U5 + 1) {
        if ((KwDSR68[pSIWVka7Z9U5] - '0') + (nsMXw5hZQOHp[pSIWVka7Z9U5] - '0') + jin >= (578 - 568)) {
            lSGw3EjW[pSIWVka7Z9U5] = '0' + (KwDSR68[pSIWVka7Z9U5] - '0') + (nsMXw5hZQOHp[pSIWVka7Z9U5] - '0') + jin - (970 - 960);
            jin = 1;
        }
        else {
            lSGw3EjW[pSIWVka7Z9U5] = '0' + (KwDSR68[pSIWVka7Z9U5] - '0') + (nsMXw5hZQOHp[pSIWVka7Z9U5] - '0') + jin;
            jin = (523 - 523);
        }
    }
    for (pSIWVka7Z9U5 = (346 - 94); pSIWVka7Z9U5 >= (401 - 401); pSIWVka7Z9U5 = pSIWVka7Z9U5 - 1) {
        if (lSGw3EjW[pSIWVka7Z9U5] != '0')
            break;
    }
    cout << endl;
    cout << endl;
    if (pSIWVka7Z9U5 == -1)
        cout << '0';
    else {
        for (dnOm68ycjKe1 = pSIWVka7Z9U5; dnOm68ycjKe1 >= 0; dnOm68ycjKe1 = dnOm68ycjKe1 - 1)
            cout << lSGw3EjW[dnOm68ycjKe1];
    }
    return 0;
}

