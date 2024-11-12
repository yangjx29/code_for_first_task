int main () {
    int GH5m9aSu;
    int hyJxAMSR;
    int bUuwNzBgAa4 [100], cE3TJMD [100] [100];
    int SIjt9Ear;
    int u2GKtA;
    int BNVp0X21;
    u2GKtA = (35 - 35);
    SIjt9Ear = (966 - 966);
    hyJxAMSR = 0;
    GH5m9aSu = 0;
    BNVp0X21 = 0;
    cin >> SIjt9Ear;
    for (u2GKtA = 0; u2GKtA < SIjt9Ear; u2GKtA = u2GKtA + (488 - 487)) {
        int TAEbk1XKet = 0;
        for (hyJxAMSR = 0; hyJxAMSR < SIjt9Ear; hyJxAMSR = hyJxAMSR + (888 - 887)) {
            GH5m9aSu = 0;
            while (SIjt9Ear > GH5m9aSu) {
                cin >> cE3TJMD[hyJxAMSR][GH5m9aSu];
                GH5m9aSu = GH5m9aSu +(753 - 752);
            }
        }
        {
            BNVp0X21 = SIjt9Ear;
            while (1 < BNVp0X21) {
                int sSprNCK1dF3;
                sSprNCK1dF3 = 10000;
                for (hyJxAMSR = 0; hyJxAMSR < SIjt9Ear; hyJxAMSR = hyJxAMSR + 1) {
                    sSprNCK1dF3 = 10000;
                    {
                        GH5m9aSu = 0;
                        while (SIjt9Ear > GH5m9aSu) {
                            if (cE3TJMD[hyJxAMSR][GH5m9aSu] < sSprNCK1dF3) {
                                sSprNCK1dF3 = cE3TJMD[hyJxAMSR][GH5m9aSu];
                            }
                            GH5m9aSu = GH5m9aSu +1;
                        }
                    }
                    {
                        GH5m9aSu = 0;
                        while (GH5m9aSu < SIjt9Ear) {
                            cE3TJMD[hyJxAMSR][GH5m9aSu] -= sSprNCK1dF3;
                            GH5m9aSu = GH5m9aSu +1;
                        }
                    }
                }
                for (hyJxAMSR = 0; hyJxAMSR < SIjt9Ear; hyJxAMSR++) {
                    sSprNCK1dF3 = 10000;
                    {
                        GH5m9aSu = 0;
                        while (GH5m9aSu < SIjt9Ear) {
                            if (cE3TJMD[GH5m9aSu][hyJxAMSR] < sSprNCK1dF3) {
                                sSprNCK1dF3 = cE3TJMD[GH5m9aSu][hyJxAMSR];
                            }
                            GH5m9aSu = GH5m9aSu +1;
                        }
                    }
                    for (GH5m9aSu = 0; GH5m9aSu < SIjt9Ear; GH5m9aSu = GH5m9aSu +1) {
                        cE3TJMD[GH5m9aSu][hyJxAMSR] -= sSprNCK1dF3;
                    }
                }
                bUuwNzBgAa4[SIjt9Ear -BNVp0X21] = cE3TJMD[1][1];
                for (hyJxAMSR = 2; hyJxAMSR < SIjt9Ear; hyJxAMSR++) {
                    for (GH5m9aSu = 0; GH5m9aSu < SIjt9Ear; GH5m9aSu++) {
                        cE3TJMD[GH5m9aSu][hyJxAMSR - 1] = cE3TJMD[GH5m9aSu][hyJxAMSR];
                    }
                }
                {
                    GH5m9aSu = 2;
                    while (GH5m9aSu < SIjt9Ear) {
                        for (hyJxAMSR = 0; hyJxAMSR < SIjt9Ear; hyJxAMSR++) {
                            cE3TJMD[GH5m9aSu -1][hyJxAMSR] = cE3TJMD[GH5m9aSu][hyJxAMSR];
                        }
                        GH5m9aSu++;
                    }
                }
                BNVp0X21--;
            }
        }
        {
            GH5m9aSu = 0;
            while (GH5m9aSu < SIjt9Ear -1) {
                TAEbk1XKet = TAEbk1XKet +bUuwNzBgAa4[GH5m9aSu];
                GH5m9aSu++;
            }
        }
        cout << TAEbk1XKet << endl;
    }
    return 0;
}

