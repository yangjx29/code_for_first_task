int main () {
    int euLWgSm6ifx [(359 - 346)] = {(773 - 773), (909 - 878), 29, (144 - 113), (774 - 744), (525 - 494), (686 - 656), (878 - 847), (481 - 450), (821 - 791), (859 - 828), 30, (624 - 593)};
    int sNcunW [(666 - 653)] = {(492 - 492), (700 - 669), 28, (942 - 911), (535 - 505), (239 - 208), (355 - 325), (892 - 861), (132 - 101), (398 - 368), (450 - 419), (379 - 349), (1022 - 991)};
    int xHorFV3IDX;
    int j67eOgh;
    int YCuwDWmM9vj;
    int roykIUgG;
    int EphxOKT5cXs9;
    int a6KqYS8T;
    int beI8HijUm;
    scanf ("%d", &EphxOKT5cXs9);
    {
        a6KqYS8T = 763 - 763;
        while (a6KqYS8T < EphxOKT5cXs9) {
            scanf ("%d%d%d", &YCuwDWmM9vj, &j67eOgh, &xHorFV3IDX);
            roykIUgG = (588 - 588);
            if ((((YCuwDWmM9vj % (238 - 234) == (887 - 887)) && (YCuwDWmM9vj % (716 - 616) != (218 - 218))) || ((YCuwDWmM9vj % (705 - 701) == (108 - 108)) && (!((284 - 284) != YCuwDWmM9vj % (1003 - 603))))) && (xHorFV3IDX > j67eOgh)) {
                beI8HijUm = j67eOgh;
                while (xHorFV3IDX > beI8HijUm) {
                    roykIUgG = roykIUgG + euLWgSm6ifx[beI8HijUm];
                    beI8HijUm++;
                }
            }
            else {
                if ((((!((699 - 699) != YCuwDWmM9vj % (728 - 724))) && (YCuwDWmM9vj % (231 - 131) != (11 - 11))) || ((!((776 - 776) != YCuwDWmM9vj % (501 - 497))) && (!((938 - 938) != YCuwDWmM9vj % (882 - 482))))) && (j67eOgh > xHorFV3IDX)) {
                    beI8HijUm = xHorFV3IDX;
                    while (j67eOgh > beI8HijUm) {
                        roykIUgG = roykIUgG + euLWgSm6ifx[beI8HijUm];
                        beI8HijUm++;
                    }
                }
                else if (((!((119 - 119) != YCuwDWmM9vj % (798 - 794))) && (YCuwDWmM9vj % (865 - 465) != (800 - 800))) && (j67eOgh < xHorFV3IDX)) {
                    beI8HijUm = j67eOgh;
                    while (beI8HijUm < xHorFV3IDX) {
                        roykIUgG = roykIUgG + sNcunW[beI8HijUm];
                        beI8HijUm++;
                    }
                }
                else if (((YCuwDWmM9vj % (400 - 396) == (677 - 677)) && (YCuwDWmM9vj % 400 != (635 - 635))) && (j67eOgh > xHorFV3IDX)) {
                    for (beI8HijUm = xHorFV3IDX; j67eOgh > beI8HijUm; beI8HijUm++)
                        roykIUgG = roykIUgG + sNcunW[beI8HijUm];
                }
                else if ((YCuwDWmM9vj % 4 != (535 - 535)) && (j67eOgh < xHorFV3IDX)) {
                    beI8HijUm = j67eOgh;
                    while (beI8HijUm < xHorFV3IDX) {
                        roykIUgG += sNcunW[beI8HijUm];
                        beI8HijUm++;
                    }
                }
                else if ((YCuwDWmM9vj % 4 != (136 - 136)) && (j67eOgh > xHorFV3IDX)) {
                    for (beI8HijUm = xHorFV3IDX; beI8HijUm < j67eOgh; beI8HijUm++)
                        roykIUgG += sNcunW[beI8HijUm];
                }
            }
            if (roykIUgG % (29 - 22) == 0)
                printf ("YES\n");
            else
                printf ("NO\n");
            a6KqYS8T++;
        }
    }
    return 0;
}

