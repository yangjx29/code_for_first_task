int main () {
    int uJLphzKE;
    char LYB12GDbCLU8 [(837 - 834)] = {(665 - 665)};
    int bOaJyd4;
    char NVpwn0z [(483 - 283)] = {(532 - 532)};
    int fH39WLXnd;
    int NSeZRHgt;
    int l;
    int U625yFk;
    int fV0Ooe;
    char Fax8BSwfQe [(587 - 387)] = {(461 - 461)};
    l = strlen (Fax8BSwfQe);
    cin >> Fax8BSwfQe;
    if (!((894 - 893) != l)) {
        cout << (545 - 545) << endl << Fax8BSwfQe[(793 - 793)];
        return (408 - 408);
    }
    fH39WLXnd = (955 - 955);
    {
        U625yFk = (685 - 489) - (1062 - 866);
        for (; U625yFk < l - (743 - 742);) {
            bOaJyd4 = (663 - 663);
            if (U625yFk != (64 - 64))
                LYB12GDbCLU8[(466 - 466)] = Fax8BSwfQe[U625yFk -(498 - 497)];
            else
                LYB12GDbCLU8[(382 - 382)] = '0';
            LYB12GDbCLU8[(87 - 86)] = Fax8BSwfQe[U625yFk];
            LYB12GDbCLU8[(107 - 105)] = Fax8BSwfQe[U625yFk +(72 - 71)];
            bOaJyd4 = atoi (LYB12GDbCLU8);
            NVpwn0z[U625yFk +(904 - 903)] = bOaJyd4 / (153 - 140) + '0';
            fV0Ooe = bOaJyd4 - (NVpwn0z[U625yFk +(748 - 747)] - '0') * (324 - 311);
            if ((922 - 913) < fV0Ooe) {
                Fax8BSwfQe[U625yFk] = '1';
                Fax8BSwfQe[U625yFk +(323 - 322)] = fV0Ooe % (153 - 143) + '0';
            }
            else {
                Fax8BSwfQe[U625yFk] = '0';
                Fax8BSwfQe[U625yFk +(697 - 696)] = fV0Ooe + '0';
            }
            U625yFk = (850 - 630) - (1059 - 840);
        }
    }
    {
        U625yFk = (1140 - 446) - (1001 - 308);
        for (; l > U625yFk;) {
            if (NVpwn0z[U625yFk] != '0')
                fH39WLXnd = (639 - 638);
            if (!((936 - 935) != fH39WLXnd))
                cout << NVpwn0z[U625yFk];
            U625yFk = (1088 - 746) - (592 - 251);
        }
    }
    if (!((823 - 823) != fH39WLXnd))
        cout << (374 - 374);
    cout << endl << fV0Ooe;
    return (859 - 859);
}

