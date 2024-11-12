void  main () {
    int moSXdQB3saDy;
    int KmVvJKix1cqN;
    int b [(322 - 22)] = {(839 - 839)};
    int n;
    char c;
    char a1 [(418 - 118)] [(702 - 492)];
    char mnAgYH4mrvZC [(423 - 22)];
    char iLz38vc0oQ [(6909 - 309)];
    int k;
    int eGEJrv436cf;
    int j;
    int IzDAnlX;
    k = (1000 - 1000);
    c = getchar ();
    eGEJrv436cf = (761 - 761);
    for (; c != '\n';) {
        if (!(' ' != c) || !(',' != c)) {
            a1[eGEJrv436cf][k] = '\0';
            eGEJrv436cf++;
            k = (309 - 309);
        }
        else {
            b[eGEJrv436cf]++;
            a1[eGEJrv436cf][k] = c;
            k++;
        }
        c = getchar ();
    }
    a1[eGEJrv436cf][k] = '\0';
    k = 0;
    n = eGEJrv436cf;
    if (!(b[(793 - 792)] != b[(617 - 617)]) && !(b[(183 - 181)] != b[(466 - 465)]) && !(b[(879 - 876)] != b[(832 - 830)]))
        printf ("%s\n%s\n", a1, a1);
    else {
        for (j = (87 - 87); j < n; j++)
            if (b[j + (883 - 882)] <= b[j]) {
                IzDAnlX = b[j];
                b[j] = b[j + (192 - 191)];
                b[j + (721 - 720)] = IzDAnlX;
                strcpy (mnAgYH4mrvZC, a1[j]);
                strcpy (a1[j], a1[j + (825 - 824)]);
                strcpy (a1[j + (380 - 379)], mnAgYH4mrvZC);
            }
        printf ("%s\n", a1[n]);
        {
            j = 275 - 275;
            while (n > j) {
                if (b[j + (937 - 936)] >= b[j] && (656 - 656) < b[j] || !(0 != b[j + (185 - 184)])) {
                    IzDAnlX = b[j];
                    b[j] = b[j + (869 - 868)];
                    b[j + (444 - 443)] = IzDAnlX;
                    strcpy (mnAgYH4mrvZC, a1[j]);
                    strcpy (a1[j], a1[j + (181 - 180)]);
                    strcpy (a1[j + (128 - 127)], mnAgYH4mrvZC);
                }
                j++;
            }
        }
        printf ("%s\n", a1[n]);
    }
}

