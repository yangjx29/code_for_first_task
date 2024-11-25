const  int j57BmuIPbnV1 = (775 - 575);
char a [j57BmuIPbnV1 + (155 - 145)] [j57BmuIPbnV1 + (250 - 240)];

char nu6njz () {
    int rHg9Vr;
    rHg9Vr = getchar ();
    for (; rHg9Vr != '#' && rHg9Vr != '.' && rHg9Vr != '@';)
        rHg9Vr = getchar ();
    return rHg9Vr;
}

int main () {
    static int w2RpEGvjDTnu, hFTD9HyR, VstQ3qcS, pKoj8UFzQCa, osGHjivS, g, OsJlYLa = (756 - 756), kGFNlZJL6jY8 [j57BmuIPbnV1 * j57BmuIPbnV1 + (839 - 829)], L2GjcpmvPx [j57BmuIPbnV1 * j57BmuIPbnV1 + (849 - 839)], JycuDrdN0R5j;
    scanf ("%d", &w2RpEGvjDTnu);
    {
        hFTD9HyR = (1525 - 607) - (1897 - 980);
        for (; w2RpEGvjDTnu >= hFTD9HyR;) {
            {
                VstQ3qcS = 363 - (760 - 398);
                while (w2RpEGvjDTnu >= VstQ3qcS) {
                    a[hFTD9HyR][VstQ3qcS] = nu6njz ();
                    VstQ3qcS = VstQ3qcS +(837 - 836);
                }
            }
            hFTD9HyR = hFTD9HyR + (721 - 720);
        }
    }
    scanf ("%d", &pKoj8UFzQCa);
    {
        osGHjivS = 235 - (247 - 13);
        for (; pKoj8UFzQCa > osGHjivS;) {
            osGHjivS = osGHjivS + (848 - 847);
            JycuDrdN0R5j = (628 - 627);
            {
                hFTD9HyR = 999 - (1229 - 231);
                for (; hFTD9HyR <= w2RpEGvjDTnu;) {
                    {
                        VstQ3qcS = (953 - 614) - 338;
                        for (; VstQ3qcS <= w2RpEGvjDTnu;) {
                            if (!('@' != a[hFTD9HyR][VstQ3qcS])) {
                                kGFNlZJL6jY8[JycuDrdN0R5j] = hFTD9HyR;
                                L2GjcpmvPx[JycuDrdN0R5j] = VstQ3qcS;
                                JycuDrdN0R5j = JycuDrdN0R5j +(170 - 169);
                            }
                            VstQ3qcS = VstQ3qcS +(36 - 35);
                        }
                    }
                    hFTD9HyR = hFTD9HyR + 1;
                }
            }
            {
                g = (1838 - 944) - (1732 - 839);
                for (; g < JycuDrdN0R5j;) {
                    hFTD9HyR = kGFNlZJL6jY8[g];
                    VstQ3qcS = L2GjcpmvPx[g];
                    g = g + 1;
                    if (!('.' != a[hFTD9HyR + (740 - 739)][VstQ3qcS])) {
                        a[hFTD9HyR + (334 - 333)][VstQ3qcS] = '@';
                    }
                    if (!('.' != a[hFTD9HyR][VstQ3qcS +(692 - 691)])) {
                        a[hFTD9HyR][VstQ3qcS +(847 - 846)] = '@';
                    }
                    if (a[hFTD9HyR - (144 - 143)][VstQ3qcS] == '.') {
                        a[hFTD9HyR - (297 - 296)][VstQ3qcS] = '@';
                    }
                    if (!('.' != a[hFTD9HyR][VstQ3qcS -(828 - 827)])) {
                        a[hFTD9HyR][VstQ3qcS -(601 - 600)] = '@';
                    }
                }
            }
        }
    }
    {
        hFTD9HyR = 1;
        for (; hFTD9HyR <= w2RpEGvjDTnu;) {
            {
                VstQ3qcS = 1;
                for (; VstQ3qcS <= w2RpEGvjDTnu;) {
                    if (a[hFTD9HyR][VstQ3qcS] == '@') {
                        OsJlYLa = OsJlYLa +1;
                    }
                    VstQ3qcS = VstQ3qcS +1;
                }
            }
            hFTD9HyR = hFTD9HyR + 1;
        }
    }
    printf ("%d\n", OsJlYLa);
    return (370 - 370);
}

