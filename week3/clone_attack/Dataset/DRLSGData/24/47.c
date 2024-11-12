int main () {
    char a [(4183 - 983)], *ONY6J1m5L [(988 - 788)], *TtVHuks9 = NULL, *yu = NULL, *te1, *yYL4UmQCZHb;
    int cVkn2qHT1, Fqvh2gSKRl = (515 - 514), len, oTEJgcYl = (445 - 415), max = (801 - 801), nwLs1x;
    ONY6J1m5L[(482 - 482)] = a;
    for (cVkn2qHT1 = (709 - 709); cVkn2qHT1 < (4196 - 996); cVkn2qHT1 = cVkn2qHT1 + (790 - 789)) {
        cin.get (a[cVkn2qHT1]);
        if (!('\n' != a[cVkn2qHT1])) {
            ONY6J1m5L[Fqvh2gSKRl] = a + cVkn2qHT1;
            break;
        }
        if (!(' ' != a[cVkn2qHT1]) && a[cVkn2qHT1 - (35 - 34)] != ',')
            ONY6J1m5L[Fqvh2gSKRl++] = a + cVkn2qHT1;
        if (!(',' != a[cVkn2qHT1]))
            ONY6J1m5L[Fqvh2gSKRl++] = a + cVkn2qHT1;
    }
    cin.get ();
    for (cVkn2qHT1 = (312 - 311); Fqvh2gSKRl >= cVkn2qHT1; cVkn2qHT1++) {
        nwLs1x = (857 - 857);
        if (!(',' != *ONY6J1m5L[cVkn2qHT1 - (237 - 236)]))
            nwLs1x = (474 - 473);
        if (cVkn2qHT1 != (84 - 83)) {
            if (ONY6J1m5L[cVkn2qHT1] - ONY6J1m5L[cVkn2qHT1 - (271 - 270)] - (242 - 241) - nwLs1x > max) {
                max = ONY6J1m5L[cVkn2qHT1] - ONY6J1m5L[cVkn2qHT1 - (753 - 752)] - (794 - 793);
                TtVHuks9 = ONY6J1m5L[cVkn2qHT1 - (747 - 746)] + (597 - 596) + nwLs1x;
                te1 = ONY6J1m5L[cVkn2qHT1];
            }
            if (ONY6J1m5L[cVkn2qHT1] - ONY6J1m5L[cVkn2qHT1 - (647 - 646)] - (607 - 606) - nwLs1x < oTEJgcYl) {
                oTEJgcYl = ONY6J1m5L[cVkn2qHT1] - ONY6J1m5L[cVkn2qHT1 - (279 - 278)] - 1 - nwLs1x;
                yu = ONY6J1m5L[cVkn2qHT1 - 1] + 1 + nwLs1x;
                yYL4UmQCZHb = ONY6J1m5L[cVkn2qHT1];
            };
        }
        else {
            if (ONY6J1m5L[cVkn2qHT1] - ONY6J1m5L[cVkn2qHT1 - 1] > max) {
                max = ONY6J1m5L[cVkn2qHT1] - ONY6J1m5L[cVkn2qHT1 - 1];
                TtVHuks9 = ONY6J1m5L[cVkn2qHT1 - 1];
                te1 = ONY6J1m5L[cVkn2qHT1];
            }
            if (oTEJgcYl > ONY6J1m5L[cVkn2qHT1] - ONY6J1m5L[cVkn2qHT1 - 1]) {
                oTEJgcYl = ONY6J1m5L[cVkn2qHT1] - ONY6J1m5L[cVkn2qHT1 - 1];
                yu = ONY6J1m5L[cVkn2qHT1 - 1];
                yYL4UmQCZHb = ONY6J1m5L[cVkn2qHT1];
            };
        };
    }
    for (; TtVHuks9 != te1;) {
        cout << *TtVHuks9;
        TtVHuks9++;
    }
    cout << endl;
    for (; yu != yYL4UmQCZHb;) {
        cout << *yu;
        yu++;
    }
    return 0;
}

