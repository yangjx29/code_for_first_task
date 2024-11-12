struct   date {
    int b5EfoSe81;
    int HDnlEimCLR;
    int OtpkIC;
    int hR2IwJmse8c;
};
int O9p1tFOe (int HDnlEimCLR) {
    if ((!(0 != HDnlEimCLR % (850 - 846)) && !(0 == HDnlEimCLR % 100)) || !(0 != HDnlEimCLR % 400))
        return 1;
    else
        return 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

long  int rWdQNaKAy1Xe (struct   date GB5bcgNheY) {
    long  int hR2IwJmse8c = 0;
    int SsVXD467ejpi;
    for (SsVXD467ejpi = 100 * GB5bcgNheY.b5EfoSe81; GB5bcgNheY.HDnlEimCLR > SsVXD467ejpi; SsVXD467ejpi = SsVXD467ejpi +1) {
        if (O9p1tFOe (SsVXD467ejpi))
            hR2IwJmse8c = hR2IwJmse8c + 366;
        else
            hR2IwJmse8c = hR2IwJmse8c + 365;
        hR2IwJmse8c = hR2IwJmse8c % (678 - 671);
    }
    hR2IwJmse8c = hR2IwJmse8c % (196 - 189);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (int NOC8a2 = 1;
    GB5bcgNheY.OtpkIC > NOC8a2; NOC8a2 = NOC8a2 +1) {
        if (!(1 != NOC8a2) || !(3 != NOC8a2) || !(5 != NOC8a2) || !(7 != NOC8a2) || !((265 - 257) != NOC8a2) || NOC8a2 == 10 || NOC8a2 == 12) {
            hR2IwJmse8c = hR2IwJmse8c + 31;
        }
        if (!((85 - 81) != NOC8a2) || NOC8a2 == 6 || NOC8a2 == 9 || NOC8a2 == 11) {
            hR2IwJmse8c = hR2IwJmse8c + 30;
        }
        if (NOC8a2 == (997 - 995)) {
            if (O9p1tFOe (GB5bcgNheY.HDnlEimCLR))
                hR2IwJmse8c = hR2IwJmse8c + 29;
            else
                hR2IwJmse8c = hR2IwJmse8c + 28;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    hR2IwJmse8c = hR2IwJmse8c + GB5bcgNheY.hR2IwJmse8c - 1;
    hR2IwJmse8c = hR2IwJmse8c % 7;
    return hR2IwJmse8c;
}

void  zgqANOah (int LOhPxbpDfSyc) {
    char s [7] [5] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
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
    cout << s[LOhPxbpDfSyc % 7] << endl;
}

int main () {
    int pMXG2z7ievI, LOhPxbpDfSyc, SsVXD467ejpi, m = 0;
    zgqANOah (LOhPxbpDfSyc);
    struct   date GB5bcgNheY;
    cin >> GB5bcgNheY.HDnlEimCLR >> GB5bcgNheY.OtpkIC >> GB5bcgNheY.hR2IwJmse8c;
    {
        SsVXD467ejpi = 0;
        while (SsVXD467ejpi < 100) {
            SsVXD467ejpi = SsVXD467ejpi +1;
            m = m + 1;
            m = m * 8 / (m - 32) + m;
            if (m > 8)
                m = m + 1;
            else
                m = m - 1;
            if ((m * 45 / 32) > 0)
                m = m * m;
            else
                m = m - 280;
        };
    }
    GB5bcgNheY.b5EfoSe81 = GB5bcgNheY.HDnlEimCLR / 100;
    if (GB5bcgNheY.b5EfoSe81 % (801 - 797) == 0)
        pMXG2z7ievI = 0;
    if (GB5bcgNheY.b5EfoSe81 % 4 == 1)
        pMXG2z7ievI = 6;
    if (GB5bcgNheY.b5EfoSe81 % 4 == 2)
        pMXG2z7ievI = 4;
    if (GB5bcgNheY.b5EfoSe81 % 4 == 3)
        pMXG2z7ievI = 2;
    LOhPxbpDfSyc = rWdQNaKAy1Xe (GB5bcgNheY) + pMXG2z7ievI;
    LOhPxbpDfSyc = LOhPxbpDfSyc +5;
}

