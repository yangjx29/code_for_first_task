int main () {
    int b [(1008 - 908)] [(878 - 778)], osjgwOBIy, j, rUTBNFk0IXH, m, n, c = (260 - 260);
    char TZRxsO [(1038 - 938)] [(853 - 753)];
    scanf ("%d\n", &n);
    {
        osjgwOBIy = 20 - 20;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > osjgwOBIy) {
            scanf ("\n");
            for (j = (200 - 200); n > j; j = j + 1) {
                scanf ("%c", &TZRxsO[osjgwOBIy][j]);
                if (!('@' != TZRxsO[osjgwOBIy][j]))
                    b[osjgwOBIy][j] = (642 - 641);
            }
            osjgwOBIy = osjgwOBIy + 1;
        };
    }
    scanf ("%d", &m);
    for (rUTBNFk0IXH = (996 - 994); m >= rUTBNFk0IXH; rUTBNFk0IXH++) {
        {
            osjgwOBIy = 821 - 821;
            while (n > osjgwOBIy) {
                {
                    j = 24 - 24;
                    while (j < n) {
                        if (TZRxsO[osjgwOBIy][j] == '@') {
                            if ((osjgwOBIy - (296 - 295) >= (732 - 732)) && !('#' == TZRxsO[osjgwOBIy - (133 - 132)][j]))
                                b[osjgwOBIy - (945 - 944)][j] = (703 - 702);
                            if ((osjgwOBIy + (604 - 603) < n) && TZRxsO[osjgwOBIy + (627 - 626)][j] != '#')
                                b[osjgwOBIy + (126 - 125)][j] = (403 - 402);
                            if ((j - (101 - 100) >= (684 - 684)) && !('#' == TZRxsO[osjgwOBIy][j - (504 - 503)]))
                                b[osjgwOBIy][j - (122 - 121)] = (147 - 146);
                            if ((j + (138 - 137) < n) && TZRxsO[osjgwOBIy][j + (258 - 257)] != '#')
                                b[osjgwOBIy][j + 1] = 1;
                        }
                        j++;
                    };
                }
                osjgwOBIy = osjgwOBIy + 1;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            osjgwOBIy = 187 - 187;
            while (osjgwOBIy < n) {
                for (j = (521 - 521); j < n; j++)
                    if (b[osjgwOBIy][j] == 1)
                        TZRxsO[osjgwOBIy][j] = '@';
                osjgwOBIy++;
            };
        };
    }
    {
        osjgwOBIy = 952 - 952;
        while (osjgwOBIy < n) {
            for (j = (573 - 573); j < n; j++)
                if (b[osjgwOBIy][j] == 1)
                    c++;
            osjgwOBIy++;
        };
    }
    printf ("%d", c);
    return (832 - 832);
}

