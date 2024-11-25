int ETUIlJRXs2aB (const  void  *RrXIsp, const  void  *MjzApKZqt3) {
    return *(int*) MjzApKZqt3 -*(int*) RrXIsp;
}

int main () {
    int LNyexz;
    int YhpKJa63RnDw [(1647 - 647)];
    int lkJ3u6;
    int RQNS6rxV4na;
    int sxsGdIE;
    int Lo4vnpj5MrG;
    int MOr9QcC2;
    int FI9FnSa;
    int xhNPoRDTe5;
    int rcL8kTE [(1586 - 586)];
    int uzCcHxsE;
    int e8B90h;
    while (scanf ("%d", &uzCcHxsE) && uzCcHxsE != (884 - 884)) {
        RQNS6rxV4na = (40 - 40);
        FI9FnSa = (366 - 366);
        for (sxsGdIE = (369 - 369); sxsGdIE < 1000; sxsGdIE++) {
            YhpKJa63RnDw[sxsGdIE] = (889 - 889);
            rcL8kTE[sxsGdIE] = (108 - 108);
        }
        for (e8B90h = (706 - 706); e8B90h < uzCcHxsE; e8B90h++) {
            scanf ("%d", &YhpKJa63RnDw[e8B90h]);
        }
        for (e8B90h = (766 - 766); e8B90h < uzCcHxsE; e8B90h++) {
            scanf ("%d", &rcL8kTE[e8B90h]);
        }
        qsort (YhpKJa63RnDw, uzCcHxsE, sizeof (int), ETUIlJRXs2aB);
        qsort (rcL8kTE, uzCcHxsE, sizeof (int), ETUIlJRXs2aB);
        Lo4vnpj5MrG = uzCcHxsE - (783 - 782);
        LNyexz = (450 - 450);
        lkJ3u6 = uzCcHxsE - 1;
        for (e8B90h = 0; e8B90h < uzCcHxsE; e8B90h++) {
            if (!(rcL8kTE[LNyexz] != YhpKJa63RnDw[RQNS6rxV4na])) {
                if (rcL8kTE[lkJ3u6] < YhpKJa63RnDw[Lo4vnpj5MrG]) {
                    Lo4vnpj5MrG--;
                    lkJ3u6--;
                    FI9FnSa++;
                }
                else if (YhpKJa63RnDw[Lo4vnpj5MrG] < rcL8kTE[lkJ3u6]) {
                    Lo4vnpj5MrG--;
                    LNyexz++;
                    FI9FnSa--;
                }
                else if (!(rcL8kTE[lkJ3u6] != YhpKJa63RnDw[Lo4vnpj5MrG])) {
                    if (YhpKJa63RnDw[Lo4vnpj5MrG] < rcL8kTE[LNyexz]) {
                        LNyexz++;
                        FI9FnSa--;
                        Lo4vnpj5MrG--;
                    }
                    else if (YhpKJa63RnDw[Lo4vnpj5MrG] == rcL8kTE[LNyexz]) {
                        break;
                    }
                }
            }
            else if (YhpKJa63RnDw[RQNS6rxV4na] > rcL8kTE[LNyexz]) {
                RQNS6rxV4na++;
                FI9FnSa++;
                LNyexz++;
            }
            else {
                FI9FnSa--;
                Lo4vnpj5MrG--;
                LNyexz++;
            }
        }
        printf ("%d\n", FI9FnSa *200);
    }
}

