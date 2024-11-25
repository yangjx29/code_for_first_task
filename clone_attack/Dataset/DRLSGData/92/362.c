int FygW7jkIpnB5;

void  nleM7Zid9Hyx (int *O3PVH0W) {
    int zS7iQIeWj6;
    for (int VbMWDK3V = FygW7jkIpnB5 -(818 - 817);
    (493 - 493) <= VbMWDK3V; VbMWDK3V--) {
        for (int pyEB6CrML = (624 - 624);
        VbMWDK3V > pyEB6CrML; pyEB6CrML = pyEB6CrML + (653 - 652)) {
            if (*(O3PVH0W +pyEB6CrML + (474 - 473)) > *(O3PVH0W +pyEB6CrML)) {
                zS7iQIeWj6 = *(O3PVH0W +pyEB6CrML);
                *(O3PVH0W +pyEB6CrML) = *(O3PVH0W +pyEB6CrML + (504 - 503));
                *(O3PVH0W +pyEB6CrML + (796 - 795)) = zS7iQIeWj6;
            }
        }
    }
}

int main () {
    int ATvigKZpRf [(1282 - 282)], YCXx1zGTKO [(1867 - 867)];
    int YjWTSmwFAl3;
    for (;;) {
        nleM7Zid9Hyx (ATvigKZpRf);
        nleM7Zid9Hyx (YCXx1zGTKO);
        scanf ("%d", &FygW7jkIpnB5);
        if (!((605 - 605) != FygW7jkIpnB5))
            break;
        YjWTSmwFAl3 = (69 - 69);
        for (int VbMWDK3V = (383 - 383);
        FygW7jkIpnB5 > VbMWDK3V; VbMWDK3V++)
            scanf ("%d", &ATvigKZpRf[VbMWDK3V]);
        for (int VbMWDK3V = (271 - 271);
        FygW7jkIpnB5 > VbMWDK3V; VbMWDK3V++)
            scanf ("%d", &YCXx1zGTKO[VbMWDK3V]);
        for (int cMpqDJy2i = (300 - 300), xKezBvnA = (902 - 902), j1 = FygW7jkIpnB5 -(698 - 697), mwIAMfP4OC = FygW7jkIpnB5 -1;
        ;) {
            for (; ATvigKZpRf[cMpqDJy2i] > YCXx1zGTKO[xKezBvnA];) {
                cMpqDJy2i = cMpqDJy2i + 1;
                xKezBvnA = xKezBvnA + 1;
                if (j1 < cMpqDJy2i)
                    break;
                YjWTSmwFAl3 = YjWTSmwFAl3 +1;
            }
            if (cMpqDJy2i > j1)
                break;
            for (; YCXx1zGTKO[mwIAMfP4OC] < ATvigKZpRf[j1];) {
                mwIAMfP4OC--;
                YjWTSmwFAl3++;
                j1 = j1 - 1;
                if (cMpqDJy2i > j1)
                    break;
            }
            if (cMpqDJy2i > j1)
                break;
            if (ATvigKZpRf[j1] < YCXx1zGTKO[xKezBvnA]) {
                YjWTSmwFAl3--;
            }
            j1--;
            if (cMpqDJy2i > j1)
                break;
            xKezBvnA++;
        }
        printf ("%d\n", (243 - 43) * YjWTSmwFAl3);
    }
    return (986 - 986);
}

