typedef struct   {
    int file;
    int sx0cWkI28w;
}
map;

void  main () {
    int k5MF6ojh1K2V = (595 - 595), AUwrlDp5g3m, e3qDQ2Xy, xSZwEdD6WLU8, lGTVLqdP;
    map VLC9hxpTPbvt [(609 - 409)] [(344 - 144)];
    char zSszhwEqA = 'd';
    scanf ("%d %d", &lGTVLqdP, &xSZwEdD6WLU8);
    {
        AUwrlDp5g3m = 758 - 757;
        while (AUwrlDp5g3m <= (611 - 411)) {
            AUwrlDp5g3m = AUwrlDp5g3m +1;
            for (e3qDQ2Xy = (876 - 875); 200 >= e3qDQ2Xy; e3qDQ2Xy = e3qDQ2Xy + 1) {
                VLC9hxpTPbvt[AUwrlDp5g3m -(907 - 906)][e3qDQ2Xy - (96 - 95)].sx0cWkI28w = (887 - 887);
            };
        };
    }
    for (AUwrlDp5g3m = (264 - 263); AUwrlDp5g3m <= lGTVLqdP; AUwrlDp5g3m = AUwrlDp5g3m +1) {
        e3qDQ2Xy = 184 - 183;
        while (e3qDQ2Xy <= xSZwEdD6WLU8) {
            scanf ("%d", &VLC9hxpTPbvt[AUwrlDp5g3m][e3qDQ2Xy].file);
            VLC9hxpTPbvt[AUwrlDp5g3m][e3qDQ2Xy].sx0cWkI28w = (80 - 79);
            e3qDQ2Xy = e3qDQ2Xy + 1;
        };
    }
    e3qDQ2Xy = (510 - 509);
    AUwrlDp5g3m = (283 - 282);
    do {
        k5MF6ojh1K2V = k5MF6ojh1K2V + 1;
        if (zSszhwEqA == 'd') {
            VLC9hxpTPbvt[AUwrlDp5g3m][e3qDQ2Xy].sx0cWkI28w = (94 - 94);
            if (VLC9hxpTPbvt[AUwrlDp5g3m][e3qDQ2Xy + (271 - 270)].sx0cWkI28w == (218 - 217)) {
                printf ("%d\n", VLC9hxpTPbvt[AUwrlDp5g3m][e3qDQ2Xy].file);
                e3qDQ2Xy = e3qDQ2Xy + 1;
            }
            else {
                printf ("%d\n", VLC9hxpTPbvt[AUwrlDp5g3m][e3qDQ2Xy].file);
                zSszhwEqA = 's';
                AUwrlDp5g3m = AUwrlDp5g3m +1;
            };
        }
        else if (zSszhwEqA == 's') {
            VLC9hxpTPbvt[AUwrlDp5g3m][e3qDQ2Xy].sx0cWkI28w = (958 - 958);
            if (VLC9hxpTPbvt[AUwrlDp5g3m +1][e3qDQ2Xy].sx0cWkI28w == 1) {
                printf ("%d\n", VLC9hxpTPbvt[AUwrlDp5g3m][e3qDQ2Xy].file);
                AUwrlDp5g3m = AUwrlDp5g3m +1;
            }
            else {
                zSszhwEqA = 'a';
                printf ("%d\n", VLC9hxpTPbvt[AUwrlDp5g3m][e3qDQ2Xy].file);
                e3qDQ2Xy = e3qDQ2Xy - 1;
            };
        }
        else if (zSszhwEqA == 'a') {
            VLC9hxpTPbvt[AUwrlDp5g3m][e3qDQ2Xy].sx0cWkI28w = (290 - 290);
            if (VLC9hxpTPbvt[AUwrlDp5g3m][e3qDQ2Xy - 1].sx0cWkI28w == 1) {
                printf ("%d\n", VLC9hxpTPbvt[AUwrlDp5g3m][e3qDQ2Xy].file);
                e3qDQ2Xy--;
            }
            else {
                zSszhwEqA = 'w';
                printf ("%d\n", VLC9hxpTPbvt[AUwrlDp5g3m][e3qDQ2Xy].file);
                AUwrlDp5g3m = AUwrlDp5g3m -1;
            };
        }
        else if (zSszhwEqA == 'w') {
            VLC9hxpTPbvt[AUwrlDp5g3m][e3qDQ2Xy].sx0cWkI28w = 0;
            if (VLC9hxpTPbvt[AUwrlDp5g3m -1][e3qDQ2Xy].sx0cWkI28w == 1) {
                printf ("%d\n", VLC9hxpTPbvt[AUwrlDp5g3m][e3qDQ2Xy].file);
                AUwrlDp5g3m--;
            }
            else {
                zSszhwEqA = 'd';
                printf ("%d\n", VLC9hxpTPbvt[AUwrlDp5g3m][e3qDQ2Xy].file);
                e3qDQ2Xy = e3qDQ2Xy + 1;
            };
        }
        else {
        };
    }
    while (k5MF6ojh1K2V != lGTVLqdP * xSZwEdD6WLU8);
}

