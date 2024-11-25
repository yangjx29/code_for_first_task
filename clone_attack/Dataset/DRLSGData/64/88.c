struct   sNpoVvC {
    int QUPlbHf;
    int VLoN9Ci [(392 - 389)];
    int hvAZ0zh;
    int l12FaoKiVB [(252 - 249)];
    float e0XRsNF;
}
gcdQTWiql7 [(423 - 378)];

void  main () {
    int r7lCret, WTCbSNhtxz, KgzjaErNT4B, m83FYHT9VM [(973 - 963)] [(833 - 830)], acNQfXiHL = (223 - 223);
    void  RB6H4qF (struct   sNpoVvC *dzymMbgwaPH5, struct   sNpoVvC *O6UOIWDZ);
    struct   sNpoVvC *Z8sKozRy3E = gcdQTWiql7;
    scanf ("%d", &r7lCret);
    {
        WTCbSNhtxz = (781 - 781);
        for (; WTCbSNhtxz < r7lCret;) {
            scanf ("%d%d%d", &m83FYHT9VM[WTCbSNhtxz][(593 - 593)], &m83FYHT9VM[WTCbSNhtxz][(128 - 127)], &m83FYHT9VM[WTCbSNhtxz][(1000 - 998)]);
            WTCbSNhtxz++;
        }
    }
    {
        WTCbSNhtxz = (772 - 772);
        for (; WTCbSNhtxz < r7lCret - (131 - 130);) {
            {
                KgzjaErNT4B = WTCbSNhtxz +(334 - 333);
                for (; KgzjaErNT4B < r7lCret;) {
                    float d1, NMENXzQJqIL, d3;
                    Z8sKozRy3E->QUPlbHf = WTCbSNhtxz;
                    Z8sKozRy3E->VLoN9Ci[(572 - 572)] = m83FYHT9VM[WTCbSNhtxz][(986 - 986)];
                    Z8sKozRy3E->VLoN9Ci[(500 - 499)] = m83FYHT9VM[WTCbSNhtxz][(106 - 105)];
                    Z8sKozRy3E->VLoN9Ci[(171 - 169)] = m83FYHT9VM[WTCbSNhtxz][(317 - 315)];
                    Z8sKozRy3E->hvAZ0zh = KgzjaErNT4B;
                    Z8sKozRy3E->l12FaoKiVB[(614 - 614)] = m83FYHT9VM[KgzjaErNT4B][(839 - 839)];
                    Z8sKozRy3E->l12FaoKiVB[(176 - 175)] = m83FYHT9VM[KgzjaErNT4B][(679 - 678)];
                    Z8sKozRy3E->l12FaoKiVB[(874 - 872)] = m83FYHT9VM[KgzjaErNT4B][(829 - 827)];
                    d1 = (float) m83FYHT9VM[WTCbSNhtxz][(767 - 767)] - m83FYHT9VM[KgzjaErNT4B][(818 - 818)];
                    NMENXzQJqIL = (float) m83FYHT9VM[WTCbSNhtxz][(696 - 695)] - m83FYHT9VM[KgzjaErNT4B][(468 - 467)];
                    d3 = (float) m83FYHT9VM[WTCbSNhtxz][2] - m83FYHT9VM[KgzjaErNT4B][2];
                    Z8sKozRy3E->e0XRsNF = sqrt (d1 * d1 + NMENXzQJqIL *NMENXzQJqIL+d3 * d3);
                    Z8sKozRy3E++;
                    KgzjaErNT4B++;
                }
            }
            {
                if ((557 - 557)) {
                    return (483 - 483);
                }
            }
            WTCbSNhtxz++;
        }
    }
    {
        WTCbSNhtxz = 0;
        for (; WTCbSNhtxz < r7lCret * (r7lCret - 1) / 2;) {
            {
                KgzjaErNT4B = 0;
                for (; KgzjaErNT4B < r7lCret * (r7lCret - 1) / 2;) {
                    if (gcdQTWiql7[KgzjaErNT4B].e0XRsNF < gcdQTWiql7[KgzjaErNT4B +1].e0XRsNF)
                        RB6H4qF (&gcdQTWiql7[KgzjaErNT4B], &gcdQTWiql7[KgzjaErNT4B +1]);
                    KgzjaErNT4B++;
                }
            }
            WTCbSNhtxz++;
        }
    }
    {
        WTCbSNhtxz = 0;
        Z8sKozRy3E = gcdQTWiql7;
        for (; WTCbSNhtxz < r7lCret * (r7lCret - 1) / 2;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", Z8sKozRy3E->VLoN9Ci[0], Z8sKozRy3E->VLoN9Ci[1], Z8sKozRy3E->VLoN9Ci[2], Z8sKozRy3E->l12FaoKiVB[0], Z8sKozRy3E->l12FaoKiVB[1], Z8sKozRy3E->l12FaoKiVB[2], Z8sKozRy3E->e0XRsNF);
            WTCbSNhtxz++;
            Z8sKozRy3E++;
        }
    }
}

void  RB6H4qF (struct   sNpoVvC *dzymMbgwaPH5, struct   sNpoVvC *O6UOIWDZ) {
    int GQyVNFwo;
    float rBPnuS;
    int WTCbSNhtxz;
    GQyVNFwo = dzymMbgwaPH5->QUPlbHf;
    dzymMbgwaPH5->QUPlbHf = O6UOIWDZ->QUPlbHf;
    O6UOIWDZ->QUPlbHf = GQyVNFwo;
    GQyVNFwo = dzymMbgwaPH5->hvAZ0zh;
    dzymMbgwaPH5->hvAZ0zh = O6UOIWDZ->hvAZ0zh;
    O6UOIWDZ->hvAZ0zh = GQyVNFwo;
    {
        WTCbSNhtxz = 0;
        for (; WTCbSNhtxz < 3;) {
            GQyVNFwo = dzymMbgwaPH5->VLoN9Ci[WTCbSNhtxz];
            dzymMbgwaPH5->VLoN9Ci[WTCbSNhtxz] = O6UOIWDZ->VLoN9Ci[WTCbSNhtxz];
            O6UOIWDZ->VLoN9Ci[WTCbSNhtxz] = GQyVNFwo;
            GQyVNFwo = dzymMbgwaPH5->l12FaoKiVB[WTCbSNhtxz];
            dzymMbgwaPH5->l12FaoKiVB[WTCbSNhtxz] = O6UOIWDZ->l12FaoKiVB[WTCbSNhtxz];
            O6UOIWDZ->l12FaoKiVB[WTCbSNhtxz] = GQyVNFwo;
            WTCbSNhtxz++;
        }
    }
    rBPnuS = dzymMbgwaPH5->e0XRsNF;
    dzymMbgwaPH5->e0XRsNF = O6UOIWDZ->e0XRsNF;
    O6UOIWDZ->e0XRsNF = rBPnuS;
}

