int main () {
    double  r1lPEA, ZXyYh0 = (581 - 581);
    int bGNFBfC;
    int Rci9ABFeMp [bGNFBfC];
    int eJgOC4Xsi;
    int A7yFx4c3Nqv = Rci9ABFeMp[(893 - 893)], ryQPC5 = Rci9ABFeMp[0];
    cin >> bGNFBfC;
    for (eJgOC4Xsi = 0; eJgOC4Xsi < bGNFBfC; eJgOC4Xsi = eJgOC4Xsi + 1) {
        cin >> Rci9ABFeMp[eJgOC4Xsi];
        ZXyYh0 = ZXyYh0 +Rci9ABFeMp[eJgOC4Xsi];
    }
    r1lPEA = ZXyYh0 / bGNFBfC;
    for (eJgOC4Xsi = 0; eJgOC4Xsi < bGNFBfC; eJgOC4Xsi = eJgOC4Xsi + 1) {
        if (A7yFx4c3Nqv < Rci9ABFeMp[eJgOC4Xsi])
            A7yFx4c3Nqv = Rci9ABFeMp[eJgOC4Xsi];
    }
    for (eJgOC4Xsi = 0; eJgOC4Xsi < bGNFBfC; eJgOC4Xsi++) {
        if (ryQPC5 > Rci9ABFeMp[eJgOC4Xsi])
            ryQPC5 = Rci9ABFeMp[eJgOC4Xsi];
    }
    if ((A7yFx4c3Nqv -r1lPEA) == (r1lPEA - ryQPC5))
        cout << ryQPC5 << ',' << A7yFx4c3Nqv;
    if ((A7yFx4c3Nqv -r1lPEA) > (r1lPEA - ryQPC5))
        cout << A7yFx4c3Nqv;
    if ((A7yFx4c3Nqv -r1lPEA) < (r1lPEA - ryQPC5))
        cout << ryQPC5;
    return 0;
}

