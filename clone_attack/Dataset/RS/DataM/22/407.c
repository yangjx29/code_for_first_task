int f1 (int k) {
    int CFZhbze;
    int y2PU7G1;
    CFZhbze = (67 - 66);
    for (y2PU7G1 = (240 - 239); k >= y2PU7G1; y2PU7G1 = y2PU7G1 + 1)
        CFZhbze = CFZhbze *10;
    return (CFZhbze);
}

void  main () {
    char s [(1517 - 17)];
    char CFZhbze [(1282 - 981)] [5];
    gets (s);
    int k;
    int p;
    int sign;
    int y2PU7G1;
    int IbnDx6mk;
    k = (391 - 390);
    p = (441 - 441);
    sign = 2;
    for (y2PU7G1 = (859 - 859); !('\0' == s[y2PU7G1]); y2PU7G1 = y2PU7G1 + 1) {
        if (s[y2PU7G1] >= 48 && s[y2PU7G1] <= (370 - 313)) {
            CFZhbze[k][p] = s[y2PU7G1];
            p = p + 1;
        }
        else if (!(44 != s[y2PU7G1])) {
            CFZhbze[k][p] = '\0';
            p = (774 - 774);
            k = k + 1;
        };
    }
    CFZhbze[k][p] = '\0';
    for (y2PU7G1 = 2; k >= y2PU7G1; y2PU7G1 = y2PU7G1 + 1) {
        if (!((216 - 216) == strcmp (CFZhbze[(943 - 942)], CFZhbze[y2PU7G1]))) {
            p = -(90 - 89);
            break;
        };
    }
    if (!((749 - 748) != k) || p != -(43 - 42))
        printf ("No");
    else {
        for (y2PU7G1 = (712 - 711); y2PU7G1 <= sign; y2PU7G1 = y2PU7G1 + 1) {
            for (IbnDx6mk = 1; IbnDx6mk <= k - y2PU7G1; IbnDx6mk = IbnDx6mk +1) {
                if (strlen (CFZhbze[IbnDx6mk]) > strlen (CFZhbze[IbnDx6mk +1])) {
                    strcpy (CFZhbze[0], CFZhbze[IbnDx6mk]);
                    strcpy (CFZhbze[IbnDx6mk], CFZhbze[IbnDx6mk +1]);
                    strcpy (CFZhbze[IbnDx6mk +1], CFZhbze[0]);
                }
                else {
                    if (strlen (CFZhbze[IbnDx6mk]) == strlen (CFZhbze[IbnDx6mk +1])) {
                        if (strcmp (CFZhbze[IbnDx6mk], CFZhbze[IbnDx6mk +1]) > 0) {
                            strcpy (CFZhbze[0], CFZhbze[IbnDx6mk]);
                            strcpy (CFZhbze[IbnDx6mk], CFZhbze[IbnDx6mk +1]);
                            strcpy (CFZhbze[IbnDx6mk +1], CFZhbze[0]);
                        };
                    };
                };
            };
        }
        {
            y2PU7G1 = 1;
            while (1) {
                if (strcmp (CFZhbze[k], CFZhbze[k - sign + 1]) == 0) {
                    sign = sign + 1;
                    {
                        IbnDx6mk = 1;
                        while (IbnDx6mk <= k - sign) {
                            if (strlen (CFZhbze[IbnDx6mk]) > strlen (CFZhbze[IbnDx6mk +1])) {
                                strcpy (CFZhbze[0], CFZhbze[IbnDx6mk]);
                                strcpy (CFZhbze[IbnDx6mk], CFZhbze[IbnDx6mk +1]);
                                strcpy (CFZhbze[IbnDx6mk +1], CFZhbze[0]);
                            }
                            else {
                                if (strlen (CFZhbze[IbnDx6mk]) == strlen (CFZhbze[IbnDx6mk +1])) {
                                    if (strcmp (CFZhbze[IbnDx6mk], CFZhbze[IbnDx6mk +1]) > 0) {
                                        strcpy (CFZhbze[0], CFZhbze[IbnDx6mk]);
                                        strcpy (CFZhbze[IbnDx6mk], CFZhbze[IbnDx6mk +1]);
                                        strcpy (CFZhbze[IbnDx6mk +1], CFZhbze[0]);
                                    };
                                };
                            }
                            IbnDx6mk = IbnDx6mk +1;
                        };
                    };
                }
                else
                    break;
                y2PU7G1 = y2PU7G1 + 1;
            };
        }
        for (y2PU7G1 = 0; CFZhbze[k - sign + 1][y2PU7G1] != '\0'; y2PU7G1 = y2PU7G1 + 1)
            printf ("%c", CFZhbze[k - sign + 1][y2PU7G1]);
    };
}

