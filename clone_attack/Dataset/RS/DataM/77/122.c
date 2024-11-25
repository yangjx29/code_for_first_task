int FIRaX8tg [10000] = {(779 - 778)};
int IcWhNPtmwId7;
int cal (int FIRaX8tg []);

int main () {
    char XquB5gIFkhxp, AdiFylRB;
    int VB09nfMKURF;
    cal (FIRaX8tg);
    scanf ("%c", &XquB5gIFkhxp);
    for (VB09nfMKURF = (528 - 527); 10000 >= VB09nfMKURF; VB09nfMKURF = VB09nfMKURF +1) {
        scanf ("%c", &AdiFylRB);
        if (!('\n' != AdiFylRB)) {
            FIRaX8tg[VB09nfMKURF] = -1;
            IcWhNPtmwId7 = VB09nfMKURF;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            break;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(AdiFylRB != XquB5gIFkhxp))
            FIRaX8tg[VB09nfMKURF] = 1;
        else
            FIRaX8tg[VB09nfMKURF] = 0;
    }
    return 0;
}

int cal (int FIRaX8tg []) {
    int F2oyOc6AfTs, az58IingDZm;
    if (!(-1 != FIRaX8tg[0]))
        return 0;
    else {
        for (F2oyOc6AfTs = 0; F2oyOc6AfTs <= IcWhNPtmwId7; F2oyOc6AfTs = F2oyOc6AfTs +1) {
            if (FIRaX8tg[F2oyOc6AfTs] == 0) {
                for (az58IingDZm = F2oyOc6AfTs; az58IingDZm >= 0; az58IingDZm = az58IingDZm - 1) {
                    if (FIRaX8tg[az58IingDZm] == 1) {
                        cal (FIRaX8tg);
                        printf ("%d %d\n", az58IingDZm, F2oyOc6AfTs);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        FIRaX8tg[F2oyOc6AfTs] = -1;
                        FIRaX8tg[az58IingDZm] = -1;
                    };
                };
            };
        };
    }
    return 0;
}

