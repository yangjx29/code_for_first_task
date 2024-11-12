int main () {
    int MHCEFy0v8Rd [100] [100], WG9WIniH [100] [100], bVlDNk [100] [100] = {0};
    int TavipYfgVo, tAPSLda0J, VOgvFCmIj5DL, o0iWRfbhjIwN, WKJTf4dC68, zdYtK1Tf, UH6FBcUs;
    scanf ("%d", &TavipYfgVo);
    scanf ("%d", &tAPSLda0J);
    for (WKJTf4dC68 = 0; TavipYfgVo > WKJTf4dC68; WKJTf4dC68 = WKJTf4dC68 +1) {
        for (zdYtK1Tf = 0; zdYtK1Tf < tAPSLda0J; zdYtK1Tf = zdYtK1Tf + 1) {
            scanf ("%d", &MHCEFy0v8Rd[WKJTf4dC68][zdYtK1Tf]);
        };
    }
    scanf ("%d", &VOgvFCmIj5DL);
    scanf ("%d", &o0iWRfbhjIwN);
    for (WKJTf4dC68 = 0; WKJTf4dC68 < VOgvFCmIj5DL; WKJTf4dC68++) {
        for (zdYtK1Tf = 0; o0iWRfbhjIwN > zdYtK1Tf; zdYtK1Tf = zdYtK1Tf + 1)
            scanf ("%d", &WG9WIniH[WKJTf4dC68][zdYtK1Tf]);
    }
    for (WKJTf4dC68 = 0; WKJTf4dC68 < TavipYfgVo; WKJTf4dC68++) {
        for (zdYtK1Tf = 0; o0iWRfbhjIwN > zdYtK1Tf; zdYtK1Tf = zdYtK1Tf + 1) {
            for (UH6FBcUs = 0; VOgvFCmIj5DL > UH6FBcUs; UH6FBcUs = UH6FBcUs +1)
                bVlDNk[WKJTf4dC68][zdYtK1Tf] = bVlDNk[WKJTf4dC68][zdYtK1Tf] + MHCEFy0v8Rd[WKJTf4dC68][UH6FBcUs] * WG9WIniH[UH6FBcUs][zdYtK1Tf];
        };
    }
    for (WKJTf4dC68 = 0; WKJTf4dC68 < TavipYfgVo; WKJTf4dC68++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (zdYtK1Tf = 0; zdYtK1Tf < o0iWRfbhjIwN; zdYtK1Tf++) {
            if (zdYtK1Tf == o0iWRfbhjIwN - 1)
                printf ("%d\n", bVlDNk[WKJTf4dC68][zdYtK1Tf]);
            else
                printf ("%d ", bVlDNk[WKJTf4dC68][zdYtK1Tf]);
        };
    };
}

