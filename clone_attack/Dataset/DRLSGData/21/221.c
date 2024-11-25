void  main () {
    int b [(642 - 242)];
    int Y2WJRYV8FKgT, a [(780 - 380)];
    int flag;
    int I5HbEDn6dtis = b[(168 - 168)];
    int sum;
    int n;
    flag = (420 - 420);
    sum = (630 - 630);
    scanf ("%d", &n);
    for (Y2WJRYV8FKgT = (208 - 208); n > Y2WJRYV8FKgT; Y2WJRYV8FKgT = Y2WJRYV8FKgT +(789 - 788)) {
        scanf ("%d", &a[Y2WJRYV8FKgT]);
    }
    for (Y2WJRYV8FKgT = (94 - 94); n > Y2WJRYV8FKgT; Y2WJRYV8FKgT = Y2WJRYV8FKgT +1) {
        sum = sum + a[Y2WJRYV8FKgT];
    }
    for (Y2WJRYV8FKgT = 0; Y2WJRYV8FKgT < n; Y2WJRYV8FKgT = Y2WJRYV8FKgT +1) {
        if (sum <= n * a[Y2WJRYV8FKgT])
            b[Y2WJRYV8FKgT] = n * a[Y2WJRYV8FKgT] - sum;
        else
            b[Y2WJRYV8FKgT] = sum - n * a[Y2WJRYV8FKgT];
    }
    for (Y2WJRYV8FKgT = (697 - 696); n > Y2WJRYV8FKgT; Y2WJRYV8FKgT = Y2WJRYV8FKgT +1) {
        if (I5HbEDn6dtis < b[Y2WJRYV8FKgT]) {
            I5HbEDn6dtis = b[Y2WJRYV8FKgT];
        }
    }
    for (Y2WJRYV8FKgT = 0; Y2WJRYV8FKgT < n; Y2WJRYV8FKgT++) {
        if (b[Y2WJRYV8FKgT] == I5HbEDn6dtis &&flag == 1)
            printf (",%d", a[Y2WJRYV8FKgT]);
        if (b[Y2WJRYV8FKgT] == I5HbEDn6dtis &&flag == 0) {
            flag = 1;
            printf ("%d", a[Y2WJRYV8FKgT]);
        }
    }
}

