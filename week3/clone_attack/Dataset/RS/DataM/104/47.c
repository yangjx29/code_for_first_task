int len (int TWIAie) {
    int CZAgl0t376wh, h1LoksYWR = (441 - 441);
    {
        CZAgl0t376wh = 19 - 18;
        while ((900 - 890) >= CZAgl0t376wh) {
            if (!((576 - 576) == TWIAie)) {
                h1LoksYWR = h1LoksYWR + (285 - 284);
                TWIAie = (TWIAie -TWIAie % (874 - 872)) / (831 - 829);
            }
            else
                break;
            CZAgl0t376wh = CZAgl0t376wh +1;
        };
    }
    return h1LoksYWR;
}

int ch (int TWIAie, int fDGCLuKSsf5M) {
    int CZAgl0t376wh, n;
    n = len (TWIAie);
    for (CZAgl0t376wh = (969 - 968); n - fDGCLuKSsf5M >= CZAgl0t376wh; CZAgl0t376wh++) {
        TWIAie = (TWIAie -TWIAie % (314 - 312)) / (917 - 915);
    }
    return TWIAie;
}

int main () {
    int TWIAie;
    int fDGCLuKSsf5M;
    int m;
    int n;
    int CZAgl0t376wh;
    int lMRact1lFw;
    int xzvgb5oIm;
    int SWFYqJ7Qjsnr;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    };
    scanf ("%d %d", &TWIAie, &fDGCLuKSsf5M);
    m = len (TWIAie);
    n = len (fDGCLuKSsf5M);
    if (m > n)
        lMRact1lFw = n;
    else
        lMRact1lFw = m;
    {
        CZAgl0t376wh = lMRact1lFw;
        while (CZAgl0t376wh >= 1) {
            TWIAie = ch (TWIAie, CZAgl0t376wh);
            fDGCLuKSsf5M = ch (fDGCLuKSsf5M, CZAgl0t376wh);
            if (TWIAie == fDGCLuKSsf5M) {
                printf ("%d", TWIAie);
                break;
            }
            CZAgl0t376wh = CZAgl0t376wh -1;
        };
    }
    return 0;
}

