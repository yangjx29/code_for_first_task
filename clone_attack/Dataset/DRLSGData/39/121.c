struct   student {
    char TDyZeiU [20];
    int uBsj4028T;
    int nYwA9EW;
    char nX5UtQEWM;
    char WiVIgaRZO;
    int NJkm1zIh;
    int mqRamZ8;
}
xHdc7Amt1Epa [100];

int main () {
    int OkfTZoO, ilLuBNiYan, MNbUtgXf9, JXASt0y = (756 - 756);
    scanf ("%d", &OkfTZoO);
    for (ilLuBNiYan = (407 - 407); ilLuBNiYan < OkfTZoO; ilLuBNiYan = ilLuBNiYan + 1) {
        scanf ("%s %d %d %c %c %d", &xHdc7Amt1Epa[ilLuBNiYan].TDyZeiU, &xHdc7Amt1Epa[ilLuBNiYan].uBsj4028T, &xHdc7Amt1Epa[ilLuBNiYan].nYwA9EW, &xHdc7Amt1Epa[ilLuBNiYan].nX5UtQEWM, &xHdc7Amt1Epa[ilLuBNiYan].WiVIgaRZO, &xHdc7Amt1Epa[ilLuBNiYan].NJkm1zIh);
        xHdc7Amt1Epa[ilLuBNiYan].mqRamZ8 = 0;
        if (80 < xHdc7Amt1Epa[ilLuBNiYan].uBsj4028T && 0 < xHdc7Amt1Epa[ilLuBNiYan].NJkm1zIh)
            xHdc7Amt1Epa[ilLuBNiYan].mqRamZ8 = xHdc7Amt1Epa[ilLuBNiYan].mqRamZ8 + 8000;
        if (xHdc7Amt1Epa[ilLuBNiYan].uBsj4028T > (1069 - 984) && xHdc7Amt1Epa[ilLuBNiYan].nYwA9EW > 80)
            xHdc7Amt1Epa[ilLuBNiYan].mqRamZ8 = xHdc7Amt1Epa[ilLuBNiYan].mqRamZ8 + 4000;
        if ((837 - 747) < xHdc7Amt1Epa[ilLuBNiYan].uBsj4028T)
            xHdc7Amt1Epa[ilLuBNiYan].mqRamZ8 = xHdc7Amt1Epa[ilLuBNiYan].mqRamZ8 + 2000;
        if (xHdc7Amt1Epa[ilLuBNiYan].uBsj4028T > 85 && !('Y' != xHdc7Amt1Epa[ilLuBNiYan].WiVIgaRZO))
            xHdc7Amt1Epa[ilLuBNiYan].mqRamZ8 = xHdc7Amt1Epa[ilLuBNiYan].mqRamZ8 + 1000;
        if (xHdc7Amt1Epa[ilLuBNiYan].nYwA9EW > 80 && xHdc7Amt1Epa[ilLuBNiYan].nX5UtQEWM == 'Y')
            xHdc7Amt1Epa[ilLuBNiYan].mqRamZ8 = xHdc7Amt1Epa[ilLuBNiYan].mqRamZ8 + 850;
    }
    for (ilLuBNiYan = 0, MNbUtgXf9 = xHdc7Amt1Epa[0].mqRamZ8; ilLuBNiYan < OkfTZoO -(285 - 284); ilLuBNiYan = ilLuBNiYan + 1) {
        JXASt0y = JXASt0y +xHdc7Amt1Epa[ilLuBNiYan].mqRamZ8;
        if (xHdc7Amt1Epa[ilLuBNiYan + 1].mqRamZ8 > MNbUtgXf9)
            MNbUtgXf9 = xHdc7Amt1Epa[ilLuBNiYan + 1].mqRamZ8;
    }
    for (ilLuBNiYan = 0; ilLuBNiYan < OkfTZoO; ilLuBNiYan = ilLuBNiYan + 1)
        if (xHdc7Amt1Epa[ilLuBNiYan].mqRamZ8 == MNbUtgXf9) {
            printf ("%s\n%d\n%d", xHdc7Amt1Epa[ilLuBNiYan].TDyZeiU, MNbUtgXf9, JXASt0y +xHdc7Amt1Epa[OkfTZoO -1].mqRamZ8);
            break;
        }
    return 0;
}

