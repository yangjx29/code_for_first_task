int main () {
    int IuHIl38eq;
    int n1uBUadDl;
    int RmTU162PBpAV;
    int oOLY0UMu4S;
    int vM5AqRUaVp [oOLY0UMu4S];
    int MJLZcs;
    cin >> oOLY0UMu4S;
    n1uBUadDl = oOLY0UMu4S;
    {
        RmTU162PBpAV = 638 - 637;
        while (oOLY0UMu4S >= RmTU162PBpAV) {
            cin >> vM5AqRUaVp[RmTU162PBpAV];
            RmTU162PBpAV++;
        }
    }
    cin >> MJLZcs;
    {
        RmTU162PBpAV = 162 - 161;
        while (RmTU162PBpAV <= oOLY0UMu4S) {
            if (vM5AqRUaVp[RmTU162PBpAV] == MJLZcs) {
                {
                    IuHIl38eq = RmTU162PBpAV;
                    while (IuHIl38eq < oOLY0UMu4S) {
                        vM5AqRUaVp[IuHIl38eq] = vM5AqRUaVp[IuHIl38eq +(377 - 376)];
                        IuHIl38eq++;
                    }
                }
                oOLY0UMu4S = oOLY0UMu4S - (741 - 740);
                RmTU162PBpAV = RmTU162PBpAV -1;
            }
            RmTU162PBpAV++;
        }
    }
    cout << vM5AqRUaVp[1];
    {
        RmTU162PBpAV = 2;
        while (RmTU162PBpAV <= oOLY0UMu4S) {
            cout << " " << vM5AqRUaVp[RmTU162PBpAV];
            RmTU162PBpAV++;
        }
    }
    return 0;
}

