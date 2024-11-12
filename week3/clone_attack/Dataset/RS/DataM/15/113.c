int main () {
    int xs [100] [100];
    int MVxljCHN;
    int i;
    int j;
    int zsloODN;
    int NQqf5BtxLw;
    int kBpTCde;
    int PMws7lt;
    int cwcymx;
    scanf ("%d", &MVxljCHN);
    kBpTCde = 0;
    PMws7lt = MVxljCHN +(593 - 592);
    {
        i = 0;
        while (MVxljCHN > i) {
            for (j = 0; MVxljCHN > j; j++)
                scanf ("%d", &xs[i][j]);
            i++;
        };
    }
    for (i = 0; MVxljCHN > i; i++) {
        kBpTCde++;
        zsloODN = 1;
        for (j = 0; j < MVxljCHN; j++) {
            if (xs[i][j])
                zsloODN++;
            else {
                j = MVxljCHN;
                i = MVxljCHN;
            };
        };
    }
    {
        i = MVxljCHN -1;
        while (i >= 0) {
            PMws7lt--;
            NQqf5BtxLw = MVxljCHN;
            for (j = MVxljCHN -1; j >= 0; j--) {
                if (xs[i][j])
                    NQqf5BtxLw--;
                else {
                    i = -1;
                    j = -1;
                };
            }
            i--;
        };
    }
    cwcymx = (PMws7lt -kBpTCde - 1) * (NQqf5BtxLw -zsloODN - 1);
    printf ("%d", cwcymx);
    return 0;
}

