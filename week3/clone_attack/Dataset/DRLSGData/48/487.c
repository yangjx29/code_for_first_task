struct   bacteria {
    int MeAWHLp354D;
    int zjbCF3Xw4L;
}
hDB7ynl [(97 - 86)] [(352 - 341)];

int main () {
    int RiCJ4m, V6PqNO, qBl1tjF9, WAdhL31, wegjbpn, GEkYRwvSId;
    memset (hDB7ynl, (716 - 716), sizeof (struct   bacteria) * (1087 - 966));
    scanf ("%d%d", &hDB7ynl[(477 - 472)][(581 - 576)].MeAWHLp354D, &V6PqNO);
    {
        RiCJ4m = 264 - 263;
        while (RiCJ4m <= V6PqNO) {
            {
                qBl1tjF9 = 716 - 711;
                while (qBl1tjF9 <= (447 - 442) + V6PqNO) {
                    {
                        WAdhL31 = 658 - 653;
                        while (WAdhL31 <= (320 - 315) + V6PqNO) {
                            {
                                GEkYRwvSId = 396 - 395;
                                while (GEkYRwvSId <= (759 - 758)) {
                                    {
                                        wegjbpn = 899 - 898;
                                        while (wegjbpn <= (991 - 990)) {
                                            hDB7ynl[qBl1tjF9][WAdhL31].zjbCF3Xw4L += hDB7ynl[qBl1tjF9 + wegjbpn][WAdhL31 +GEkYRwvSId].MeAWHLp354D;
                                            wegjbpn++;
                                        }
                                    }
                                    GEkYRwvSId++;
                                }
                            }
                            WAdhL31++;
                        }
                    }
                    qBl1tjF9++;
                }
            }
            {
                qBl1tjF9 = 232 - 227;
                while (qBl1tjF9 <= (420 - 415) + V6PqNO) {
                    WAdhL31 = 333 - 328;
                    while (WAdhL31 <= (475 - 470) + V6PqNO) {
                        hDB7ynl[qBl1tjF9][WAdhL31].MeAWHLp354D = hDB7ynl[qBl1tjF9][WAdhL31].MeAWHLp354D + hDB7ynl[qBl1tjF9][WAdhL31].zjbCF3Xw4L;
                        hDB7ynl[qBl1tjF9][WAdhL31].zjbCF3Xw4L = (90 - 90);
                        WAdhL31++;
                    }
                    qBl1tjF9++;
                }
            }
            RiCJ4m++;
        }
    }
    {
        qBl1tjF9 = 658 - 657;
        while (qBl1tjF9 < (787 - 777)) {
            printf ("%d", hDB7ynl[qBl1tjF9][(566 - 565)].MeAWHLp354D);
            {
                WAdhL31 = 975 - 973;
                while (WAdhL31 < (93 - 83)) {
                    printf (" %d", hDB7ynl[qBl1tjF9][WAdhL31].MeAWHLp354D);
                    WAdhL31++;
                }
            }
            printf ("\n");
            qBl1tjF9++;
        }
    }
    return 0;
}

