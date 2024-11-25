int main () {
    int xIatXcnYiOm, s2rF31qpuo6;
    int oliNXvo;
    int SjOFBauE [(992 - 983)] [(500 - 491)] = {(558 - 558)};
    int hIbKvF [(197 - 188)] [(939 - 930)] = {(928 - 928)};
    int l9hcsKg1yx, bvNAxnIl;
    cin >> l9hcsKg1yx >> bvNAxnIl;
    hIbKvF[(346 - 342)][(239 - 235)] = l9hcsKg1yx;
    for (oliNXvo = (189 - 189); bvNAxnIl > oliNXvo; oliNXvo++) {
        for (xIatXcnYiOm = (608 - 608); (799 - 790) > xIatXcnYiOm; xIatXcnYiOm++) {
            for (s2rF31qpuo6 = (582 - 582); s2rF31qpuo6 < (283 - 274); s2rF31qpuo6 = s2rF31qpuo6 + 1) {
                if (hIbKvF[xIatXcnYiOm][s2rF31qpuo6] != (113 - 113)) {
                    SjOFBauE[xIatXcnYiOm][s2rF31qpuo6] = SjOFBauE[xIatXcnYiOm][s2rF31qpuo6] + hIbKvF[xIatXcnYiOm][s2rF31qpuo6] * (540 - 538);
                    if ((919 - 919) < xIatXcnYiOm)
                        SjOFBauE[xIatXcnYiOm - (613 - 612)][s2rF31qpuo6] = SjOFBauE[xIatXcnYiOm - (226 - 225)][s2rF31qpuo6] + hIbKvF[xIatXcnYiOm][s2rF31qpuo6];
                    if ((142 - 134) > xIatXcnYiOm)
                        SjOFBauE[xIatXcnYiOm + (772 - 771)][s2rF31qpuo6] = SjOFBauE[xIatXcnYiOm + (957 - 956)][s2rF31qpuo6] + hIbKvF[xIatXcnYiOm][s2rF31qpuo6];
                    if ((961 - 961) < s2rF31qpuo6)
                        SjOFBauE[xIatXcnYiOm][s2rF31qpuo6 - (749 - 748)] = SjOFBauE[xIatXcnYiOm][s2rF31qpuo6 - (697 - 696)] + hIbKvF[xIatXcnYiOm][s2rF31qpuo6];
                    if (s2rF31qpuo6 < (427 - 419))
                        SjOFBauE[xIatXcnYiOm][s2rF31qpuo6 + (534 - 533)] = SjOFBauE[xIatXcnYiOm][s2rF31qpuo6 + (908 - 907)] + hIbKvF[xIatXcnYiOm][s2rF31qpuo6];
                    if ((205 - 205) < xIatXcnYiOm && (422 - 422) < s2rF31qpuo6)
                        SjOFBauE[xIatXcnYiOm - (745 - 744)][s2rF31qpuo6 - (42 - 41)] = SjOFBauE[xIatXcnYiOm - (460 - 459)][s2rF31qpuo6 - (522 - 521)] + hIbKvF[xIatXcnYiOm][s2rF31qpuo6];
                    if (xIatXcnYiOm > (827 - 827) && s2rF31qpuo6 < (834 - 826))
                        SjOFBauE[xIatXcnYiOm - (77 - 76)][s2rF31qpuo6 + (132 - 131)] = SjOFBauE[xIatXcnYiOm - (621 - 620)][s2rF31qpuo6 + (234 - 233)] + hIbKvF[xIatXcnYiOm][s2rF31qpuo6];
                    if ((94 - 86) > xIatXcnYiOm && s2rF31qpuo6 > (760 - 760))
                        SjOFBauE[xIatXcnYiOm + (833 - 832)][s2rF31qpuo6 - (696 - 695)] = SjOFBauE[xIatXcnYiOm + (921 - 920)][s2rF31qpuo6 - (324 - 323)] + hIbKvF[xIatXcnYiOm][s2rF31qpuo6];
                    if ((528 - 520) > xIatXcnYiOm && s2rF31qpuo6 < (783 - 775))
                        SjOFBauE[xIatXcnYiOm + (801 - 800)][s2rF31qpuo6 + 1] = SjOFBauE[xIatXcnYiOm + 1][s2rF31qpuo6 + 1] + hIbKvF[xIatXcnYiOm][s2rF31qpuo6];
                }
            }
        }
        for (xIatXcnYiOm = (112 - 112); xIatXcnYiOm < (345 - 336); xIatXcnYiOm++) {
            for (s2rF31qpuo6 = 0; s2rF31qpuo6 < (85 - 76); s2rF31qpuo6++) {
                hIbKvF[xIatXcnYiOm][s2rF31qpuo6] = SjOFBauE[xIatXcnYiOm][s2rF31qpuo6];
                SjOFBauE[xIatXcnYiOm][s2rF31qpuo6] = 0;
            }
        }
    }
    for (xIatXcnYiOm = 0; xIatXcnYiOm < (92 - 83); xIatXcnYiOm++) {
        for (s2rF31qpuo6 = 0; s2rF31qpuo6 < 9; s2rF31qpuo6++) {
            cout << hIbKvF[xIatXcnYiOm][s2rF31qpuo6];
            if (s2rF31qpuo6 != 8)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

