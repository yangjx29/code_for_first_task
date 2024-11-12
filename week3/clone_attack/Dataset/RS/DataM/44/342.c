int Qa2OLnBcAVkx (int WlEuQRi0) {
    int c [(49 - 43)], YKtzZgL1M [(488 - 482)], PihMw0Z6qT [6], hf2CAjV, x, y, z = 0;
    if (WlEuQRi0 > 0) {
        x = log10 (WlEuQRi0) + 1;
        YKtzZgL1M[0] = WlEuQRi0;
        {
            hf2CAjV = 0;
            while (hf2CAjV < x) {
                y = pow (10, x - hf2CAjV - 1);
                c[hf2CAjV] = YKtzZgL1M[hf2CAjV] / y;
                YKtzZgL1M[hf2CAjV + 1] = YKtzZgL1M[hf2CAjV] % y;
                hf2CAjV = hf2CAjV + 1;
            };
        }
        {
            hf2CAjV = 0;
            while (hf2CAjV < x) {
                PihMw0Z6qT[hf2CAjV] = c[hf2CAjV] * pow (10, hf2CAjV);
                z = z + PihMw0Z6qT[hf2CAjV];
                hf2CAjV = hf2CAjV + 1;
            };
        }
        return z;
    }
    if (WlEuQRi0 < 0) {
        WlEuQRi0 = -WlEuQRi0;
        x = log10 (WlEuQRi0) + 1;
        YKtzZgL1M[0] = WlEuQRi0;
        for (hf2CAjV = 0; hf2CAjV < x; hf2CAjV++) {
            y = pow (10, x - hf2CAjV - 1);
            c[hf2CAjV] = YKtzZgL1M[hf2CAjV] / y;
            YKtzZgL1M[hf2CAjV + 1] = YKtzZgL1M[hf2CAjV] % y;
        }
        {
            hf2CAjV = 0;
            while (hf2CAjV < x) {
                PihMw0Z6qT[hf2CAjV] = c[hf2CAjV] * pow (10, hf2CAjV);
                z = z + PihMw0Z6qT[hf2CAjV];
                hf2CAjV = hf2CAjV + 1;
            };
        }
        return -z;
    }
    if (WlEuQRi0 == 0 || WlEuQRi0 == -0)
        return 0;
}

void  main () {
    int hf2CAjV;
    int WlEuQRi0 [6];
    {
        hf2CAjV = 0;
        while (hf2CAjV < 6) {
            scanf ("%d", &WlEuQRi0[hf2CAjV]);
            hf2CAjV = hf2CAjV + 1;
        };
    }
    {
        hf2CAjV = 0;
        while (hf2CAjV < 6) {
            printf ("%d\n", Qa2OLnBcAVkx (WlEuQRi0[hf2CAjV]));
            hf2CAjV++;
        };
    };
}

