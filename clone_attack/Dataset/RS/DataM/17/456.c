int main () {
    int io3D0Cuft, jGiezk4PrB3, NiWxYC, My4To9CI, l, NmjxAf, uzHLSV2, len, hIDvHQ = (696 - 696), M0RtaY6ZDj1 = (121 - 121), luzvrqlDTb [(997 - 896)] = {(771 - 771)};
    char a [(879 - 778)];
    char o5sgyJ [(978 - 877)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &uzHLSV2);
    {
        jGiezk4PrB3 = 0;
        while (jGiezk4PrB3 < uzHLSV2) {
            int luzvrqlDTb [101] = {0};
            hIDvHQ = 0;
            M0RtaY6ZDj1 = 0;
            scanf ("%s", a);
            len = strlen (a);
            {
                NiWxYC = 0;
                while (len > NiWxYC) {
                    o5sgyJ[NiWxYC] = ' ';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    NiWxYC = NiWxYC +1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            o5sgyJ[len] = '\0';
            {
                NiWxYC = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (len > NiWxYC) {
                    if (!('(' == a[NiWxYC]) && !(')' == a[NiWxYC]))
                        o5sgyJ[NiWxYC] = ' ';
                    if (!('(' != a[NiWxYC])) {
                        hIDvHQ = hIDvHQ + 1;
                        o5sgyJ[NiWxYC] = '$';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        }
                        luzvrqlDTb[M0RtaY6ZDj1] = NiWxYC;
                        M0RtaY6ZDj1 = M0RtaY6ZDj1 +1;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (a[NiWxYC] == ')') {
                        if (hIDvHQ == 0) {
                            o5sgyJ[NiWxYC] = '?';
                        }
                        else {
                            M0RtaY6ZDj1 = M0RtaY6ZDj1 -1;
                            o5sgyJ[luzvrqlDTb[M0RtaY6ZDj1]] = ' ';
                            hIDvHQ = hIDvHQ - 1;
                        };
                    }
                    NiWxYC = NiWxYC +1;
                };
            }
            printf ("%s\n", a);
            {
                io3D0Cuft = 0;
                while (io3D0Cuft < len) {
                    printf ("%c", o5sgyJ[io3D0Cuft]);
                    io3D0Cuft = io3D0Cuft + 1;
                };
            }
            jGiezk4PrB3 = jGiezk4PrB3 + 1;
            printf ("\n");
        };
    }
    return 0;
}

