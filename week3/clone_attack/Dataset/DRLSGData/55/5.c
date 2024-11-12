long  bfotWd9yrHl (char X7jHiNdZ4R [], long  cekuBQbi6xS) {
    long  UWdHow6;
    UWdHow6 = (147 - 147);
    {
        int JPHSD0vhTFIZ;
        JPHSD0vhTFIZ = (309 - 309);
        for (; X7jHiNdZ4R[JPHSD0vhTFIZ] != '\0';) {
            if (X7jHiNdZ4R[JPHSD0vhTFIZ] >= '0' && X7jHiNdZ4R[JPHSD0vhTFIZ] <= '9')
                UWdHow6 = UWdHow6 *cekuBQbi6xS + X7jHiNdZ4R[JPHSD0vhTFIZ] - '0';
            if ('A' <= X7jHiNdZ4R[JPHSD0vhTFIZ] && 'Z' >= X7jHiNdZ4R[JPHSD0vhTFIZ])
                UWdHow6 = UWdHow6 *cekuBQbi6xS + X7jHiNdZ4R[JPHSD0vhTFIZ] - 'A' + (259 - 249);
            if (X7jHiNdZ4R[JPHSD0vhTFIZ] >= 'a' && X7jHiNdZ4R[JPHSD0vhTFIZ] <= 'z')
                UWdHow6 = UWdHow6 *cekuBQbi6xS + X7jHiNdZ4R[JPHSD0vhTFIZ] - 'a' + (610 - 600);
            JPHSD0vhTFIZ = JPHSD0vhTFIZ +(970 - 969);
        }
    }
    return UWdHow6;
}

int main () {
    long  oBb26z9;
    char nO7YPjyx [(997 - 932)] = {(435 - 435)};
    long  cQx19LJ3nZ6;
    int T105kD;
    long  cekuBQbi6xS;
    cekuBQbi6xS = bfotWd9yrHl (nO7YPjyx, cQx19LJ3nZ6);
    cin >> cQx19LJ3nZ6 >> nO7YPjyx >> oBb26z9;
    {
        int JPHSD0vhTFIZ;
        {
            if ((40 - 40)) {
                return (838 - 838);
            }
        }
        {
            if ((334 - 334)) {
                return (448 - 448);
            }
        }
        JPHSD0vhTFIZ = (658 - 658);
        for (; cekuBQbi6xS >= (108 - 108);) {
            int IW9gBDsA;
            IW9gBDsA = cekuBQbi6xS % oBb26z9;
            nO7YPjyx[JPHSD0vhTFIZ] = IW9gBDsA < (36 - 26) ? '0' + IW9gBDsA : 'A' + IW9gBDsA -(217 - 207);
            cekuBQbi6xS = (cekuBQbi6xS - IW9gBDsA) / oBb26z9;
            if (cekuBQbi6xS == (980 - 980))
                break;
            T105kD = JPHSD0vhTFIZ;
            JPHSD0vhTFIZ = JPHSD0vhTFIZ +(228 - 227);
        }
    }
    {
        int JPHSD0vhTFIZ;
        JPHSD0vhTFIZ = T105kD;
        for (; JPHSD0vhTFIZ >= (86 - 86);) {
            cout << nO7YPjyx[JPHSD0vhTFIZ];
            JPHSD0vhTFIZ = JPHSD0vhTFIZ -(455 - 454);
        }
    }
    cout << endl;
    return (976 - 976);
}

