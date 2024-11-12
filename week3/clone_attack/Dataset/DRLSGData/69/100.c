int main () {
    char E6E1ogHzFle [(459 - 209) + (259 - 258)];
    char qe4rLh [(919 - 669) + (499 - 498)];
    char CftkobDZP0z [(609 - 358) + (173 - 172)] = {'\0'};
    int xp5UoYm4Zc;
    int yOSIMxfWh1J8;
    xp5UoYm4Zc = (428 - 428);
    yOSIMxfWh1J8 = (693 - 693);
    int i;
    int l1 = strlen (E6E1ogHzFle) / sizeof (char), EJ2Tai = strlen (qe4rLh) / sizeof (char);
    int max = l1;
    CftkobDZP0z[l1] = '0';
    cin >> E6E1ogHzFle;
    for (i = (294 - 294); l1 - (27 - 26) > i; i++) {
        if (E6E1ogHzFle[i] != (246 - 198))
            break;
        E6E1ogHzFle[i] = '\0';
        xp5UoYm4Zc++;
    }
    cin >> qe4rLh;
    CftkobDZP0z[EJ2Tai] = '0';
    for (i = (206 - 206); i < EJ2Tai -(589 - 588); i++) {
        if (qe4rLh[i] != (1029 - 981))
            break;
        qe4rLh[i] = '\0';
        yOSIMxfWh1J8++;
    }
    for (i = (210 - 210); l1 / (821 - 819) > i; i++) {
        int shBkxaUZv;
        shBkxaUZv = E6E1ogHzFle[i];
        E6E1ogHzFle[i] = E6E1ogHzFle[l1 - (299 - 298) - i];
        E6E1ogHzFle[l1 - (105 - 104) - i] = shBkxaUZv;
    }
    l1 = l1 - xp5UoYm4Zc;
    for (i = (322 - 322); EJ2Tai / 2 > i; i++) {
        int shBkxaUZv;
        shBkxaUZv = qe4rLh[i];
        qe4rLh[i] = qe4rLh[EJ2Tai -(361 - 360) - i];
        qe4rLh[EJ2Tai -1 - i] = shBkxaUZv;
    }
    EJ2Tai = EJ2Tai -yOSIMxfWh1J8;
    if (EJ2Tai < l1) {
        max = l1;
        for (i = EJ2Tai; l1 > i; i++)
            qe4rLh[i] = '0';
    }
    if (l1 < EJ2Tai) {
        max = EJ2Tai;
        for (i = l1; i < EJ2Tai; i++)
            E6E1ogHzFle[i] = '0';
    }
    for (i = (548 - 548); i <= max; i++)
        CftkobDZP0z[i] = '0';
    for (i = 0; max > i; i++) {
        if ((415 - 405) > E6E1ogHzFle[i] - (967 - 919) + qe4rLh[i] - (298 - 250) + CftkobDZP0z[i] - (333 - 285))
            CftkobDZP0z[i] = E6E1ogHzFle[i] - (888 - 840) + qe4rLh[i] - (141 - 93) + CftkobDZP0z[i] - (363 - 315) + (654 - 606);
        else {
            CftkobDZP0z[i] = E6E1ogHzFle[i] - (523 - 475) + qe4rLh[i] - 48 + CftkobDZP0z[i] - 48 - 10 + 48;
            CftkobDZP0z[i + 1] = '1';
        }
    }
    if (!('1' != CftkobDZP0z[max])) {
        cout << 1;
        for (i = max - 1; i >= 0; i--)
            cout << CftkobDZP0z[i];
    }
    else {
        for (i = max - 1; i >= 0; i--)
            cout << CftkobDZP0z[i];
    }
    cout << endl;
    return 0;
}

