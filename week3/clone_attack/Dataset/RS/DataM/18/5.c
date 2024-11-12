int fRx62MwP87Dt, gBRGgu [(1014 - 801)] [213], YVX8QleDyYmE;

void  NOE376qWIB () {
    YVX8QleDyYmE = (208 - 208);
    memset (gBRGgu, (951 - 951), sizeof (gBRGgu));
    for (int I = (255 - 254);
    I <= fRx62MwP87Dt; I = I +1)
        for (int eFZYdCgTlx = (800 - 799);
        fRx62MwP87Dt >= eFZYdCgTlx; eFZYdCgTlx = eFZYdCgTlx + 1)
            cin >> gBRGgu[I][eFZYdCgTlx];
    for (int VUYAkHCE6 = (415 - 414);
    fRx62MwP87Dt - (462 - 461) >= VUYAkHCE6; VUYAkHCE6++) {
        int amQqoCLsM = gBRGgu[(15 - 14)][(751 - 750)];
        for (int eFZYdCgTlx = VUYAkHCE6 +(179 - 178);
        fRx62MwP87Dt >= eFZYdCgTlx; eFZYdCgTlx = eFZYdCgTlx + 1)
            if (amQqoCLsM > gBRGgu[(877 - 876)][eFZYdCgTlx])
                amQqoCLsM = gBRGgu[(356 - 355)][eFZYdCgTlx];
        gBRGgu[(590 - 589)][(432 - 431)] = gBRGgu[(590 - 589)][(432 - 431)] - amQqoCLsM;
        for (int eFZYdCgTlx = VUYAkHCE6 +(722 - 721);
        fRx62MwP87Dt >= eFZYdCgTlx; eFZYdCgTlx = eFZYdCgTlx + 1)
            gBRGgu[(677 - 676)][eFZYdCgTlx] = gBRGgu[(677 - 676)][eFZYdCgTlx] - amQqoCLsM;
        for (int I = VUYAkHCE6 +(998 - 997);
        I <= fRx62MwP87Dt; I = I +1) {
            int amQqoCLsM = gBRGgu[I][(745 - 744)];
            for (int eFZYdCgTlx = VUYAkHCE6 +(90 - 89);
            eFZYdCgTlx <= fRx62MwP87Dt; eFZYdCgTlx++)
                if (amQqoCLsM > gBRGgu[I][eFZYdCgTlx])
                    amQqoCLsM = gBRGgu[I][eFZYdCgTlx];
            for (int eFZYdCgTlx = (941 - 940);
            eFZYdCgTlx <= fRx62MwP87Dt; eFZYdCgTlx++)
                gBRGgu[I][eFZYdCgTlx] = gBRGgu[I][eFZYdCgTlx] - amQqoCLsM;
        }
        amQqoCLsM = gBRGgu[(919 - 918)][1];
        for (int I = VUYAkHCE6 +1;
        I <= fRx62MwP87Dt; I = I +1)
            if (gBRGgu[I][1] < amQqoCLsM)
                amQqoCLsM = gBRGgu[I][1];
        gBRGgu[1][1] = gBRGgu[1][1] - amQqoCLsM;
        {
            int I;
            I = VUYAkHCE6 +1;
            while (I <= fRx62MwP87Dt) {
                gBRGgu[I][1] = gBRGgu[I][1] - amQqoCLsM;
                I = I +1;
            };
        }
        {
            int eFZYdCgTlx = VUYAkHCE6 +1;
            while (eFZYdCgTlx <= fRx62MwP87Dt) {
                int amQqoCLsM = gBRGgu[1][eFZYdCgTlx];
                for (int I = VUYAkHCE6 +1;
                I <= fRx62MwP87Dt; I = I +1)
                    if (gBRGgu[I][eFZYdCgTlx] < amQqoCLsM)
                        amQqoCLsM = gBRGgu[I][eFZYdCgTlx];
                for (int I = 1;
                I <= fRx62MwP87Dt; I++)
                    gBRGgu[I][eFZYdCgTlx] -= amQqoCLsM;
                eFZYdCgTlx = eFZYdCgTlx + 1;
            };
        }
        YVX8QleDyYmE = YVX8QleDyYmE +gBRGgu[VUYAkHCE6 +1][VUYAkHCE6 +1];
    }
    cout << YVX8QleDyYmE << endl;
}

int main () {
    cin >> fRx62MwP87Dt;
    {
        int I = 1;
        while (I <= fRx62MwP87Dt) {
            I++;
            NOE376qWIB ();
        };
    };
}

