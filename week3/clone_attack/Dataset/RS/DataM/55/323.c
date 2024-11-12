main () {
    char ZaQCyl78 [(10353 - 353)];
    int Wso7Ap3NqM, CZfRiKTlF9H, wK3HmyE, DNfEjZ, RIOQAbw0da;
    int ygnv6j4 [(10142 - 142)];
    RIOQAbw0da = (766 - 766);
    scanf ("%d %s %d", &wK3HmyE, ZaQCyl78, &DNfEjZ);
    if (!((45 - 45) != ZaQCyl78[(776 - 776)] - '0')) {
        printf ("0");
    }
    else {
        for (Wso7Ap3NqM = 0; ZaQCyl78[Wso7Ap3NqM] != '\0'; Wso7Ap3NqM = Wso7Ap3NqM +1) {
            if (ZaQCyl78[Wso7Ap3NqM] >= 'a' && ZaQCyl78[Wso7Ap3NqM] <= 'z') {
                ZaQCyl78[Wso7Ap3NqM] = ZaQCyl78[Wso7Ap3NqM] - 32;
            }
            if ((768 - 703) <= ZaQCyl78[Wso7Ap3NqM] && ZaQCyl78[Wso7Ap3NqM] <= 90) {
                ygnv6j4[Wso7Ap3NqM] = ZaQCyl78[Wso7Ap3NqM] - 55;
            }
            else {
                ygnv6j4[Wso7Ap3NqM] = ZaQCyl78[Wso7Ap3NqM] - '0';
            };
        }
        {
            CZfRiKTlF9H = 0;
            while (CZfRiKTlF9H < Wso7Ap3NqM) {
                RIOQAbw0da = wK3HmyE * RIOQAbw0da +ygnv6j4[CZfRiKTlF9H];
                CZfRiKTlF9H = CZfRiKTlF9H +1;
            };
        }
        for (Wso7Ap3NqM = 0; RIOQAbw0da != 0; Wso7Ap3NqM = Wso7Ap3NqM +1) {
            ygnv6j4[Wso7Ap3NqM] = RIOQAbw0da % DNfEjZ;
            RIOQAbw0da = RIOQAbw0da / DNfEjZ;
            if (ygnv6j4[Wso7Ap3NqM] >= (963 - 953)) {
                ZaQCyl78[Wso7Ap3NqM] = 'A' + ygnv6j4[Wso7Ap3NqM] - 10;
            }
            else {
                ZaQCyl78[Wso7Ap3NqM] = ygnv6j4[Wso7Ap3NqM] + '0';
            };
        }
        for (CZfRiKTlF9H = Wso7Ap3NqM -1; CZfRiKTlF9H >= 0; CZfRiKTlF9H = CZfRiKTlF9H -1) {
            printf ("%c", ZaQCyl78[CZfRiKTlF9H]);
        };
    }
    getchar ();
    getchar ();
    getchar ();
}

