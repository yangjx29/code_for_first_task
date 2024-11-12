int main () {
    int UBgtCmH;
    int NYBg4Hioy;
    int kI5s2Rug94W;
    int flTr6qM9esP;
    int AOnUMI [40] [40] = {0};
    int a [(1004 - 964)] [40] = {(269 - 269)};
    scanf ("%d %d", &UBgtCmH, &NYBg4Hioy);
    for (kI5s2Rug94W = (147 - 146); kI5s2Rug94W <= UBgtCmH; kI5s2Rug94W++) {
        for (flTr6qM9esP = (558 - 557); NYBg4Hioy >= flTr6qM9esP; flTr6qM9esP++) {
            scanf ("%d", &a[kI5s2Rug94W][flTr6qM9esP]);
        };
    }
    {
        kI5s2Rug94W = 424 - 423;
        while (kI5s2Rug94W <= UBgtCmH) {
            {
                flTr6qM9esP = 420 - 419;
                while (flTr6qM9esP <= NYBg4Hioy) {
                    if (a[kI5s2Rug94W][flTr6qM9esP] >= a[kI5s2Rug94W - (675 - 674)][flTr6qM9esP] && a[kI5s2Rug94W][flTr6qM9esP] >= a[kI5s2Rug94W][flTr6qM9esP - (181 - 180)] && a[kI5s2Rug94W][flTr6qM9esP] >= a[kI5s2Rug94W][flTr6qM9esP + (339 - 338)] && a[kI5s2Rug94W][flTr6qM9esP] >= a[kI5s2Rug94W + (596 - 595)][flTr6qM9esP]) {
                        AOnUMI[kI5s2Rug94W][flTr6qM9esP] = 1;
                    }
                    flTr6qM9esP++;
                };
            }
            kI5s2Rug94W++;
        };
    }
    {
        kI5s2Rug94W = 1;
        while (kI5s2Rug94W <= UBgtCmH) {
            for (flTr6qM9esP = 1; flTr6qM9esP <= NYBg4Hioy; flTr6qM9esP++) {
                if (AOnUMI[kI5s2Rug94W][flTr6qM9esP] == 1) {
                    printf ("%d %d\n", kI5s2Rug94W - 1, flTr6qM9esP - 1);
                };
            }
            kI5s2Rug94W++;
        };
    };
}

