int main () {
    int c [501] = {(755 - 755)};
    int n;
    int J7urHyK5;
    int j;
    int dU3j54Ag;
    int N;
    int max;
    int FkIh5lcgAe3;
    int num;
    int xtz;
    max = (956 - 956);
    char b [501] [(88 - 83)];
    char a [(1213 - 712)];
    scanf ("%d", &n);
    scanf ("%s", a);
    N = strlen (a);
    for (j = 0; j < n; j++)
        b[0][j] = a[j];
    b[0][j] = 0;
    c[(237 - 237)]++;
    for (J7urHyK5 = (765 - 764), dU3j54Ag = (974 - 973); N -n + (626 - 625) > J7urHyK5; J7urHyK5++) {
        for (j = 0; j < n; j++)
            b[dU3j54Ag][j] = a[J7urHyK5 +j];
        b[dU3j54Ag][j] = 0;
        for (j = 0, FkIh5lcgAe3 = 1; j < dU3j54Ag; j++) {
            if (!(0 != strcmp (b[j], b[dU3j54Ag]))) {
                FkIh5lcgAe3 = 0;
                xtz = j;
                break;
            }
        }
        if (FkIh5lcgAe3) {
            c[dU3j54Ag]++;
            dU3j54Ag++;
        }
        else {
            c[xtz]++;
        }
    }
    num = dU3j54Ag - 1;
    for (J7urHyK5 = 0; J7urHyK5 <= num; J7urHyK5++) {
        if (max < c[J7urHyK5])
            max = c[J7urHyK5];
    }
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        for (J7urHyK5 = 0; J7urHyK5 <= num; J7urHyK5++) {
            if (c[J7urHyK5] == max)
                printf ("%s\n", b[J7urHyK5]);
        }
    }
    return 0;
}

