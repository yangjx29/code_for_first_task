void  main () {
    int JeKahFg6jywn [(47 - 45)], yvxdUaJu, VrLPNS4n, vChSverBgE [2] [100], jfaF0ky, vxPVKwmz4g [100], s, d6Nhbj0gmat1;
    {
        yvxdUaJu = 0;
        while (2 > yvxdUaJu) {
            scanf ("%d", &JeKahFg6jywn[yvxdUaJu]);
            yvxdUaJu = yvxdUaJu + 1;
        };
    }
    for (yvxdUaJu = 0; yvxdUaJu < 2; yvxdUaJu = yvxdUaJu + 1) {
        VrLPNS4n = 0;
        while (JeKahFg6jywn[yvxdUaJu] > VrLPNS4n) {
            scanf ("%d", &vChSverBgE[yvxdUaJu][VrLPNS4n]);
            VrLPNS4n++;
        };
    }
    {
        yvxdUaJu = 0;
        while (yvxdUaJu < 2) {
            {
                s = 0;
                while (s < JeKahFg6jywn[yvxdUaJu] - 1) {
                    {
                        d6Nhbj0gmat1 = 0;
                        while (JeKahFg6jywn[yvxdUaJu] - 1 - s > d6Nhbj0gmat1) {
                            if (vChSverBgE[yvxdUaJu][d6Nhbj0gmat1 + 1] < vChSverBgE[yvxdUaJu][d6Nhbj0gmat1]) {
                                jfaF0ky = vChSverBgE[yvxdUaJu][d6Nhbj0gmat1];
                                vChSverBgE[yvxdUaJu][d6Nhbj0gmat1] = vChSverBgE[yvxdUaJu][d6Nhbj0gmat1 + 1];
                                vChSverBgE[yvxdUaJu][d6Nhbj0gmat1 + 1] = jfaF0ky;
                            }
                            d6Nhbj0gmat1 = d6Nhbj0gmat1 + 1;
                        };
                    }
                    s++;
                };
            }
            yvxdUaJu++;
        };
    }
    for (yvxdUaJu = 0; JeKahFg6jywn[0] > yvxdUaJu; yvxdUaJu = yvxdUaJu + 1)
        vxPVKwmz4g[yvxdUaJu] = vChSverBgE[0][yvxdUaJu];
    {
        VrLPNS4n = 0;
        while (JeKahFg6jywn[1] > VrLPNS4n) {
            vxPVKwmz4g[JeKahFg6jywn[0] + VrLPNS4n] = vChSverBgE[1][VrLPNS4n];
            VrLPNS4n++;
        };
    }
    {
        s = 0;
        while (s < JeKahFg6jywn[0] + JeKahFg6jywn[1] - 1) {
            printf ("%d ", vxPVKwmz4g[s]);
            s++;
        };
    }
    printf ("%d", vxPVKwmz4g[JeKahFg6jywn[0] + JeKahFg6jywn[1] - 1]);
}

