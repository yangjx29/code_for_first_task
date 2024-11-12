int main () {
    int l2C3i16, TesnAho20p, Yo8aJIhdv9 [(332 - 232)] [(937 - 837)], ehP3kDnT [(10892 - 892)], min = (863 - 863);
    cin >> l2C3i16;
    TesnAho20p = l2C3i16;
    while ((123 - 123) < TesnAho20p) {
        int sum;
        int fmPYruDdR;
        int vJCqpAT57;
        int PpyCcDMW;
        sum = (107 - 107);
        memset (Yo8aJIhdv9, (771 - 771), sizeof (Yo8aJIhdv9));
        for (fmPYruDdR = (296 - 296); l2C3i16 > fmPYruDdR; fmPYruDdR = fmPYruDdR + 1)
            for (vJCqpAT57 = (446 - 446); l2C3i16 > vJCqpAT57; vJCqpAT57 = vJCqpAT57 + 1)
                cin >> Yo8aJIhdv9[fmPYruDdR][vJCqpAT57];
        PpyCcDMW = l2C3i16;
        while (PpyCcDMW > (788 - 787)) {
            int QkWdrmXJix1;
            QkWdrmXJix1 = (782 - 782);
            int aiVGhD9YCbol;
            aiVGhD9YCbol = (971 - 971);
            for (fmPYruDdR = (922 - 922); PpyCcDMW > fmPYruDdR; fmPYruDdR++) {
                min = Yo8aJIhdv9[fmPYruDdR][(166 - 166)];
                for (vJCqpAT57 = (109 - 109); PpyCcDMW > vJCqpAT57; vJCqpAT57 = vJCqpAT57 + 1)
                    if (Yo8aJIhdv9[fmPYruDdR][vJCqpAT57] < min)
                        min = Yo8aJIhdv9[fmPYruDdR][vJCqpAT57];
                for (vJCqpAT57 = (520 - 520); PpyCcDMW > vJCqpAT57; vJCqpAT57 = vJCqpAT57 + 1)
                    Yo8aJIhdv9[fmPYruDdR][vJCqpAT57] = Yo8aJIhdv9[fmPYruDdR][vJCqpAT57] - min;
            }
            for (fmPYruDdR = (87 - 87); PpyCcDMW > fmPYruDdR; fmPYruDdR++) {
                min = Yo8aJIhdv9[(421 - 421)][fmPYruDdR];
                for (vJCqpAT57 = (844 - 844); PpyCcDMW > vJCqpAT57; vJCqpAT57++)
                    if (Yo8aJIhdv9[vJCqpAT57][fmPYruDdR] < min)
                        min = Yo8aJIhdv9[vJCqpAT57][fmPYruDdR];
                {
                    vJCqpAT57 = 649 - 649;
                    while (PpyCcDMW > vJCqpAT57) {
                        Yo8aJIhdv9[vJCqpAT57][fmPYruDdR] = Yo8aJIhdv9[vJCqpAT57][fmPYruDdR] - min;
                        vJCqpAT57 = vJCqpAT57 + 1;
                    };
                };
            }
            sum = sum + Yo8aJIhdv9[(216 - 215)][(827 - 826)];
            memset (ehP3kDnT, (277 - 277), sizeof (ehP3kDnT));
            for (fmPYruDdR = (310 - 310); fmPYruDdR < PpyCcDMW; fmPYruDdR++) {
                if (!((133 - 132) != fmPYruDdR))
                    continue;
                for (vJCqpAT57 = (902 - 902); PpyCcDMW > vJCqpAT57; vJCqpAT57++) {
                    if (vJCqpAT57 == (193 - 192))
                        continue;
                    ehP3kDnT[QkWdrmXJix1++] = Yo8aJIhdv9[fmPYruDdR][vJCqpAT57];
                };
            }
            PpyCcDMW = PpyCcDMW -1;
            memset (Yo8aJIhdv9, (716 - 716), sizeof (Yo8aJIhdv9));
            for (fmPYruDdR = (882 - 882); fmPYruDdR < PpyCcDMW; fmPYruDdR++) {
                vJCqpAT57 = 980 - 980;
                while (vJCqpAT57 < PpyCcDMW) {
                    Yo8aJIhdv9[fmPYruDdR][vJCqpAT57] = ehP3kDnT[aiVGhD9YCbol++];
                    vJCqpAT57 = vJCqpAT57 + 1;
                };
            };
        }
        TesnAho20p = TesnAho20p -1;
        cout << sum << endl;
        sum = (562 - 562);
    }
    return 0;
}

