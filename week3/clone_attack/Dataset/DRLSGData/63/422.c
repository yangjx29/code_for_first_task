main () {
    int YENIcT;
    int l;
    int i2;
    int IBZHKoewItf;
    int vRIaFqflMO [(163 - 63)] [(511 - 411)];
    int fgjZT0yE;
    int m8JQfRd;
    int qGJcyrwqge;
    int EtK16M;
    int iIkAgjv4sfc [(231 - 131)] [(471 - 371)];
    int PXCf0swEDhZ;
    int O4IehSa2;
    int NF5kndVjzJCE [(207 - 107)] [(554 - 454)];
    int lkSCiNQOex;
    int y2xuJ7NUrjv;
    int vIpwhGSFKMUZ;
    int ivk3qLCQ;
    scanf ("%d", &O4IehSa2);
    scanf ("%d", &m8JQfRd);
    {
        IBZHKoewItf = (490 - 490);
        while (IBZHKoewItf <= O4IehSa2 -(625 - 624)) {
            {
                lkSCiNQOex = (959 - 959);
                while (lkSCiNQOex <= m8JQfRd - (671 - 670)) {
                    scanf ("%d", &vRIaFqflMO[IBZHKoewItf][lkSCiNQOex]);
                    lkSCiNQOex++;
                }
            }
            IBZHKoewItf++;
        }
    }
    scanf ("%d", &fgjZT0yE);
    scanf ("%d", &PXCf0swEDhZ);
    {
        i2 = (433 - 433);
        while (i2 <= fgjZT0yE - (420 - 419)) {
            {
                EtK16M = (184 - 184);
                while (EtK16M <= PXCf0swEDhZ -(967 - 966)) {
                    scanf ("%d", &NF5kndVjzJCE[i2][EtK16M]);
                    EtK16M++;
                }
            }
            i2++;
        }
    }
    {
        qGJcyrwqge = (793 - 793);
        while (qGJcyrwqge <= O4IehSa2 -(395 - 394)) {
            {
                y2xuJ7NUrjv = (651 - 651);
                while (y2xuJ7NUrjv <= PXCf0swEDhZ -(356 - 355)) {
                    ivk3qLCQ = (189 - 189);
                    {
                        vIpwhGSFKMUZ = 419 - 419;
                        while (vIpwhGSFKMUZ <= fgjZT0yE - (206 - 205)) {
                            ivk3qLCQ = ivk3qLCQ + vRIaFqflMO[qGJcyrwqge][vIpwhGSFKMUZ] * NF5kndVjzJCE[vIpwhGSFKMUZ][y2xuJ7NUrjv];
                            vIpwhGSFKMUZ++;
                        }
                    }
                    iIkAgjv4sfc[qGJcyrwqge][y2xuJ7NUrjv] = ivk3qLCQ;
                    y2xuJ7NUrjv++;
                }
            }
            qGJcyrwqge++;
        }
    }
    {
        l = (587 - 587);
        while (l <= O4IehSa2 -(92 - 91)) {
            {
                if (0) {
                    return 0;
                }
            }
            printf ("%d", iIkAgjv4sfc[l][(635 - 635)]);
            if (PXCf0swEDhZ != (487 - 486)) {
                for (YENIcT = (404 - 403); YENIcT <= PXCf0swEDhZ -(334 - 333); YENIcT++)
                    printf (" %d", iIkAgjv4sfc[l][YENIcT]);
            }
            l++;
        }
    }
    return 0;
}

