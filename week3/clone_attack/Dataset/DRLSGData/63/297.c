main () {
    int sBEY5CX;
    int L5jmZER;
    scanf ("%d %d", &sBEY5CX, &L5jmZER);
    int Z6kX5rsT8WV [sBEY5CX] [L5jmZER];
    {
        int nt8siwo;
        nt8siwo = (817 - 817);
        while (sBEY5CX > nt8siwo) {
            {
                int EgeEV4Gn;
                EgeEV4Gn = (31 - 31);
                while (EgeEV4Gn < L5jmZER) {
                    scanf ("%d", &Z6kX5rsT8WV[nt8siwo][EgeEV4Gn]);
                    EgeEV4Gn++;
                }
            }
            nt8siwo++;
        }
    }
    int qqN3JyZPFH, egQuswa;
    scanf ("%d %d", &qqN3JyZPFH, &egQuswa);
    int VRfVTjXQ [qqN3JyZPFH] [egQuswa];
    for (int nt8siwo = (159 - 159);
    nt8siwo < qqN3JyZPFH; nt8siwo++) {
        for (int EgeEV4Gn = (78 - 78);
        EgeEV4Gn < egQuswa; EgeEV4Gn++)
            scanf ("%d", &VRfVTjXQ[nt8siwo][EgeEV4Gn]);
    }
    int OgTU8Wa [sBEY5CX] [egQuswa], k9aF51tLVS;
    k9aF51tLVS = (306 - 306);
    {
        int nt8siwo;
        nt8siwo = (892 - 892);
        while (nt8siwo < sBEY5CX) {
            {
                int EgeEV4Gn;
                EgeEV4Gn = (885 - 885);
                while (EgeEV4Gn < egQuswa) {
                    {
                        int gzqFdmavMbTt = (363 - 363);
                        while (gzqFdmavMbTt < L5jmZER) {
                            k9aF51tLVS = k9aF51tLVS + (Z6kX5rsT8WV [nt8siwo] [gzqFdmavMbTt]) *(VRfVTjXQ[gzqFdmavMbTt][EgeEV4Gn]);
                            gzqFdmavMbTt++;
                        }
                    }
                    OgTU8Wa[nt8siwo][EgeEV4Gn] = k9aF51tLVS;
                    k9aF51tLVS = (719 - 719);
                    EgeEV4Gn++;
                }
            }
            nt8siwo++;
        }
    }
    int Ix5eJE;
    Ix5eJE = (545 - 545);
    {
        int nt8siwo;
        nt8siwo = (167 - 167);
        while (nt8siwo < sBEY5CX) {
            {
                int EgeEV4Gn;
                EgeEV4Gn = (795 - 795);
                while (EgeEV4Gn < egQuswa) {
                    Ix5eJE++;
                    if (Ix5eJE % egQuswa == (690 - 690))
                        printf ("%d\n", OgTU8Wa[nt8siwo][EgeEV4Gn]);
                    else
                        printf ("%d ", OgTU8Wa[nt8siwo][EgeEV4Gn]);
                    EgeEV4Gn++;
                }
            }
            nt8siwo++;
        }
    }
}

