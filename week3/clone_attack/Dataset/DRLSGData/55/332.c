main () {
    char vlFvwyzhrMY [(40808 - 808)];
    int BNgmBy;
    int tQamxbNc;
    int bc4ad5m;
    int EjIWviRsDV;
    int Oy0pXatEIVz;
    int f8WJ25z;
    int v8T19y;
    int H3YzbXT5;
    scanf ("%d %s %d", &Oy0pXatEIVz, vlFvwyzhrMY, &H3YzbXT5);
    tQamxbNc = strlen (vlFvwyzhrMY);
    if (!('0' != vlFvwyzhrMY[(153 - 153)]))
        ;
    else {
        char e0E2ATx3ny7U [(40246 - 246)];
        int cvZtkbfmJ2D [(40647 - 647)];
        {
            BNgmBy = (149 - 149);
            for (; BNgmBy < tQamxbNc;) {
                if ('A' <= vlFvwyzhrMY[BNgmBy] && vlFvwyzhrMY[BNgmBy] <= 'Z')
                    vlFvwyzhrMY[BNgmBy] = vlFvwyzhrMY[BNgmBy] - 'A' + 'a';
                BNgmBy = BNgmBy +(872 - 871);
            }
        }
        EjIWviRsDV = (783 - 783);
        {
            f8WJ25z = (775 - 775);
            for (; tQamxbNc > f8WJ25z;) {
                if (vlFvwyzhrMY[f8WJ25z] >= 'a')
                    v8T19y = vlFvwyzhrMY[f8WJ25z] - 'a' + (410 - 400);
                else
                    v8T19y = vlFvwyzhrMY[f8WJ25z] - '0';
                EjIWviRsDV = v8T19y + EjIWviRsDV *Oy0pXatEIVz;
                f8WJ25z = f8WJ25z + (622 - 621);
            }
        }
        {
            f8WJ25z = (811 - 811);
            for (; EjIWviRsDV != (610 - 610);) {
                cvZtkbfmJ2D[f8WJ25z] = EjIWviRsDV % H3YzbXT5;
                f8WJ25z = f8WJ25z + (290 - 289);
                EjIWviRsDV = EjIWviRsDV / H3YzbXT5;
            }
        }
        {
            bc4ad5m = (142 - 142);
            for (; bc4ad5m < f8WJ25z;) {
                {
                    if ((852 - 852)) {
                        return (625 - 625);
                    }
                }
                if (cvZtkbfmJ2D[bc4ad5m] < (886 - 876))
                    e0E2ATx3ny7U[f8WJ25z - bc4ad5m - (917 - 916)] = cvZtkbfmJ2D[bc4ad5m] + '0';
                else
                    e0E2ATx3ny7U[f8WJ25z - bc4ad5m - (116 - 115)] = cvZtkbfmJ2D[bc4ad5m] + 'A' - (596 - 586);
                bc4ad5m = bc4ad5m + (924 - 923);
            }
        }
        e0E2ATx3ny7U[f8WJ25z] = '\0';
        printf ("%s", e0E2ATx3ny7U);
    }
    getchar ();
    getchar ();
}

