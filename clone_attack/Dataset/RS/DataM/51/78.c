int main () {
    char XFmESKBseZ [501];
    char jLOwBPaeyS [501] [5];
    int c [501] = {(499 - 499)};
    int H1ib0B7Jz, HagAN05t, h8E5Ycs, k, N;
    int i8O5fAL9;
    int gmSkh2T9ILxY;
    int zKRoLbpFU;
    int Zy7mfPncseN;
    i8O5fAL9 = 0;
    scanf ("%d", &H1ib0B7Jz);
    scanf ("%s", XFmESKBseZ);
    N = strlen (XFmESKBseZ);
    {
        h8E5Ycs = 0;
        while (H1ib0B7Jz > h8E5Ycs) {
            jLOwBPaeyS[0][h8E5Ycs] = XFmESKBseZ[h8E5Ycs];
            h8E5Ycs = h8E5Ycs + 1;
        };
    }
    jLOwBPaeyS[0][h8E5Ycs] = 0;
    c[0]++;
    {
        k = 1;
        HagAN05t = 1;
        while (HagAN05t < N -H1ib0B7Jz+1) {
            {
                h8E5Ycs = 0;
                while (h8E5Ycs < H1ib0B7Jz) {
                    jLOwBPaeyS[k][h8E5Ycs] = XFmESKBseZ[HagAN05t +h8E5Ycs];
                    h8E5Ycs = h8E5Ycs + 1;
                };
            }
            jLOwBPaeyS[k][h8E5Ycs] = 0;
            {
                gmSkh2T9ILxY = 1;
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
                h8E5Ycs = 0;
                while (h8E5Ycs < k) {
                    if (strcmp (jLOwBPaeyS[h8E5Ycs], jLOwBPaeyS[k]) == 0) {
                        Zy7mfPncseN = h8E5Ycs;
                        gmSkh2T9ILxY = 0;
                        break;
                    }
                    h8E5Ycs++;
                };
            }
            HagAN05t = HagAN05t +1;
            if (gmSkh2T9ILxY) {
                c[k]++;
                k++;
            }
            else {
                c[Zy7mfPncseN]++;
            };
        };
    }
    zKRoLbpFU = k - 1;
    {
        HagAN05t = 0;
        while (HagAN05t <= zKRoLbpFU) {
            if (c[HagAN05t] > i8O5fAL9)
                i8O5fAL9 = c[HagAN05t];
            HagAN05t = HagAN05t +1;
        };
    }
    if (i8O5fAL9 == 1)
        ;
    else {
        printf ("%d\n", i8O5fAL9);
        {
            HagAN05t = 0;
            while (HagAN05t <= zKRoLbpFU) {
                if (c[HagAN05t] == i8O5fAL9)
                    printf ("%s\n", jLOwBPaeyS[HagAN05t]);
                HagAN05t++;
            };
        };
    }
    return 0;
}

