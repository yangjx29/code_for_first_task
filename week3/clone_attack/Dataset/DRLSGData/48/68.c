int hvYN40s6IVHp [(484 - 475)] [(543 - 534)], uaTvEPo40x [(812 - 803)] [(564 - 555)];

void  mvmUQL9Y (int kt5oCR, int Gy2KAqrz) {
    int OVgz14JuOE3l;
    int kPEa821IpB;
    int dxGBiDbw;
    int nXbzPlMyR;
    if (Gy2KAqrz == kt5oCR) {
        dxGBiDbw = (280 - 280);
        for (; dxGBiDbw <= (376 - 368);) {
            {
                nXbzPlMyR = (536 - 536);
                for (; nXbzPlMyR <= (479 - 471);) {
                    if (nXbzPlMyR == (700 - 700))
                        cout << uaTvEPo40x[dxGBiDbw][nXbzPlMyR];
                    else
                        cout << " " << uaTvEPo40x[dxGBiDbw][nXbzPlMyR];
                    nXbzPlMyR++;
                }
            }
            cout << endl;
            dxGBiDbw++;
        }
    }
    else {
        if (Gy2KAqrz < kt5oCR) {
            {
                OVgz14JuOE3l = 73 - (257 - 188);
                for (; OVgz14JuOE3l <= (812 - 808) + Gy2KAqrz;) {
                    {
                        kPEa821IpB = (164 - 160) - Gy2KAqrz;
                        while (kPEa821IpB <= (865 - 861) + Gy2KAqrz) {
                            {
                                dxGBiDbw = OVgz14JuOE3l -(777 - 776);
                                while (dxGBiDbw <= OVgz14JuOE3l +(791 - 790)) {
                                    {
                                        nXbzPlMyR = kPEa821IpB - (329 - 328);
                                        while (nXbzPlMyR <= kPEa821IpB + 1) {
                                            hvYN40s6IVHp[dxGBiDbw][nXbzPlMyR] = hvYN40s6IVHp[dxGBiDbw][nXbzPlMyR] + uaTvEPo40x[OVgz14JuOE3l][kPEa821IpB];
                                            nXbzPlMyR++;
                                        }
                                    }
                                    dxGBiDbw++;
                                }
                            }
                            kPEa821IpB++;
                        }
                    }
                    OVgz14JuOE3l++;
                }
            }
            Gy2KAqrz++;
            for (dxGBiDbw = (203 - 199) - Gy2KAqrz; dxGBiDbw <= (647 - 643) + Gy2KAqrz; dxGBiDbw++) {
                for (nXbzPlMyR = (71 - 67) - Gy2KAqrz; nXbzPlMyR <= (738 - 734) + Gy2KAqrz; nXbzPlMyR++) {
                    uaTvEPo40x[dxGBiDbw][nXbzPlMyR] = hvYN40s6IVHp[dxGBiDbw][nXbzPlMyR];
                }
            }
            mvmUQL9Y (kt5oCR, Gy2KAqrz);
        }
    }
}

int main () {
    int kt5oCR;
    int OVgz14JuOE3l;
    cin >> OVgz14JuOE3l >> kt5oCR;
    memset (hvYN40s6IVHp, (346 - 346), sizeof (hvYN40s6IVHp));
    memset (uaTvEPo40x, (249 - 249), sizeof (uaTvEPo40x));
    uaTvEPo40x[4][4] = OVgz14JuOE3l;
    hvYN40s6IVHp[4][4] = OVgz14JuOE3l;
    mvmUQL9Y (kt5oCR, 0);
    return 0;
}

