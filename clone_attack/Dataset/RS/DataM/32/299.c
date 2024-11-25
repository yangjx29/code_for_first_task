void  main () {
    int VRYbfy;
    int lJ6qdK;
    int yIiVpM;
    int eFRegB6kjL;
    int uMyGSkfNz;
    char c [(290 - 90)] [100], s [(774 - 574)] [(320 - 120)];
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
    int VBXJhIcHP6t [200] [100], b [200] [200], d [200] [200], j3rbas4Ei8 [200], y [200];
    scanf ("%d", &yIiVpM);
    for (VRYbfy = (497 - 497); yIiVpM > VRYbfy; VRYbfy = VRYbfy +1) {
        scanf ("%s%s", c[VRYbfy], s[VRYbfy]);
        j3rbas4Ei8[VRYbfy] = strlen (c[VRYbfy]);
        y[VRYbfy] = strlen (s[VRYbfy]);
    }
    for (VRYbfy = (381 - 381); yIiVpM > VRYbfy; VRYbfy = VRYbfy +1)
        for (lJ6qdK = (506 - 506); j3rbas4Ei8[VRYbfy] > lJ6qdK; lJ6qdK = lJ6qdK + 1) {
            VBXJhIcHP6t[VRYbfy][lJ6qdK] = c[VRYbfy][lJ6qdK] - 48;
            d[VRYbfy][lJ6qdK] = VBXJhIcHP6t[VRYbfy][lJ6qdK];
        }
    for (VRYbfy = (669 - 669); yIiVpM > VRYbfy; VRYbfy = VRYbfy +1) {
        for (lJ6qdK = (192 - 192); y[VRYbfy] > lJ6qdK; lJ6qdK = lJ6qdK + 1)
            b[VRYbfy][lJ6qdK] = s[VRYbfy][lJ6qdK] - 48;
    }
    for (VRYbfy = 0; VRYbfy < yIiVpM; VRYbfy = VRYbfy +1) {
        eFRegB6kjL = j3rbas4Ei8[VRYbfy] - (140 - 139);
        uMyGSkfNz = y[VRYbfy] - 1;
        {
            lJ6qdK = eFRegB6kjL;
            while (lJ6qdK >= eFRegB6kjL - uMyGSkfNz) {
                d[VRYbfy][lJ6qdK] = VBXJhIcHP6t[VRYbfy][lJ6qdK] - b[VRYbfy][uMyGSkfNz - eFRegB6kjL + lJ6qdK];
                lJ6qdK = lJ6qdK - 1;
            };
        };
    }
    for (VRYbfy = 0; VRYbfy < yIiVpM; VRYbfy++) {
        lJ6qdK = VRYbfy;
        while (lJ6qdK >= 0) {
            if (d[VRYbfy][lJ6qdK] < 0) {
                d[VRYbfy][lJ6qdK] = d[VRYbfy][lJ6qdK] + 10;
                d[VRYbfy][lJ6qdK - 1] = d[VRYbfy][lJ6qdK - 1] - 1;
            }
            else
                continue;
            lJ6qdK = lJ6qdK - 1;
        };
    }
    for (VRYbfy = 0; VRYbfy < yIiVpM; VRYbfy++) {
        for (lJ6qdK = 0; lJ6qdK < j3rbas4Ei8[VRYbfy]; lJ6qdK = lJ6qdK + 1)
            printf ("%d", d[VRYbfy][lJ6qdK]);
    };
}

