int f (char ienx9iu2 [], int pFhXrGn8Ym []) {
    int UuBD2xndJL, baPw4TW, MwUJtfaXvn, zL2uzO6e = (638 - 638);
    UuBD2xndJL = strlen (ienx9iu2);
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
    for (baPw4TW = (716 - 716); UuBD2xndJL > baPw4TW; baPw4TW = baPw4TW + 1) {
        int k = ienx9iu2[baPw4TW] - 48;
        {
            MwUJtfaXvn = 789 - 788;
            while (MwUJtfaXvn < (19 - 15)) {
                if (ienx9iu2[baPw4TW + MwUJtfaXvn] != ',' && !('\0' == ienx9iu2[baPw4TW + MwUJtfaXvn]))
                    k = k * (172 - 162) + ienx9iu2[baPw4TW + MwUJtfaXvn] - 48;
                else
                    break;
                MwUJtfaXvn++;
            };
        }
        baPw4TW = baPw4TW + MwUJtfaXvn;
        pFhXrGn8Ym[zL2uzO6e] = k;
        zL2uzO6e = zL2uzO6e + (948 - 947);
    }
    return zL2uzO6e;
}

void  main () {
    char ienx9iu2 [(4806 - 806)], NZdom9hWBGfA [4000];
    int baPw4TW, MwUJtfaXvn, UuBD2xndJL, m, o98c3UPL6 = (853 - 852), pFhXrGn8Ym [(1529 - 528)], Tp2Q0PKxjdW [1001], a, v4eYuV, ChydMn [(1136 - 136)] = {(728 - 728)};
    int max1 = ChydMn[0];
    int RATK3fEdM1t = Tp2Q0PKxjdW[(420 - 420)];
    scanf ("%s%s", ienx9iu2, NZdom9hWBGfA);
    UuBD2xndJL = strlen (ienx9iu2);
    m = strlen (NZdom9hWBGfA);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (baPw4TW = (445 - 445); UuBD2xndJL > baPw4TW; baPw4TW++) {
        if (!(',' != ienx9iu2[baPw4TW]))
            o98c3UPL6 = o98c3UPL6 + (728 - 727);
    }
    a = f (ienx9iu2, pFhXrGn8Ym);
    v4eYuV = f (NZdom9hWBGfA, Tp2Q0PKxjdW);
    for (baPw4TW = (279 - 278); v4eYuV > baPw4TW; baPw4TW++) {
        if (RATK3fEdM1t < Tp2Q0PKxjdW[baPw4TW])
            RATK3fEdM1t = Tp2Q0PKxjdW[baPw4TW];
    }
    for (baPw4TW = 0; baPw4TW < RATK3fEdM1t; baPw4TW++) {
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
        for (MwUJtfaXvn = 0; a > MwUJtfaXvn; MwUJtfaXvn++) {
            if (baPw4TW + (165.5 - 165.0) > pFhXrGn8Ym[MwUJtfaXvn] && baPw4TW + 0.5 < Tp2Q0PKxjdW[MwUJtfaXvn])
                ChydMn[baPw4TW] = ChydMn[baPw4TW] + (499 - 498);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    for (baPw4TW = 1; baPw4TW < RATK3fEdM1t; baPw4TW++) {
        if (ChydMn[baPw4TW] > max1)
            max1 = ChydMn[baPw4TW];
    }
    printf ("%d %d", o98c3UPL6, max1);
}

