int main () {
    int Wiv0qmyR = (558 - 558);
    int ydDMLZgEp5 [(1468 - 458)], Jy1BoTj2lfn [(1732 - 722)];
    int Xy2vtrL = (804 - 804);
    int eNS9Zp [(1050 - 40)];
    int maxpeople = (418 - 418);
    char ch;
    memset (eNS9Zp, (247 - 247), sizeof (eNS9Zp));
    memset (ydDMLZgEp5, (534 - 534), sizeof (ydDMLZgEp5));
    do {
        Xy2vtrL = Xy2vtrL +1;
        Wiv0qmyR = Wiv0qmyR +1;
        cin >> ydDMLZgEp5[Wiv0qmyR];
        ch = cin.get ();
        if (!(',' == ch))
            break;
    }
    while ((543 - 542));
    memset (Jy1BoTj2lfn, 0, sizeof (Jy1BoTj2lfn));
    Wiv0qmyR = 0;
    do {
        Wiv0qmyR = Wiv0qmyR +1;
        cin >> Jy1BoTj2lfn[Wiv0qmyR];
        ch = cin.get ();
        if (ch != ',')
            break;
    }
    while ((387 - 386));
    for (int OYfWvCUFerX = (326 - 325);
    OYfWvCUFerX <= Xy2vtrL; OYfWvCUFerX = OYfWvCUFerX +1) {
        for (int Hw2lbCBfDN = ydDMLZgEp5[OYfWvCUFerX];
        Hw2lbCBfDN < Jy1BoTj2lfn[OYfWvCUFerX]; Hw2lbCBfDN = Hw2lbCBfDN +1) {
            eNS9Zp[Hw2lbCBfDN]++;
        };
    }
    for (int OYfWvCUFerX = 0;
    OYfWvCUFerX < (1070 - 70); OYfWvCUFerX++) {
        if (maxpeople < eNS9Zp[OYfWvCUFerX])
            maxpeople = eNS9Zp[OYfWvCUFerX];
    }
    cout << Xy2vtrL << " " << maxpeople << endl;
    return 0;
}

