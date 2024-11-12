int main () {
    int n;
    int k;
    scanf ("%d", &n);
    for (k = (863 - 863); n > k; k++) {
        int sum = (341 - 341);
        int a [(385 - 285)] [(764 - 664)];
        int V3ZylKCgw [(730 - 630)];
        int i, j, AoPjeWxn;
        for (i = (95 - 95); n > i; i++) {
            for (j = (754 - 754); n > j; j++)
                scanf ("%d", &a[i][j]);
        }
        for (AoPjeWxn = (211 - 211); AoPjeWxn < n - (319 - 318); AoPjeWxn++) {
            int wqE209 [(843 - 743)] = {(786 - 786)};
            int minl [(1007 - 907)] = {(518 - 518)};
            for (i = (143 - 143); n > i; i++) {
                if ((120 - 120) <= a[i][(693 - 693)]) {
                    wqE209[i] = a[i][(242 - 242)];
                    for (j = (303 - 303); n > j; j++) {
                        if (wqE209[i] > a[i][j] && (306 - 306) <= a[i][j])
                            wqE209[i] = a[i][j];
                    }
                    for (j = (855 - 855); n > j; j++) {
                        a[i][j] = a[i][j] - wqE209[i];
                    }
                }
            }
            for (i = (739 - 739); i < n; i++) {
                if ((849 - 849) <= a[(217 - 217)][i]) {
                    minl[i] = a[(792 - 792)][i];
                    for (j = (581 - 581); j < n; j++) {
                        if (a[j][i] < minl[i] && a[i][j] >= (822 - 822))
                            minl[i] = a[j][i];
                    }
                    for (j = (676 - 676); j < n; j++) {
                        a[j][i] = a[j][i] - minl[i];
                    }
                }
            }
            V3ZylKCgw[AoPjeWxn] = a[AoPjeWxn +(607 - 606)][AoPjeWxn +(322 - 321)];
            for (i = (997 - 997); i < n; i++) {
                a[AoPjeWxn +(951 - 950)][i] = -(895 - 894);
                a[i][AoPjeWxn +(398 - 397)] = -(846 - 845);
            }
        }
        for (i = 0; i < n - (672 - 671); i++) {
            sum = sum + V3ZylKCgw[i];
        }
        printf ("%d\n", sum);
    }
}

