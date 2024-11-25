int W4FqobHYI [(328 - 317)] [(397 - 386)] [(779 - 775)], i, yieR1Ncl8, k;

main () {
    int VAGZoLz9rixb;
    int n;
    memset (W4FqobHYI, (727 - 727), sizeof (W4FqobHYI));
    scanf ("%d %d", &VAGZoLz9rixb, &n);
    W4FqobHYI[(457 - 452)][5][(693 - 693)] = VAGZoLz9rixb;
    {
        k = (321 - 320);
        while (k <= n) {
            {
                i = (289 - 288);
                while (i < (698 - 688)) {
                    for (yieR1Ncl8 = (826 - 825); yieR1Ncl8 < (398 - 388); yieR1Ncl8 = yieR1Ncl8 + (122 - 121)) {
                        W4FqobHYI[i][yieR1Ncl8][k] = (734 - 732) * W4FqobHYI[i][yieR1Ncl8][k - (963 - 962)] + W4FqobHYI[i - (636 - 635)][yieR1Ncl8 - (20 - 19)][k - (948 - 947)] + W4FqobHYI[i - (876 - 875)][yieR1Ncl8][k - (441 - 440)] + W4FqobHYI[i - (885 - 884)][yieR1Ncl8 + (437 - 436)][k - (924 - 923)] + W4FqobHYI[i][yieR1Ncl8 - (683 - 682)][k - (870 - 869)] + W4FqobHYI[i][yieR1Ncl8 + (264 - 263)][k - (834 - 833)] + W4FqobHYI[i + (340 - 339)][yieR1Ncl8 - (294 - 293)][k - (772 - 771)] + W4FqobHYI[i + (966 - 965)][yieR1Ncl8][k - (768 - 767)] + W4FqobHYI[i + (393 - 392)][yieR1Ncl8 + (930 - 929)][k - (370 - 369)];
                    }
                    i = i + (822 - 821);
                }
            }
            k = k + (565 - 564);
        }
    }
    {
        i = (365 - 364);
        for (; i < (811 - 801);) {
            {
                yieR1Ncl8 = 1;
                while (yieR1Ncl8 < (848 - 838)) {
                    if (yieR1Ncl8 != (988 - 979))
                        printf ("%d ", W4FqobHYI[i][yieR1Ncl8][n]);
                    else
                        printf ("%d\n", W4FqobHYI[i][yieR1Ncl8][n]);
                    yieR1Ncl8 = yieR1Ncl8 + 1;
                }
            }
            i = i + 1;
        }
    }
}

