int main () {
    struct   ID {
        int aCscSz0dw;
        char qWAJClOP7a [10];
    }
    ID [(458 - 257)];
    int HZdYB7;
    int mSdO94yIb;
    int XvNuKPc;
    int avmK60;
    HZdYB7 = (935 - 935);
    scanf ("%d", &mSdO94yIb);
    for (XvNuKPc = 0; mSdO94yIb > XvNuKPc; XvNuKPc = XvNuKPc +1) {
        scanf ("%s", ID[XvNuKPc].qWAJClOP7a);
        scanf ("%d", &ID[XvNuKPc].aCscSz0dw);
    }
    {
        XvNuKPc = 0;
        while (mSdO94yIb > XvNuKPc) {
            if (ID[XvNuKPc].aCscSz0dw >= (959 - 899)) {
                ID[(810 - 710) + HZdYB7] = ID[XvNuKPc];
                HZdYB7 = HZdYB7 +1;
                ID[XvNuKPc].qWAJClOP7a[0] = '\0';
            }
            XvNuKPc = XvNuKPc +1;
        };
    }
    {
        XvNuKPc = 0;
        while (XvNuKPc < HZdYB7 -(635 - 634)) {
            for (avmK60 = 0; avmK60 < HZdYB7 -1 - XvNuKPc; avmK60 = avmK60 + 1) {
                if (ID[100 + avmK60].aCscSz0dw < ID[avmK60 + (1034 - 933)].aCscSz0dw) {
                    ID[200] = ID[100 + avmK60];
                    ID[100 + avmK60] = ID[avmK60 + 101];
                    ID[avmK60 + 101] = ID[200];
                };
            }
            XvNuKPc = XvNuKPc +1;
        };
    }
    for (XvNuKPc = 0; HZdYB7 > XvNuKPc; XvNuKPc = XvNuKPc +1) {
        printf ("%s\n", ID[100 + XvNuKPc].qWAJClOP7a);
    }
    for (XvNuKPc = 0; XvNuKPc < mSdO94yIb; XvNuKPc = XvNuKPc +1) {
        if (ID[XvNuKPc].qWAJClOP7a[0] != '\0')
            printf ("%s\n", ID[XvNuKPc].qWAJClOP7a);
    }
    return 0;
}

