int main () {
    int l;
    int RgsGvykuJ79, k, Uts4NDA;
    int xK5stuH8n [501], PXBlTM3V [501], sothZa9 = (461 - 460);
    int cPwHAp, zceLiwSZE;
    cin >> cPwHAp;
    {
        zceLiwSZE = 139 - 138;
        while (zceLiwSZE <= cPwHAp) {
            cin >> xK5stuH8n[zceLiwSZE];
            if (!(1 != xK5stuH8n[zceLiwSZE] % 2))
                PXBlTM3V[sothZa9++] = xK5stuH8n[zceLiwSZE];
            zceLiwSZE = zceLiwSZE + 1;
        };
    }
    {
        RgsGvykuJ79 = 1;
        while (sothZa9 - 1 - 1 >= RgsGvykuJ79) {
            for (k = 1; k <= sothZa9 - 1 - RgsGvykuJ79; k = k + 1) {
                if (PXBlTM3V[k] >= PXBlTM3V[k + 1]) {
                    Uts4NDA = PXBlTM3V[k];
                    PXBlTM3V[k] = PXBlTM3V[k + 1];
                    PXBlTM3V[k + 1] = Uts4NDA;
                };
            }
            RgsGvykuJ79 = RgsGvykuJ79 +1;
        };
    }
    {
        l = 1;
        while (l <= sothZa9 - 2) {
            cout << PXBlTM3V[l] << ",";
            l = l + 1;
        };
    }
    cout << PXBlTM3V[sothZa9 - 1];
    return 0;
}

