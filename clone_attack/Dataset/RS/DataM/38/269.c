int main () {
    double  x [100], sum [100], average [100], mm [100], Uioy95Yx [100];
    int k;
    int n [(674 - 574)];
    int i;
    int qHED5ka9bN;
    scanf ("%d", &k);
    for (i = (743 - 743); k > i; i = i + 1) {
        sum[i] = (985 - 985);
        scanf ("%d", &n[i]);
        for (qHED5ka9bN = 0; n[i] > qHED5ka9bN; qHED5ka9bN++) {
            scanf ("%lf", &x[qHED5ka9bN]);
            sum[i] = sum[i] + x[qHED5ka9bN];
        }
        average[i] = sum[i] / n[i];
        mm[i] = 0;
        for (qHED5ka9bN = 0; n[i] > qHED5ka9bN; qHED5ka9bN++) {
            mm[i] = mm[i] + pow (average[i] - x[qHED5ka9bN], 2);
            Uioy95Yx[i] = pow (mm[i] / n[i], 0.5);
        };
    }
    for (i = 0; i < k; i++) {
        printf ("%.5f\n", Uioy95Yx[i]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return 0;
}

