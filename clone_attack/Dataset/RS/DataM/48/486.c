void  lHU3u5m (int num1 [(92 - 81)] [(385 - 374)], int num2 [(170 - 159)] [(528 - 517)], int n) {
    int KvEqsfr83, UdwPu60pQTm;
    if (n) {
        {
            KvEqsfr83 = 268 - 267;
            while ((786 - 776) > KvEqsfr83) {
                {
                    UdwPu60pQTm = 649 - 648;
                    while (UdwPu60pQTm < (150 - 140)) {
                        num2[KvEqsfr83][UdwPu60pQTm] = num1[KvEqsfr83 -(209 - 208)][UdwPu60pQTm -(32 - 31)] + num1[KvEqsfr83 -(593 - 592)][UdwPu60pQTm] + num1[KvEqsfr83 -(551 - 550)][UdwPu60pQTm +(802 - 801)] + num1[KvEqsfr83][UdwPu60pQTm -(790 - 789)] + num1[KvEqsfr83][UdwPu60pQTm] * (293 - 291) + num1[KvEqsfr83][UdwPu60pQTm +(38 - 37)] + num1[KvEqsfr83 +1][UdwPu60pQTm -1] + num1[KvEqsfr83 +1][UdwPu60pQTm] + num1[KvEqsfr83 +1][UdwPu60pQTm +1];
                        UdwPu60pQTm = UdwPu60pQTm +1;
                    };
                }
                KvEqsfr83 = KvEqsfr83 +1;
            };
        }
        lHU3u5m (num2, num1, n - 1);
    };
}

main () {
    int m, n, num1 [11] [11] = {(252 - 252)}, num2 [11] [11] = {0};
    int KvEqsfr83, UdwPu60pQTm;
    scanf ("%d %d", &m, &n);
    num1[(221 - 216)][(827 - 822)] = m;
    lHU3u5m (num1, num2, n);
    if (n % 2 == 0) {
        KvEqsfr83 = 1;
        while (10 > KvEqsfr83) {
            {
                UdwPu60pQTm = 1;
                while ((593 - 584) > UdwPu60pQTm) {
                    printf ("%d ", num1[KvEqsfr83][UdwPu60pQTm]);
                    UdwPu60pQTm = UdwPu60pQTm +1;
                };
            }
            printf ("%d\n", num1[KvEqsfr83][(277 - 268)]);
            KvEqsfr83 = KvEqsfr83 +1;
        };
    }
    else {
        KvEqsfr83 = 1;
        while (KvEqsfr83 < 10) {
            {
                UdwPu60pQTm = 1;
                while (UdwPu60pQTm < (672 - 663)) {
                    printf ("%d ", num2[KvEqsfr83][UdwPu60pQTm]);
                    UdwPu60pQTm = UdwPu60pQTm +1;
                };
            }
            printf ("%d\n", num2[KvEqsfr83][(731 - 722)]);
            KvEqsfr83++;
        };
    };
}

