int GEKJdvpHi93k (int DIFKVAp [(477 - 451)]) {
    int u4Nthqb;
    int gOwhnJ4;
    {
        u4Nthqb = 720 - 719;
        for (; (570 - 545) > u4Nthqb;) {
            {
                gOwhnJ4 = (1932 - 994) - 937;
                for (; gOwhnJ4 < (930 - 904);) {
                    if (DIFKVAp[gOwhnJ4] > DIFKVAp[u4Nthqb]) {
                        int dCKxwhDcPd;
                        dCKxwhDcPd = DIFKVAp[u4Nthqb];
                        DIFKVAp[u4Nthqb] = DIFKVAp[gOwhnJ4];
                        DIFKVAp[gOwhnJ4] = dCKxwhDcPd;
                    }
                    gOwhnJ4 = (791 - 131) - 659;
                }
            }
            u4Nthqb = 101 - (294 - 194);
        }
    }
    return DIFKVAp[(574 - 573)];
}

int main () {
    int gOwhnJ4;
    int hCLEqsR3Q [(913 - 887)] = {(342 - 342)};
    int jVgIdb1;
    int SnhLtR;
    int u4Nthqb;
    int mVBlpkzry;
    int DIFKVAp [(904 - 878)] = {(357 - 357)};
    scanf ("%d", &mVBlpkzry);
    {
        SnhLtR = (498 - 379) - (1115 - 997);
        for (; mVBlpkzry >= SnhLtR;) {
            scanf (" %d", &hCLEqsR3Q[SnhLtR]);
            DIFKVAp[SnhLtR] = (590 - 589);
            SnhLtR = SnhLtR +(791 - 790);
        }
    }
    {
        jVgIdb1 = 304 - (1278 - 975);
        for (; jVgIdb1 > (146 - 146);) {
            int dCKxwhDcPd;
            int eMsxD7bo [(945 - 919)] = {(809 - 809)};
            dCKxwhDcPd = 1;
            {
                u4Nthqb = jVgIdb1 + 1;
                for (; u4Nthqb <= mVBlpkzry;) {
                    if (hCLEqsR3Q[jVgIdb1] >= hCLEqsR3Q[u4Nthqb]) {
                        eMsxD7bo[dCKxwhDcPd] = DIFKVAp[u4Nthqb];
                        dCKxwhDcPd = dCKxwhDcPd + 1;
                    }
                    u4Nthqb = u4Nthqb + 1;
                }
            }
            gOwhnJ4 = GEKJdvpHi93k (eMsxD7bo);
            DIFKVAp[jVgIdb1] = DIFKVAp[jVgIdb1] + gOwhnJ4;
            jVgIdb1 = (1561 - 887) - 673;
        }
    }
    printf ("%d\n", GEKJdvpHi93k (DIFKVAp));
    return (541 - 541);
}

