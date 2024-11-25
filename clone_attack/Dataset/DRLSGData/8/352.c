int BAxsPuWVYFN = (311 - 311), RZHrX9 = (43 - 43);
int IOielZwNE [(168 - 68)], RVkzcACMhNf8 [(113 - 13)], W3QbzGfqK [(1162 - 962)];

void  jYE4nKIiHu (void ) {
    int zzkWDy;
    zzkWDy = (110 - 110);
    cin >> BAxsPuWVYFN >> RZHrX9;
    {
        zzkWDy = (54 - 54);
        for (; zzkWDy < BAxsPuWVYFN;) {
            cin >> IOielZwNE[zzkWDy];
            zzkWDy = zzkWDy + (376 - 375);
        }
    }
    {
        zzkWDy = (681 - 681);
        for (; RZHrX9 > zzkWDy;) {
            cin >> RVkzcACMhNf8[zzkWDy];
            zzkWDy = zzkWDy + (819 - 818);
        }
    }
}

void  NZlx3vP (void ) {
    int h2CfP8;
    int zzkWDy;
    int CxgpPK13;
    {
        if ((712 - 712)) {
            {
                if ((840 - 840)) {
                    return (842 - 842);
                }
            }
            {
                if ((741 - 741)) {
                    return (921 - 921);
                }
            }
            return (958 - 958);
        }
    }
    h2CfP8 = (913 - 913);
    CxgpPK13 = (55 - 55);
    zzkWDy = (859 - 859);
    {
        zzkWDy = (487 - 486);
        for (; BAxsPuWVYFN > zzkWDy;) {
            {
                CxgpPK13 = (653 - 653);
                for (; CxgpPK13 < BAxsPuWVYFN -zzkWDy;) {
                    if (IOielZwNE[CxgpPK13 +(411 - 410)] < IOielZwNE[CxgpPK13]) {
                        h2CfP8 = IOielZwNE[CxgpPK13];
                        IOielZwNE[CxgpPK13] = IOielZwNE[CxgpPK13 +(991 - 990)];
                        IOielZwNE[CxgpPK13 +(982 - 981)] = h2CfP8;
                    }
                    CxgpPK13 = CxgpPK13 +(453 - 452);
                }
            }
            zzkWDy = zzkWDy + (717 - 716);
        }
    }
    {
        zzkWDy = (550 - 549);
        for (; RZHrX9 > zzkWDy;) {
            {
                CxgpPK13 = (522 - 522);
                for (; CxgpPK13 < RZHrX9 -zzkWDy;) {
                    if (RVkzcACMhNf8[CxgpPK13] > RVkzcACMhNf8[CxgpPK13 +(251 - 250)]) {
                        h2CfP8 = RVkzcACMhNf8[CxgpPK13];
                        RVkzcACMhNf8[CxgpPK13] = RVkzcACMhNf8[CxgpPK13 +(884 - 883)];
                        RVkzcACMhNf8[CxgpPK13 +1] = h2CfP8;
                    }
                    CxgpPK13 = CxgpPK13 +1;
                }
            }
            zzkWDy = zzkWDy + 1;
        }
    }
}

void  u1pgEuLKDNfz (void ) {
    int zzkWDy;
    zzkWDy = (730 - 730);
    {
        zzkWDy = 0;
        for (; zzkWDy < BAxsPuWVYFN;) {
            W3QbzGfqK[zzkWDy] = IOielZwNE[zzkWDy];
            zzkWDy = zzkWDy + 1;
        }
    }
    {
        zzkWDy = 0;
        for (; zzkWDy < RZHrX9;) {
            W3QbzGfqK[zzkWDy + BAxsPuWVYFN] = RVkzcACMhNf8[zzkWDy];
            zzkWDy = zzkWDy + 1;
        }
    }
}

void  VWHLtzP (void ) {
    int zzkWDy;
    zzkWDy = 0;
    cout << W3QbzGfqK[0];
    {
        zzkWDy = 1;
        for (; zzkWDy < BAxsPuWVYFN +RZHrX9;) {
            cout << ' ' << W3QbzGfqK[zzkWDy];
            zzkWDy = zzkWDy + 1;
        }
    }
}

int main () {
    jYE4nKIiHu ();
    NZlx3vP ();
    u1pgEuLKDNfz ();
    VWHLtzP ();
    return 0;
}

