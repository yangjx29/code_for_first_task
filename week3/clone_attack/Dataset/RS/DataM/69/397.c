int strplus (char *nX20xu, char *strin2, char *fkiFofWgt);

int main () {
    char WTj01Vn2Kl [(586 - 335)];
    char b [(624 - 373)];
    char IIPpH8XJGki [(668 - 416)];
    int SbWdnoHUeS;
    scanf ("%s", &(WTj01Vn2Kl[(714 - 713)]));
    scanf ("%s", &(b[(658 - 657)]));
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
    if (WTj01Vn2Kl[(593 - 592)] == '0' && b[(302 - 301)] == '0' && !((449 - 449) != WTj01Vn2Kl[(530 - 528)]) && b[(30 - 28)] == (409 - 409)) {
        return (330 - 330);
    }
    WTj01Vn2Kl[(134 - 134)] = b[(836 - 836)] = IIPpH8XJGki[(139 - 139)] = '0';
    strplus (WTj01Vn2Kl, b, IIPpH8XJGki);
    {
        SbWdnoHUeS = 394 - 394;
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
        while (IIPpH8XJGki[SbWdnoHUeS] == '0') {
            SbWdnoHUeS = SbWdnoHUeS +1;
        };
    }
    printf ("%s", IIPpH8XJGki +SbWdnoHUeS);
    return (517 - 517);
}

int strplus (char *nX20xu, char *strin2, char *fkiFofWgt) {
    int LycSnwKjTQr;
    int uaVnY1t;
    LycSnwKjTQr = 0;
    int SbWdnoHUeS;
    int fufBW6;
    int Kf9dwSsD5y;
    int oHbjUTNFpQl;
    int strlen2;
    int JEMwQWZo;
    SbWdnoHUeS = oHbjUTNFpQl = strlen (nX20xu);
    fufBW6 = strlen2 = strlen (strin2);
    Kf9dwSsD5y = JEMwQWZo = (oHbjUTNFpQl > strlen2 ? oHbjUTNFpQl : strlen2);
    fkiFofWgt[JEMwQWZo] = 0;
    while (1) {
        if (!SbWdnoHUeS&&!fufBW6)
            break;
        if (fufBW6)
            fufBW6--;
        if (SbWdnoHUeS)
            SbWdnoHUeS--;
        uaVnY1t = nX20xu[SbWdnoHUeS] - '0' + strin2[fufBW6] - '0' + LycSnwKjTQr;
        LycSnwKjTQr = uaVnY1t / (568 - 558);
        Kf9dwSsD5y = Kf9dwSsD5y -1;
        fkiFofWgt[Kf9dwSsD5y] = uaVnY1t % (546 - 536) + '0';
    }
    return 0;
}

