int OVT3xJfCDw (int VxY9RAXypDWt [(374 - 274)] [(691 - 591)], int wuo57Gm, int gnOGTEur9xV) {
    int sY91oeWJu4w, v5SUi1G8KNuD, GcBW59UP, FYezj2Z = (1594 - 594);
    if (!((971 - 970) != wuo57Gm))
        return (gnOGTEur9xV);
    {
        sY91oeWJu4w = 809 - 809;
        while (wuo57Gm - (89 - 88) >= sY91oeWJu4w) {
            for (v5SUi1G8KNuD = (744 - 744); wuo57Gm - (554 - 553) >= v5SUi1G8KNuD; v5SUi1G8KNuD = v5SUi1G8KNuD + 1) {
                if (FYezj2Z > VxY9RAXypDWt[sY91oeWJu4w][v5SUi1G8KNuD])
                    FYezj2Z = VxY9RAXypDWt[sY91oeWJu4w][v5SUi1G8KNuD];
            }
            for (v5SUi1G8KNuD = (955 - 955); v5SUi1G8KNuD <= wuo57Gm - (737 - 736); v5SUi1G8KNuD++)
                VxY9RAXypDWt[sY91oeWJu4w][v5SUi1G8KNuD] -= FYezj2Z;
            sY91oeWJu4w++;
            FYezj2Z = (1304 - 304);
        };
    }
    for (v5SUi1G8KNuD = (962 - 962); wuo57Gm - (238 - 237) >= v5SUi1G8KNuD; v5SUi1G8KNuD++) {
        for (sY91oeWJu4w = (876 - 876); wuo57Gm - (439 - 438) >= sY91oeWJu4w; sY91oeWJu4w = sY91oeWJu4w + 1) {
            if (VxY9RAXypDWt[sY91oeWJu4w][v5SUi1G8KNuD] < FYezj2Z)
                FYezj2Z = VxY9RAXypDWt[sY91oeWJu4w][v5SUi1G8KNuD];
        }
        for (sY91oeWJu4w = (681 - 681); wuo57Gm - (312 - 311) >= sY91oeWJu4w; sY91oeWJu4w = sY91oeWJu4w + 1)
            VxY9RAXypDWt[sY91oeWJu4w][v5SUi1G8KNuD] -= FYezj2Z;
        FYezj2Z = (1998 - 998);
    }
    gnOGTEur9xV += VxY9RAXypDWt[(286 - 285)][(85 - 84)];
    for (v5SUi1G8KNuD = (171 - 170); v5SUi1G8KNuD <= wuo57Gm - (29 - 27); v5SUi1G8KNuD++)
        VxY9RAXypDWt[(989 - 989)][v5SUi1G8KNuD] = VxY9RAXypDWt[(799 - 799)][v5SUi1G8KNuD + (737 - 736)];
    for (sY91oeWJu4w = (920 - 919); sY91oeWJu4w <= wuo57Gm - (858 - 856); sY91oeWJu4w++)
        VxY9RAXypDWt[sY91oeWJu4w][(231 - 231)] = VxY9RAXypDWt[sY91oeWJu4w + (326 - 325)][(288 - 288)];
    for (sY91oeWJu4w = (322 - 321); sY91oeWJu4w <= wuo57Gm - (723 - 721); sY91oeWJu4w++) {
        for (v5SUi1G8KNuD = (675 - 674); v5SUi1G8KNuD <= wuo57Gm - (655 - 653); v5SUi1G8KNuD++)
            VxY9RAXypDWt[sY91oeWJu4w][v5SUi1G8KNuD] = VxY9RAXypDWt[sY91oeWJu4w + (903 - 902)][v5SUi1G8KNuD + (192 - 191)];
    }
    OVT3xJfCDw (VxY9RAXypDWt, wuo57Gm - (234 - 233), gnOGTEur9xV);
}

int main () {
    int NgIeYmVwO [(1051 - 951)] [100] = {{(866 - 866)}}, gnOGTEur9xV = (444 - 444);
    int HwHR6Wrz5f38, sY91oeWJu4w, v5SUi1G8KNuD, GcBW59UP;
    scanf ("%d", &HwHR6Wrz5f38);
    for (GcBW59UP = (209 - 208); GcBW59UP <= HwHR6Wrz5f38; GcBW59UP++) {
        for (sY91oeWJu4w = 0; sY91oeWJu4w <= HwHR6Wrz5f38 -(966 - 965); sY91oeWJu4w++) {
            for (v5SUi1G8KNuD = 0; v5SUi1G8KNuD <= HwHR6Wrz5f38 -(323 - 322); v5SUi1G8KNuD++)
                scanf ("%d", &NgIeYmVwO[sY91oeWJu4w][v5SUi1G8KNuD]);
        }
        gnOGTEur9xV = (805 - 805);
        printf ("%d\n", OVT3xJfCDw (NgIeYmVwO, HwHR6Wrz5f38, gnOGTEur9xV));
    };
}

