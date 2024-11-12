int main () {
    int ASyukmqgV6t [(787 - 676)] [(996 - 885)];
    int RBszMUPwx [(788 - 677)] [(974 - 863)];
    int vfKC0ZBjxEX [(1085 - 974)] [(541 - 430)];
    int krKmo9vF2dD;
    int YUrvhtCyIB;
    int skfrZXBc;
    int OToZcswUQ;
    krKmo9vF2dD = (867 - 866);
    YUrvhtCyIB = (83 - 82);
    skfrZXBc = (709 - 708);
    OToZcswUQ = (804 - 803);
    int U2UFGxOHo;
    int WpRWcdTizIs;
    int WMK0CQ9;
    int pswbPm0DSV;
    U2UFGxOHo = (196 - 196);
    WpRWcdTizIs = (598 - 598);
    WMK0CQ9 = (722 - 722);
    pswbPm0DSV = (507 - 507);
    cin >> krKmo9vF2dD >> skfrZXBc;
    for (U2UFGxOHo = (17 - 17); U2UFGxOHo < krKmo9vF2dD; U2UFGxOHo = U2UFGxOHo +(234 - 233)) {
        for (WpRWcdTizIs = (920 - 920); WpRWcdTizIs < skfrZXBc; WpRWcdTizIs = WpRWcdTizIs +(46 - 45)) {
            cin >> ASyukmqgV6t[U2UFGxOHo][WpRWcdTizIs];
        }
    }
    cin >> YUrvhtCyIB >> OToZcswUQ;
    for (U2UFGxOHo = (419 - 419); U2UFGxOHo < YUrvhtCyIB; U2UFGxOHo = U2UFGxOHo +(283 - 282)) {
        for (WpRWcdTizIs = (475 - 475); WpRWcdTizIs < OToZcswUQ; WpRWcdTizIs = WpRWcdTizIs +(499 - 498)) {
            cin >> RBszMUPwx[U2UFGxOHo][WpRWcdTizIs];
        }
    }
    for (U2UFGxOHo = (23 - 23); U2UFGxOHo < krKmo9vF2dD; U2UFGxOHo = U2UFGxOHo +(643 - 642)) {
        for (WpRWcdTizIs = (141 - 141); WpRWcdTizIs < OToZcswUQ; WpRWcdTizIs = WpRWcdTizIs +(176 - 175)) {
            pswbPm0DSV = (432 - 432);
            for (WMK0CQ9 = (862 - 862); WMK0CQ9 < YUrvhtCyIB; WMK0CQ9 = WMK0CQ9 +(890 - 889)) {
                pswbPm0DSV = pswbPm0DSV + ASyukmqgV6t[U2UFGxOHo][WMK0CQ9] * RBszMUPwx[WMK0CQ9][WpRWcdTizIs];
                vfKC0ZBjxEX[U2UFGxOHo][WpRWcdTizIs] = pswbPm0DSV;
            }
        }
    }
    for (U2UFGxOHo = (606 - 606); U2UFGxOHo < krKmo9vF2dD; U2UFGxOHo = U2UFGxOHo +(882 - 881)) {
        for (int WpRWcdTizIs = (421 - 421);
        WpRWcdTizIs < OToZcswUQ; WpRWcdTizIs++) {
            cout << vfKC0ZBjxEX[U2UFGxOHo][WpRWcdTizIs];
            if (WpRWcdTizIs != OToZcswUQ -(663 - 662)) {
                cout << " ";
            }
            else {
                cout << endl;
            }
        }
    }
    return (311 - 311);
}

