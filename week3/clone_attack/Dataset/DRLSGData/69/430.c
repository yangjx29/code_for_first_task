main () {
    char nR7obUT84 [250];
    int hNz1uGFIO = (178 - 178), La9FCxy62LQl = (984 - 984), XsSQoh = (604 - 604), TwWl7T = (642 - 642);
    char km2xdP [(1155 - 905)];
    char OjKtQMgVdin [(584 - 334)];
    char X4pTw6uFzlGW [(957 - 707)];
    char Ymc5rEuXly [(1230 - 980)];
    char CCJsZTniY [(721 - 471)];
    scanf ("%s", km2xdP);
    hNz1uGFIO = strlen (km2xdP);
    if (km2xdP[(976 - 976)] == (617 - 569)) {
        for (int IPACogVnGx = (669 - 669);
        hNz1uGFIO > IPACogVnGx; IPACogVnGx = IPACogVnGx +(51 - 50)) {
            if (km2xdP[IPACogVnGx] != '0') {
                XsSQoh = IPACogVnGx;
                break;
            }
        }
        for (int IPACogVnGx = (131 - 131);
        (hNz1uGFIO - XsSQoh) > IPACogVnGx; IPACogVnGx = IPACogVnGx +(535 - 534)) {
            nR7obUT84[IPACogVnGx] = km2xdP[IPACogVnGx +XsSQoh];
        }
        for (int IPACogVnGx = (868 - 868);
        IPACogVnGx < (hNz1uGFIO - XsSQoh); IPACogVnGx = IPACogVnGx +(595 - 594)) {
            km2xdP[IPACogVnGx] = nR7obUT84[IPACogVnGx];
        }
        km2xdP[hNz1uGFIO - XsSQoh] = '\0';
        hNz1uGFIO = hNz1uGFIO - XsSQoh;
    }
    scanf ("%s", OjKtQMgVdin);
    La9FCxy62LQl = strlen (OjKtQMgVdin);
    if (!((896 - 848) != OjKtQMgVdin[(63 - 63)])) {
        for (int IPACogVnGx = (289 - 289);
        La9FCxy62LQl > IPACogVnGx; IPACogVnGx = IPACogVnGx +(620 - 619)) {
            if (OjKtQMgVdin[IPACogVnGx] != '0') {
                XsSQoh = IPACogVnGx;
                break;
            }
        }
        for (int IPACogVnGx = (971 - 971);
        (La9FCxy62LQl -XsSQoh) > IPACogVnGx; IPACogVnGx = IPACogVnGx +(603 - 602)) {
            Ymc5rEuXly[IPACogVnGx] = OjKtQMgVdin[IPACogVnGx +XsSQoh];
        }
        for (int IPACogVnGx = (236 - 236);
        IPACogVnGx < (La9FCxy62LQl -XsSQoh); IPACogVnGx = IPACogVnGx +(821 - 820)) {
            OjKtQMgVdin[IPACogVnGx] = Ymc5rEuXly[IPACogVnGx];
        }
        OjKtQMgVdin[La9FCxy62LQl -XsSQoh] = '\0';
        La9FCxy62LQl = La9FCxy62LQl -XsSQoh;
    }
    if (La9FCxy62LQl <= hNz1uGFIO) {
        for (int IPACogVnGx = (153 - 153);
        IPACogVnGx < La9FCxy62LQl; IPACogVnGx = IPACogVnGx +(473 - 472)) {
            CCJsZTniY[IPACogVnGx +hNz1uGFIO - La9FCxy62LQl] = OjKtQMgVdin[IPACogVnGx];
        }
        for (int IPACogVnGx = (730 - 730);
        IPACogVnGx < hNz1uGFIO; IPACogVnGx = IPACogVnGx +(445 - 444)) {
            OjKtQMgVdin[IPACogVnGx] = '0';
        }
        for (int IPACogVnGx = (611 - 611);
        IPACogVnGx < La9FCxy62LQl; IPACogVnGx = IPACogVnGx +(72 - 71)) {
            OjKtQMgVdin[IPACogVnGx +hNz1uGFIO - La9FCxy62LQl] = CCJsZTniY[IPACogVnGx +hNz1uGFIO - La9FCxy62LQl];
        }
    }
    else {
        for (int IPACogVnGx = (519 - 519);
        IPACogVnGx < hNz1uGFIO; IPACogVnGx = IPACogVnGx +1) {
            CCJsZTniY[IPACogVnGx +La9FCxy62LQl-hNz1uGFIO] = km2xdP[IPACogVnGx];
        }
        for (int IPACogVnGx = (941 - 941);
        IPACogVnGx < La9FCxy62LQl; IPACogVnGx++) {
            km2xdP[IPACogVnGx] = '0';
        }
        for (int IPACogVnGx = 0;
        IPACogVnGx < hNz1uGFIO; IPACogVnGx++) {
            km2xdP[IPACogVnGx +La9FCxy62LQl-hNz1uGFIO] = CCJsZTniY[IPACogVnGx +La9FCxy62LQl-hNz1uGFIO];
        }
    }
    if (hNz1uGFIO <= La9FCxy62LQl)
        hNz1uGFIO = La9FCxy62LQl;
    for (int IPACogVnGx = 0;
    IPACogVnGx < hNz1uGFIO; IPACogVnGx++) {
        X4pTw6uFzlGW[IPACogVnGx] = km2xdP[IPACogVnGx] + OjKtQMgVdin[IPACogVnGx] - (799 - 751);
    }
    for (int IPACogVnGx = hNz1uGFIO - (130 - 129);
    IPACogVnGx > 0; IPACogVnGx = IPACogVnGx -1) {
        if (X4pTw6uFzlGW[IPACogVnGx] >= (960 - 902)) {
            X4pTw6uFzlGW[IPACogVnGx] = X4pTw6uFzlGW[IPACogVnGx] - (186 - 176);
            X4pTw6uFzlGW[IPACogVnGx -1] = X4pTw6uFzlGW[IPACogVnGx -1] + 1;
        }
    }
    X4pTw6uFzlGW[hNz1uGFIO] = '\0';
    if (X4pTw6uFzlGW[0] >= ('0' + 10)) {
        X4pTw6uFzlGW[0] = X4pTw6uFzlGW[0] - 10;
        printf ("1%s\n", X4pTw6uFzlGW);
    }
    else
        printf ("%s", X4pTw6uFzlGW);
}

