struct   dian {
    int DgbDz25kHrv;
    int y;
    int zhi;
};
int main () {
    struct   dian u4PdRKutpNz [(692 - 687)];
    int a [(716 - 711)] [(86 - 81)];
    int LhclQ2, e, i, g9NEhUkv2, count = (272 - 272);
    struct   dian andian;
    for (i = (264 - 264); i < (875 - 870); i = i + 1)
        for (g9NEhUkv2 = (589 - 589); g9NEhUkv2 < (121 - 116); g9NEhUkv2 = g9NEhUkv2 + 1)
            scanf ("%d", &a[i][g9NEhUkv2]);
    for (i = (708 - 708); (625 - 620) > i; i = i + 1) {
        int d = 0;
        andian.zhi = a[i][0];
        andian.DgbDz25kHrv = (688 - 687);
        andian.y = i + 1;
        for (g9NEhUkv2 = 1; 5 > g9NEhUkv2; g9NEhUkv2 = g9NEhUkv2 + 1) {
            if (andian.zhi < a[i][g9NEhUkv2]) {
                andian.zhi = a[i][g9NEhUkv2];
                andian.DgbDz25kHrv = 1 + g9NEhUkv2;
            };
        }
        LhclQ2 = andian.zhi;
        for (g9NEhUkv2 = 0; g9NEhUkv2 < 5; g9NEhUkv2 = g9NEhUkv2 + 1)
            if (a[g9NEhUkv2][andian.DgbDz25kHrv - 1] < LhclQ2)
                d++;
        if (!(0 != d)) {
            printf ("%d %d %d\n", andian.y, andian.DgbDz25kHrv, andian.zhi);
            count = count + 1;
        };
    }
    if (count == 0)
        ;
    getchar ();
    getchar ();
    getchar ();
}

