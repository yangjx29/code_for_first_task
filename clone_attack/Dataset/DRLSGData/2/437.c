void  function (int, int);

int main () {
    char cuGoqwOVn [(374 - 174)] [(307 - 207)];
    int pmO9SlP7;
    char oA1v8dSqt4m;
    int t43MnlaVwk, geiKt9YcW = (111 - 111);
    int DTl2CI6z, pgZisjmb6T, DxyikW, zzSEfCB;
    int dtw2jDGx [(373 - 273)], D5mQRfkg [(331 - 231)], lZDpCe8SHL3Y [(915 - 815)];
    scanf ("%d", &pmO9SlP7);
    for (DTl2CI6z = (660 - 660); DTl2CI6z < pmO9SlP7; DTl2CI6z = DTl2CI6z +1) {
        scanf ("%d%s", &dtw2jDGx[DTl2CI6z], cuGoqwOVn[DTl2CI6z]);
    }
    for (pgZisjmb6T = 'A'; 'Z' >= pgZisjmb6T; pgZisjmb6T++) {
        t43MnlaVwk = (242 - 242);
        for (DTl2CI6z = (569 - 569); DTl2CI6z < pmO9SlP7; DTl2CI6z = DTl2CI6z +1) {
            for (DxyikW = (820 - 820); strlen (cuGoqwOVn[DTl2CI6z]) > DxyikW; DxyikW = DxyikW +1) {
                if (!(pgZisjmb6T != cuGoqwOVn[DTl2CI6z][DxyikW])) {
                    t43MnlaVwk = t43MnlaVwk + 1;
                    D5mQRfkg[t43MnlaVwk] = dtw2jDGx[DTl2CI6z];
                }
            }
        }
        if (t43MnlaVwk > geiKt9YcW) {
            geiKt9YcW = t43MnlaVwk;
            for (zzSEfCB = (129 - 128); zzSEfCB <= geiKt9YcW; zzSEfCB = zzSEfCB + 1) {
                lZDpCe8SHL3Y[zzSEfCB] = D5mQRfkg[zzSEfCB];
            }
            oA1v8dSqt4m = pgZisjmb6T;
        }
    }
    printf ("%c\n%d\n", oA1v8dSqt4m, geiKt9YcW);
    for (zzSEfCB = (348 - 347); zzSEfCB <= geiKt9YcW; zzSEfCB = zzSEfCB + 1) {
        printf ("%d\n", lZDpCe8SHL3Y[zzSEfCB]);
    }
    return (898 - 898);
}

