int main () {
    int Z2xPnIC, RbvMd2, rrDc2x6A, YmMhoJA, hALPueh [1000], f [1000], m, C9xjSmqo05Pz;
    char CEXce1LBTJ6A [1000], t [1000] [10];
    gets (CEXce1LBTJ6A);
    gets (CEXce1LBTJ6A);
    scanf ("%d", &Z2xPnIC);
    C9xjSmqo05Pz = 0;
    f[0] = 0;
    YmMhoJA = strlen (CEXce1LBTJ6A);
    for (RbvMd2 = 0; YmMhoJA -Z2xPnIC >= RbvMd2; RbvMd2++) {
        for (rrDc2x6A = 0; rrDc2x6A < Z2xPnIC; rrDc2x6A++)
            t[RbvMd2][rrDc2x6A] = CEXce1LBTJ6A[RbvMd2 +rrDc2x6A];
    }
    {
        RbvMd2 = 0;
        while (YmMhoJA -Z2xPnIC-1 >= RbvMd2) {
            if (t[RbvMd2][0] != '\0') {
                hALPueh[RbvMd2] = 1;
                for (rrDc2x6A = RbvMd2 +1; rrDc2x6A <= YmMhoJA -Z2xPnIC; rrDc2x6A++) {
                    if (strcmp (t[RbvMd2], t[rrDc2x6A]) == 0 && t[rrDc2x6A][0] != '\0') {
                        hALPueh[RbvMd2]++;
                        t[rrDc2x6A][0] = '\0';
                    }
                }
            }
            else
                hALPueh[RbvMd2] = 0;
            RbvMd2++;
        }
    }
    if (t[YmMhoJA -Z2xPnIC][0] != '\0')
        hALPueh[YmMhoJA -Z2xPnIC] = 1;
    else {
        hALPueh[YmMhoJA -Z2xPnIC] = 0;
    }
    m = hALPueh[0];
    {
        RbvMd2 = 1;
        while (RbvMd2 <= YmMhoJA -Z2xPnIC-1) {
            if (hALPueh[RbvMd2] > m) {
                C9xjSmqo05Pz = 0;
                m = hALPueh[RbvMd2];
                f[C9xjSmqo05Pz] = RbvMd2;
            }
            else {
                if (m == hALPueh[RbvMd2]) {
                    C9xjSmqo05Pz++;
                    f[C9xjSmqo05Pz] = RbvMd2;
                }
            }
            RbvMd2++;
        }
    }
    if (hALPueh[f[C9xjSmqo05Pz]] <= 1) {
    }
    else {
        printf ("%d\n", m);
        {
            RbvMd2 = 0;
            while (RbvMd2 <= C9xjSmqo05Pz) {
                printf ("%s\n", t[f[RbvMd2]]);
                RbvMd2++;
            }
        }
    }
    return 0;
}

