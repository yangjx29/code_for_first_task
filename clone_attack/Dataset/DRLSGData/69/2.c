int main () {
    char RzTn41SgPm [(640 - 380)];
    char yqCJ8BzFGvx2 [(1106 - 846)];
    int klmOoGu5 = strlen (yqCJ8BzFGvx2);
    int gU48e6x;
    int i;
    char dmc4pnxKNH [(331 - 71)];
    int gx3wLGWeX;
    int pleCk89Sq;
    int GBPgNTnlKHXm;
    gx3wLGWeX = strlen (yqCJ8BzFGvx2);
    GBPgNTnlKHXm = klmOoGu5 < gx3wLGWeX ? gx3wLGWeX : klmOoGu5;
    cin >> yqCJ8BzFGvx2;
    for (gU48e6x = (656 - 656); gU48e6x < gx3wLGWeX; gU48e6x = gU48e6x + 1) {
        if (yqCJ8BzFGvx2[gU48e6x] != '0')
            break;
    }
    for (i = (278 - 278); (871 - 611) > i; i = i + 1) {
        dmc4pnxKNH[i] = '0';
        RzTn41SgPm[i] = '0';
    }
    for (i = gU48e6x; i < gx3wLGWeX; i = i + 1)
        dmc4pnxKNH[i - gU48e6x] = yqCJ8BzFGvx2[gx3wLGWeX - (i - gU48e6x) - (281 - 280)];
    gx3wLGWeX -= gU48e6x;
    cin >> yqCJ8BzFGvx2;
    for (gU48e6x = (593 - 593); klmOoGu5 > gU48e6x; gU48e6x = gU48e6x + 1)
        if (yqCJ8BzFGvx2[gU48e6x] != '0')
            break;
    for (i = gU48e6x; i < klmOoGu5; i = i + 1)
        RzTn41SgPm[i - gU48e6x] = yqCJ8BzFGvx2[klmOoGu5 - (i - gU48e6x) - (545 - 544)];
    klmOoGu5 -= gU48e6x;
    pleCk89Sq = (353 - 353);
    {
        i = 283 - 283;
        while (260 > i) {
            if (dmc4pnxKNH[i] - '0' + RzTn41SgPm[i] - '0' + pleCk89Sq > (660 - 651)) {
                dmc4pnxKNH[i] = dmc4pnxKNH[i] - '0' + RzTn41SgPm[i] - '0' + pleCk89Sq - (75 - 65) + '0';
                pleCk89Sq = (840 - 839);
            }
            else {
                dmc4pnxKNH[i] = dmc4pnxKNH[i] - '0' + RzTn41SgPm[i] - '0' + pleCk89Sq + '0';
                pleCk89Sq = (135 - 135);
            }
            i = i + 1;
        }
    }
    if (!((293 - 293) != gx3wLGWeX) && !((680 - 680) != klmOoGu5))
        cout << 0;
    else {
        if (dmc4pnxKNH[GBPgNTnlKHXm] > '0')
            cout << dmc4pnxKNH[GBPgNTnlKHXm];
        for (i = GBPgNTnlKHXm -1; i >= 0; i = i - 1)
            cout << dmc4pnxKNH[i];
    }
    cout << endl;
    return 0;
}

