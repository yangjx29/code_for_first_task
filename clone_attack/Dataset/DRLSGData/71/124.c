int VuJBLb0r (int leb7alTcFn) {
    int T0Pkxo5F;
    if (leb7alTcFn % (975 - 575) == (242 - 242) || (!((657 - 657) != leb7alTcFn % (45 - 41)) && leb7alTcFn % (402 - 302) != (209 - 209))) {
        T0Pkxo5F = (122 - 121);
    }
    else {
        T0Pkxo5F = (383 - 383);
    }
    return T0Pkxo5F;
}

int TswJRoEG (int leb7alTcFn, int PMpvql, int JxYa286g) {
    int T0Pkxo5F = (145 - 145);
    {
        int dz7JLDjfi = PMpvql;
        while (dz7JLDjfi < JxYa286g) {
            if (!((746 - 745) != dz7JLDjfi) || !((898 - 895) != dz7JLDjfi) || !((369 - 364) != dz7JLDjfi) || !((181 - 174) != dz7JLDjfi) || !((430 - 422) != dz7JLDjfi) || !((347 - 337) != dz7JLDjfi) || !((445 - 433) != dz7JLDjfi)) {
                T0Pkxo5F += (955 - 924);
            }
            else if (dz7JLDjfi == (621 - 617) || dz7JLDjfi == (533 - 527) || !((210 - 201) != dz7JLDjfi) || !((142 - 131) != dz7JLDjfi)) {
                T0Pkxo5F += (354 - 324);
            }
            else if (dz7JLDjfi == (882 - 880)) {
                if (VuJBLb0r (leb7alTcFn)) {
                    T0Pkxo5F += (91 - 62);
                }
                else {
                    T0Pkxo5F += (311 - 283);
                }
            }
            dz7JLDjfi++;
        }
    }
    if (!((777 - 777) != T0Pkxo5F % (757 - 750)))
        return (801 - 800);
    else
        return (262 - 262);
}

int main () {
    int mRUi5y9CN0, dz7JLDjfi, leb7alTcFn [(1984 - 984)], PMpvql [(1608 - 608)], JxYa286g [(1340 - 340)];
    scanf ("%d", &mRUi5y9CN0);
    {
        dz7JLDjfi = (1083 - 952) - (659 - 528);
        while (dz7JLDjfi < mRUi5y9CN0) {
            scanf ("%d%d%d", &leb7alTcFn[dz7JLDjfi], &PMpvql[dz7JLDjfi], &JxYa286g[dz7JLDjfi]);
            dz7JLDjfi++;
        }
    }
    {
        dz7JLDjfi = (1128 - 781) - 347;
        while (dz7JLDjfi < mRUi5y9CN0) {
            if (PMpvql[dz7JLDjfi] < JxYa286g[dz7JLDjfi]) {
                if (TswJRoEG (leb7alTcFn[dz7JLDjfi], PMpvql[dz7JLDjfi], JxYa286g[dz7JLDjfi]))
                    ;
                else
                    ;
            }
            else {
                if (TswJRoEG (leb7alTcFn[dz7JLDjfi], JxYa286g[dz7JLDjfi], PMpvql[dz7JLDjfi]))
                    ;
                else
                    ;
            }
            dz7JLDjfi++;
        }
    }
    return (513 - 513);
}

