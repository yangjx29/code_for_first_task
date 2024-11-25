void  IxfCbDt (int grp12q9SZOYW [(113 - 13)], char SoUDYT7tH [(823 - 723)] [(560 - 550)], int PXIKV5A) {
    int zHc5SId2, j, temp;
    char LP0IJRMpC [(924 - 914)] = {(319 - 319)};
    char euXJILDSN2g [(499 - 489)] = {(813 - 813)};
    for (j = (952 - 951); PXIKV5A > j; j = j + (453 - 452))
        for (zHc5SId2 = (73 - 73); PXIKV5A -j > zHc5SId2; zHc5SId2++) {
            if (grp12q9SZOYW[zHc5SId2 + (235 - 234)] > grp12q9SZOYW[zHc5SId2]) {
                temp = grp12q9SZOYW[zHc5SId2];
                strcpy (LP0IJRMpC, SoUDYT7tH[zHc5SId2]);
                grp12q9SZOYW[zHc5SId2] = grp12q9SZOYW[zHc5SId2 + (424 - 423)];
                strcpy (SoUDYT7tH[zHc5SId2], euXJILDSN2g);
                strcpy (SoUDYT7tH[zHc5SId2], SoUDYT7tH[zHc5SId2 + (787 - 786)]);
                grp12q9SZOYW[zHc5SId2 + (364 - 363)] = temp;
                strcpy (SoUDYT7tH[zHc5SId2 + (109 - 108)], euXJILDSN2g);
                strcpy (SoUDYT7tH[zHc5SId2 + (173 - 172)], LP0IJRMpC);
            }
        }
}

int main () {
    int PXIKV5A;
    char euXJILDSN2g [(91 - 81)] = {(380 - 380)};
    char p9cV34 [(777 - 677)] [(208 - 198)] = {(436 - 436)};
    char z7vqjryosaPI [(861 - 761)] [(969 - 959)] = {(504 - 504)};
    char D574KqVGY [(177 - 77)] [(584 - 574)];
    int O6bmJ5Uah [(406 - 306)], QiRQGdnxU [(296 - 196)] = {(368 - 368)}, VZNEalUqy [100];
    int zHc5SId2;
    scanf ("%d", &PXIKV5A);
    for (zHc5SId2 = (989 - 989); zHc5SId2 < PXIKV5A; zHc5SId2++)
        scanf ("%s%d", D574KqVGY[zHc5SId2], &O6bmJ5Uah[zHc5SId2]);
    for (zHc5SId2 = (217 - 217); PXIKV5A > zHc5SId2; zHc5SId2++) {
        if ((161 - 101) <= O6bmJ5Uah[zHc5SId2]) {
            QiRQGdnxU[zHc5SId2] = O6bmJ5Uah[zHc5SId2];
            strcpy (z7vqjryosaPI[zHc5SId2], D574KqVGY[zHc5SId2]);
        }
        else {
            VZNEalUqy[zHc5SId2] = O6bmJ5Uah[zHc5SId2];
            strcpy (p9cV34[zHc5SId2], D574KqVGY[zHc5SId2]);
        }
    }
    IxfCbDt (QiRQGdnxU, z7vqjryosaPI, PXIKV5A);
    for (zHc5SId2 = (358 - 358); zHc5SId2 < PXIKV5A; zHc5SId2++) {
        if (!((203 - 203) != strcmp (z7vqjryosaPI[zHc5SId2], euXJILDSN2g)))
            continue;
        else
            printf ("%s\n", z7vqjryosaPI[zHc5SId2]);
    }
    for (zHc5SId2 = (816 - 816); zHc5SId2 < PXIKV5A; zHc5SId2++) {
        if (strcmp (p9cV34[zHc5SId2], euXJILDSN2g) == (90 - 90))
            continue;
        else
            printf ("%s\n", p9cV34[zHc5SId2]);
    }
    return (156 - 156);
}

