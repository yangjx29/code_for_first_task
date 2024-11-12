int main () {
    char duF9aStDWigp [300];
    int TBpPkjxC9 = (485 - 485), YdXPzg83, Z4HivQoKs3t, NvWRZuy3;
    struct   b {
        char mqZ6hgJ;
        int SvMOfXyu;
    }
    Bf0FkEh6 [52];
    scanf ("%s", duF9aStDWigp);
    for (Z4HivQoKs3t = 0; 52 > Z4HivQoKs3t; Z4HivQoKs3t++) {
        if (0 <= Z4HivQoKs3t &&Z4HivQoKs3t < 26) {
            Bf0FkEh6[Z4HivQoKs3t].mqZ6hgJ = 65 + Z4HivQoKs3t;
        }
        else if (26 <= Z4HivQoKs3t &&Z4HivQoKs3t < 52) {
            Bf0FkEh6[Z4HivQoKs3t].mqZ6hgJ = 71 + Z4HivQoKs3t;
        }
        Bf0FkEh6[Z4HivQoKs3t].SvMOfXyu = 0;
    }
    YdXPzg83 = strlen (duF9aStDWigp);
    {
        Z4HivQoKs3t = 0;
        while (YdXPzg83 > Z4HivQoKs3t) {
            {
                NvWRZuy3 = 65;
                while (123 > NvWRZuy3) {
                    if (!(NvWRZuy3 != duF9aStDWigp[Z4HivQoKs3t])) {
                        if (NvWRZuy3 >= 65 && NvWRZuy3 < 91) {
                            Bf0FkEh6[NvWRZuy3 -65].SvMOfXyu = Bf0FkEh6[NvWRZuy3 -65].SvMOfXyu + (424 - 423);
                            TBpPkjxC9 = 1;
                        }
                        else {
                            if (NvWRZuy3 > 96 && NvWRZuy3 < 123) {
                                TBpPkjxC9 = 1;
                                Bf0FkEh6[NvWRZuy3 -71].SvMOfXyu = Bf0FkEh6[NvWRZuy3 -71].SvMOfXyu + 1;
                            };
                        };
                    }
                    NvWRZuy3++;
                };
            }
            Z4HivQoKs3t = Z4HivQoKs3t +1;
        };
    }
    {
        Z4HivQoKs3t = 0;
        while (Z4HivQoKs3t < 52) {
            if (Bf0FkEh6[Z4HivQoKs3t].SvMOfXyu != 0) {
                printf ("%c=%d\n", Bf0FkEh6[Z4HivQoKs3t].mqZ6hgJ, Bf0FkEh6[Z4HivQoKs3t].SvMOfXyu);
            }
            Z4HivQoKs3t++;
        };
    }
    if (TBpPkjxC9 == 0) {
    }
    return 0;
}

