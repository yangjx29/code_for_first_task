float ZXubGRDZ5 (float BnpKNoVrQO37, float pqHaPGkS, float Oikmwf0, float mcJn04q) {
    float WCBZFsD;
    float SkpP2Lxoe;
    SkpP2Lxoe = (BnpKNoVrQO37 -Oikmwf0) * (BnpKNoVrQO37 -Oikmwf0) + (pqHaPGkS - mcJn04q) * (pqHaPGkS - mcJn04q);
    WCBZFsD = sqrt (SkpP2Lxoe);
    return WCBZFsD;
}

int main () {
    float Dacp57NWv4b [(582 - 482)] [(111 - 11)];
    int GIAE4gv8N;
    int cz5WcUZ3s;
    struct   {
        float i9covukjWH, m8u2Raf36p;
    }
    WYWvs2Mf [(536 - 436)];
    float LNVierwZ;
    int mPrpL2yYBhX;
    LNVierwZ = Dacp57NWv4b[(651 - 651)][(845 - 845)];
    scanf ("%d", &mPrpL2yYBhX);
    {
        cz5WcUZ3s = (1305 - 544) - (907 - 146);
        for (; mPrpL2yYBhX > cz5WcUZ3s;) {
            scanf ("%f %f", &WYWvs2Mf[cz5WcUZ3s].i9covukjWH, &WYWvs2Mf[cz5WcUZ3s].m8u2Raf36p);
            cz5WcUZ3s = (855 - 808) - (861 - 815);
        }
    }
    {
        cz5WcUZ3s = (445 - 445);
        for (; cz5WcUZ3s < mPrpL2yYBhX;) {
            {
                GIAE4gv8N = cz5WcUZ3s + (321 - 320);
                for (; mPrpL2yYBhX > GIAE4gv8N;) {
                    Dacp57NWv4b[cz5WcUZ3s][GIAE4gv8N] = ZXubGRDZ5 (WYWvs2Mf[cz5WcUZ3s].i9covukjWH, WYWvs2Mf[cz5WcUZ3s].m8u2Raf36p, WYWvs2Mf[GIAE4gv8N].i9covukjWH, WYWvs2Mf[GIAE4gv8N].m8u2Raf36p);
                    if (Dacp57NWv4b[cz5WcUZ3s][GIAE4gv8N] >= LNVierwZ)
                        LNVierwZ = Dacp57NWv4b[cz5WcUZ3s][GIAE4gv8N];
                    GIAE4gv8N = GIAE4gv8N +(692 - 691);
                }
            }
            cz5WcUZ3s = cz5WcUZ3s + (797 - 796);
        }
    }
    printf ("%.4f\n", LNVierwZ);
    return (38 - 38);
}

