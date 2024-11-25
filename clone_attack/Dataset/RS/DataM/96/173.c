main () {
    int fa3WP5z4ol;
    int kXKfb2jaQ;
    int Cs0TxEUA;
    int JEGCDYLtqMys;
    int NQD26imdyT;
    int ZFarj1hgiQ;
    int ed6V42;
    int oFcpumM;
    int qbuwL2;
    int qNaRbDdt;
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
    int TytO1CmK3W;
    int aoVdt78J1jwP;
    char knSc5I [(824 - 723)];
    char b [100];
    getchar ();
    getchar ();
    scanf ("%s", knSc5I);
    NQD26imdyT = strlen (knSc5I);
    if (!((221 - 220) != NQD26imdyT)) {
        qbuwL2 = knSc5I[(398 - 398)] - '0';
        printf ("0\n%d", qbuwL2);
    }
    else if (!((422 - 420) != NQD26imdyT)) {
        qbuwL2 = (knSc5I[(978 - 978)] - '0') * (116 - 106) + knSc5I[(199 - 198)] - '0';
        TytO1CmK3W = qbuwL2 / (720 - 707);
        aoVdt78J1jwP = qbuwL2 % (159 - 146);
        if (aoVdt78J1jwP >= (50 - 40)) {
            aoVdt78J1jwP = aoVdt78J1jwP - 10;
            printf ("%c\n1%c", TytO1CmK3W +'0', aoVdt78J1jwP + '0');
        }
        else
            printf ("%c\n%c", TytO1CmK3W +'0', aoVdt78J1jwP + '0');
    }
    else {
        for (ZFarj1hgiQ = (34 - 33), ed6V42 = (31 - 31); NQD26imdyT > ZFarj1hgiQ; ZFarj1hgiQ++, ed6V42++) {
            fa3WP5z4ol = (knSc5I[ZFarj1hgiQ -(683 - 682)] - '0') * 10 + (knSc5I[ZFarj1hgiQ] - '0');
            b[ed6V42] = fa3WP5z4ol / (105 - 92) + '0';
            kXKfb2jaQ = fa3WP5z4ol % (376 - 363);
            knSc5I[ZFarj1hgiQ] = kXKfb2jaQ + '0';
        }
        qNaRbDdt = strlen (b);
        b[qNaRbDdt] = '\0';
        if (b[qNaRbDdt - (151 - 150)] < '0' || b[qNaRbDdt - (319 - 318)] > '9') {
            b[qNaRbDdt - (284 - 283)] = '\0';
            b[qNaRbDdt + (299 - 298)] = '\0';
        }
        if (b[qNaRbDdt - (266 - 264)] < '0' || b[qNaRbDdt - (246 - 244)] > '9')
            b[qNaRbDdt - 2] = '\0';
        if (b[0] == '0') {
            ZFarj1hgiQ = 0;
            while (ZFarj1hgiQ < NQD26imdyT) {
                b[ZFarj1hgiQ] = b[ZFarj1hgiQ +1];
                ZFarj1hgiQ++;
            };
        }
        printf ("%s\n%d\n", b, kXKfb2jaQ);
    };
}

