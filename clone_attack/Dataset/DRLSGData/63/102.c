main () {
    int a [(210 - 110)] [(596 - 496)], oRrBgFiE [(638 - 538)] [(912 - 812)];
    int x1, as8Qj94q, dho9nuSEk, CyeXnL, LfjHcIi, h9UHfMCgv, PGIaPFW, XMIH9bjc;
    int c [(457 - 357)] [(339 - 239)], Tj9WuErBtF, EYnQdThe85kH, pHdv2lsAqBQ, s6w9lBH;
    pHdv2lsAqBQ = (721 - 721);
    scanf ("%d %d", &x1, &as8Qj94q);
    for (LfjHcIi = (906 - 906); x1 > LfjHcIi; LfjHcIi = LfjHcIi +(707 - 706)) {
        for (h9UHfMCgv = (68 - 68); h9UHfMCgv < as8Qj94q; h9UHfMCgv = h9UHfMCgv + (821 - 820))
            scanf ("%d", &a[LfjHcIi][h9UHfMCgv]);
    }
    scanf ("%d %d", &dho9nuSEk, &CyeXnL);
    for (XMIH9bjc = (262 - 262); XMIH9bjc < dho9nuSEk; XMIH9bjc = XMIH9bjc +(369 - 368)) {
        for (PGIaPFW = (129 - 129); PGIaPFW < CyeXnL; PGIaPFW++)
            scanf ("%d", &oRrBgFiE[XMIH9bjc][PGIaPFW]);
    }
    for (Tj9WuErBtF = (82 - 82); Tj9WuErBtF < x1; Tj9WuErBtF = Tj9WuErBtF +(485 - 484)) {
        for (EYnQdThe85kH = (454 - 454); EYnQdThe85kH < CyeXnL; EYnQdThe85kH = EYnQdThe85kH +(640 - 639)) {
            for (s6w9lBH = (419 - 419); s6w9lBH < dho9nuSEk; s6w9lBH = s6w9lBH + (98 - 97)) {
                pHdv2lsAqBQ = pHdv2lsAqBQ + a[Tj9WuErBtF][s6w9lBH] * oRrBgFiE[s6w9lBH][EYnQdThe85kH];
            }
            c[Tj9WuErBtF][EYnQdThe85kH] = pHdv2lsAqBQ;
            pHdv2lsAqBQ = (67 - 67);
        }
    }
    for (Tj9WuErBtF = (642 - 642); Tj9WuErBtF < x1; Tj9WuErBtF = Tj9WuErBtF +(955 - 954)) {
        for (EYnQdThe85kH = (938 - 938); EYnQdThe85kH < CyeXnL; EYnQdThe85kH = EYnQdThe85kH +1) {
            if (EYnQdThe85kH == (562 - 562))
                printf ("%d", c[Tj9WuErBtF][EYnQdThe85kH]);
            else
                printf (" %d", c[Tj9WuErBtF][EYnQdThe85kH]);
        }
        printf ("\n");
    }
}

