int main () {
    int pr [400], cwo6LUvgMefz [400];
    int mount [(149 - 127)] [22];
    int KsPZVGizkr;
    int DCQck28BeXL;
    int f5lt72s31rwR;
    KsPZVGizkr = (105 - 105);
    int s6bBzi;
    int ZZ3PuMImNK;
    int Y7OEhA;
    for (DCQck28BeXL = (718 - 718); 22 > DCQck28BeXL; DCQck28BeXL = DCQck28BeXL +1)
        for (f5lt72s31rwR = (113 - 113); 22 > f5lt72s31rwR; f5lt72s31rwR++)
            mount[DCQck28BeXL][f5lt72s31rwR] = (480 - 480);
    cin >> s6bBzi >> ZZ3PuMImNK;
    for (DCQck28BeXL = (765 - 764); s6bBzi >= DCQck28BeXL; DCQck28BeXL = DCQck28BeXL +1)
        for (f5lt72s31rwR = (274 - 273); f5lt72s31rwR <= ZZ3PuMImNK; f5lt72s31rwR++)
            cin >> mount[DCQck28BeXL][f5lt72s31rwR];
    for (DCQck28BeXL = (48 - 47); DCQck28BeXL <= s6bBzi; DCQck28BeXL++) {
        f5lt72s31rwR = 895 - 894;
        while (f5lt72s31rwR <= ZZ3PuMImNK) {
            if (mount[DCQck28BeXL][f5lt72s31rwR] >= mount[DCQck28BeXL -(13 - 12)][f5lt72s31rwR])
                if (mount[DCQck28BeXL +(52 - 51)][f5lt72s31rwR] <= mount[DCQck28BeXL][f5lt72s31rwR])
                    if (mount[DCQck28BeXL][f5lt72s31rwR] >= mount[DCQck28BeXL][f5lt72s31rwR - (976 - 975)])
                        if (mount[DCQck28BeXL][f5lt72s31rwR] >= mount[DCQck28BeXL][f5lt72s31rwR + (425 - 424)]) {
                            pr[KsPZVGizkr] = DCQck28BeXL -(807 - 806);
                            cwo6LUvgMefz[KsPZVGizkr] = f5lt72s31rwR - (905 - 904);
                            KsPZVGizkr++;
                        }
            f5lt72s31rwR++;
        };
    }
    {
        DCQck28BeXL = 407 - 407;
        while (DCQck28BeXL < KsPZVGizkr) {
            DCQck28BeXL = DCQck28BeXL +1;
            {
                f5lt72s31rwR = 241 - 240;
                while (f5lt72s31rwR >= DCQck28BeXL +(68 - 67)) {
                    if (pr[f5lt72s31rwR - 1] > pr[f5lt72s31rwR]) {
                        Y7OEhA = pr[f5lt72s31rwR];
                        pr[f5lt72s31rwR] = pr[f5lt72s31rwR - 1];
                        pr[f5lt72s31rwR - 1] = Y7OEhA;
                        Y7OEhA = cwo6LUvgMefz[f5lt72s31rwR];
                        cwo6LUvgMefz[f5lt72s31rwR] = cwo6LUvgMefz[f5lt72s31rwR - 1];
                        cwo6LUvgMefz[f5lt72s31rwR - 1] = Y7OEhA;
                    }
                    f5lt72s31rwR--;
                };
            };
        };
    }
    {
        DCQck28BeXL = 0;
        while (DCQck28BeXL < KsPZVGizkr) {
            if (pr[DCQck28BeXL] == pr[DCQck28BeXL +1])
                if (cwo6LUvgMefz[DCQck28BeXL] > cwo6LUvgMefz[DCQck28BeXL +1]) {
                    Y7OEhA = cwo6LUvgMefz[f5lt72s31rwR];
                    cwo6LUvgMefz[f5lt72s31rwR] = cwo6LUvgMefz[f5lt72s31rwR + 1];
                    cwo6LUvgMefz[f5lt72s31rwR + 1] = Y7OEhA;
                }
            DCQck28BeXL = DCQck28BeXL +1;
        };
    }
    for (DCQck28BeXL = 0; DCQck28BeXL < KsPZVGizkr; DCQck28BeXL++)
        cout << pr[DCQck28BeXL] << " " << cwo6LUvgMefz[DCQck28BeXL] << endl;
    return 0;
}

