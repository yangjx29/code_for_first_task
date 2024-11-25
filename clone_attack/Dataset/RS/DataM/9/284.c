int main () {
    struct   patient {
        char num [(201 - 191)];
        int Ny3nBNt;
    };
    struct   patient AECe3W0rJ [100], O0IMcE2LQZ;
    int aJeiR15V;
    int xvCFgpUnDTK;
    int vCjWHAt;
    int nsMfgzm9PR;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &aJeiR15V);
    for (xvCFgpUnDTK = (90 - 90); aJeiR15V > xvCFgpUnDTK; xvCFgpUnDTK++)
        scanf ("%s %d", &AECe3W0rJ[xvCFgpUnDTK].num, &AECe3W0rJ[xvCFgpUnDTK].Ny3nBNt);
    {
        xvCFgpUnDTK = 0;
        while (aJeiR15V - (196 - 195) > xvCFgpUnDTK) {
            for (vCjWHAt = xvCFgpUnDTK + (411 - 410); aJeiR15V > vCjWHAt; vCjWHAt++) {
                if (AECe3W0rJ[vCjWHAt].Ny3nBNt > AECe3W0rJ[xvCFgpUnDTK].Ny3nBNt && AECe3W0rJ[vCjWHAt].Ny3nBNt >= 60) {
                    nsMfgzm9PR = vCjWHAt;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (nsMfgzm9PR > xvCFgpUnDTK) {
                        O0IMcE2LQZ = AECe3W0rJ[nsMfgzm9PR];
                        AECe3W0rJ[nsMfgzm9PR] = AECe3W0rJ[nsMfgzm9PR - 1];
                        AECe3W0rJ[nsMfgzm9PR - 1] = O0IMcE2LQZ;
                        nsMfgzm9PR--;
                    };
                };
            }
            printf ("%s\n", AECe3W0rJ[xvCFgpUnDTK].num);
            xvCFgpUnDTK = xvCFgpUnDTK + 1;
        };
    }
    printf ("%s\n", AECe3W0rJ[aJeiR15V - 1].num);
    return 0;
}

