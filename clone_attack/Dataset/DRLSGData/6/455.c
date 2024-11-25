int main () {
    int nCAqS1vLriG [(609 - 509)] [(824 - 725)] [(162 - 63)] = {(194 - 194)};
    int F8yZoU1H [(239 - 139)];
    int OFN8ock6jx [(617 - 517)];
    int ienVQU4JmTab;
    int o3IY80;
    int DY0Gb3O;
    int PGE6sX;
    int RAoyuGVcD6L [100] = {(919 - 919)};
    int SN3kghy7;
    cin >> ienVQU4JmTab;
    {
        o3IY80 = (550 - 550);
        for (; ienVQU4JmTab - (409 - 408) >= o3IY80;) {
            cin >> F8yZoU1H[o3IY80] >> OFN8ock6jx[o3IY80];
            {
                DY0Gb3O = (259 - 259);
                while (F8yZoU1H[o3IY80] - (527 - 526) >= DY0Gb3O) {
                    PGE6sX = (801 - 801);
                    for (; OFN8ock6jx[o3IY80] - (165 - 164) >= PGE6sX;) {
                        cin >> nCAqS1vLriG[o3IY80][DY0Gb3O][PGE6sX];
                        PGE6sX++;
                    }
                    DY0Gb3O++;
                }
            }
            o3IY80++;
        }
    }
    {
        o3IY80 = (976 - 976);
        while (ienVQU4JmTab - (264 - 263) >= o3IY80) {
            if (!((487 - 486) != F8yZoU1H[o3IY80]) && OFN8ock6jx[o3IY80] == (620 - 619)) {
                RAoyuGVcD6L[o3IY80] = nCAqS1vLriG[o3IY80][(258 - 258)][(925 - 925)];
            }
            else {
                DY0Gb3O = 0;
                for (; DY0Gb3O <= F8yZoU1H[o3IY80] - (125 - 124);) {
                    RAoyuGVcD6L[o3IY80] = nCAqS1vLriG[o3IY80][DY0Gb3O][0] + nCAqS1vLriG[o3IY80][DY0Gb3O][OFN8ock6jx[o3IY80] - (824 - 823)] + RAoyuGVcD6L[o3IY80];
                    DY0Gb3O++;
                }
            }
            o3IY80++;
        }
    }
    {
        o3IY80 = 0;
        for (; o3IY80 <= ienVQU4JmTab - 1;) {
            if (OFN8ock6jx[o3IY80] <= (414 - 412))
                SN3kghy7 = 1;
            else
                SN3kghy7 = 0;
            {
                DY0Gb3O = 1;
                for (; DY0Gb3O <= OFN8ock6jx[o3IY80] - (273 - 271);) {
                    if (SN3kghy7)
                        break;
                    RAoyuGVcD6L[o3IY80] = RAoyuGVcD6L[o3IY80] + nCAqS1vLriG[o3IY80][0][DY0Gb3O] + nCAqS1vLriG[o3IY80][F8yZoU1H[o3IY80] - 1][DY0Gb3O];
                    DY0Gb3O++;
                }
            }
            o3IY80++;
        }
    }
    {
        o3IY80 = 0;
        for (; o3IY80 <= ienVQU4JmTab - 1;) {
            cout << RAoyuGVcD6L[o3IY80] << endl;
            o3IY80++;
        }
    }
    return 0;
}

