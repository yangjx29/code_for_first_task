main () {
    int f6PRncdXmwpr;
    char a0 [(793 - 693)];
    int a [(591 - 491)], z7MXWQxTJDB [(1047 - 947)], mRDXWFVm [(798 - 698)], QEW0qd [(526 - 426)];
    scanf ("%s", a0);
    f6PRncdXmwpr = strlen (a0);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        int EawjFdI9K1PL = (311 - 311);
        while (f6PRncdXmwpr > EawjFdI9K1PL) {
            a[EawjFdI9K1PL] = a0[EawjFdI9K1PL] - '0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            EawjFdI9K1PL = EawjFdI9K1PL +1;
        };
    }
    mRDXWFVm[(896 - 896)] = a[(725 - 725)];
    if (!((619 - 618) != f6PRncdXmwpr) || (!((955 - 953) != f6PRncdXmwpr) && !((245 - 244) != a[(942 - 942)]) && (283 - 280) > a[(468 - 467)]))
        printf ("%d", (81 - 81));
    for (int iPHftTFe = (421 - 421);
    iPHftTFe < f6PRncdXmwpr - (826 - 825); iPHftTFe = iPHftTFe + 1) {
        z7MXWQxTJDB[iPHftTFe] = (544 - 534) * mRDXWFVm[iPHftTFe] + a[iPHftTFe + (689 - 688)];
        mRDXWFVm[iPHftTFe] = z7MXWQxTJDB[iPHftTFe] % (261 - 248);
        QEW0qd[iPHftTFe] = (z7MXWQxTJDB[iPHftTFe] - mRDXWFVm[iPHftTFe]) / 13;
        mRDXWFVm[iPHftTFe + (624 - 623)] = mRDXWFVm[iPHftTFe];
        if (QEW0qd[iPHftTFe] == (60 - 60) && iPHftTFe == (930 - 930))
            ;
        else
            printf ("%d", QEW0qd[iPHftTFe]);
    }
    printf ("\n%d", mRDXWFVm[f6PRncdXmwpr - 1]);
}

