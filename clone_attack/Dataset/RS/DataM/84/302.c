void  main () {
    int n, UHJoi8SgGKmj = (275 - 275), a [10000], kzlZ5O = (175 - 175), may = 0;
    scanf ("%d", &n);
    while (n > UHJoi8SgGKmj) {
        scanf ("%d", &a[UHJoi8SgGKmj]);
        if (kzlZ5O < a[UHJoi8SgGKmj])
            kzlZ5O = a[UHJoi8SgGKmj];
        else {
            if (may < a[UHJoi8SgGKmj])
                may = a[UHJoi8SgGKmj];
        }
        UHJoi8SgGKmj++;
    }
    if (a[0] > may && a[0] < kzlZ5O)
        may = a[0];
    printf ("%d\n%d\n", kzlZ5O, may);
}

