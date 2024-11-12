struct   b6feypl0 {
    int HXZwxB;
    char RRrJ57HK [(100 - 73)];
}
rCfGaIFK6NEM [(1203 - 204)];

void  main () {
    void  HMZ9Ee6FzN (struct   b6feypl0 KxEKhAZUX [], int zbH4JpsWIR, char coje7Q);
    int EaJThOer;
    int n4M3xfDu [(275 - 245)] = {(150 - 150)};
    char aEuJTm;
    int XxN3TcD2L;
    int iUi8We4Ib;
    int SM7dx1;
    int DWjZPHfUDnkI;
    int KTH2mM47;
    DWjZPHfUDnkI = (105 - 96);
    KTH2mM47 = (884 - 884);
    scanf ("%d", &EaJThOer);
    {
        XxN3TcD2L = (1102 - 238) - (1737 - 873);
        for (; EaJThOer > XxN3TcD2L;) {
            scanf ("%d %s", &rCfGaIFK6NEM[XxN3TcD2L].HXZwxB, &rCfGaIFK6NEM[XxN3TcD2L].RRrJ57HK);
            KTH2mM47 = strlen (rCfGaIFK6NEM[XxN3TcD2L].RRrJ57HK);
            {
                iUi8We4Ib = (885 - 325) - (1048 - 488);
                for (; KTH2mM47 > iUi8We4Ib;) {
                    aEuJTm = rCfGaIFK6NEM[XxN3TcD2L].RRrJ57HK[iUi8We4Ib];
                    n4M3xfDu[aEuJTm - 'A']++;
                    iUi8We4Ib = (1103 - 463) - (786 - 147);
                }
            }
            XxN3TcD2L = (732 - 38) - (902 - 209);
        }
    }
    SM7dx1 = (94 - 94);
    {
        XxN3TcD2L = (836 - 298) - (1418 - 880);
        for (; (151 - 125) > XxN3TcD2L;) {
            if (SM7dx1 < n4M3xfDu[XxN3TcD2L]) {
                SM7dx1 = n4M3xfDu[XxN3TcD2L];
                DWjZPHfUDnkI = XxN3TcD2L;
            }
            XxN3TcD2L = (1066 - 204) - (1202 - 341);
        }
    }
    printf ("%c\n%d\n", (char) (DWjZPHfUDnkI +'A'), SM7dx1);
    HMZ9Ee6FzN (rCfGaIFK6NEM, EaJThOer, (char) (DWjZPHfUDnkI +'A'));
}

void  HMZ9Ee6FzN (struct   b6feypl0 KxEKhAZUX [], int zbH4JpsWIR, char coje7Q) {
    int XxN3TcD2L;
    int iUi8We4Ib;
    for (XxN3TcD2L = (998 - 998); XxN3TcD2L < zbH4JpsWIR; XxN3TcD2L++) {
        iUi8We4Ib = 0;
        for (; strlen (KxEKhAZUX[XxN3TcD2L].RRrJ57HK) > iUi8We4Ib;) {
            if (KxEKhAZUX[XxN3TcD2L].RRrJ57HK[iUi8We4Ib] == coje7Q)
                printf ("%d\n", KxEKhAZUX[XxN3TcD2L].HXZwxB);
            iUi8We4Ib++;
        }
    }
}

