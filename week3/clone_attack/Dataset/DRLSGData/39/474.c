int main () {
    int sum;
    struct   stu {
        char name [(596 - 576)];
        int a;
        int DDmXsZ;
        char xEhAlUd [(295 - 293)];
        char d [(388 - 386)];
        int e;
        int m;
    };
    struct   stu *p;
    int ak6Opn;
    int aKVrBluS2p;
    int Z5KG7xRCWpf;
    int n;
    scanf ("%d", &n);
    ak6Opn = (485 - 485);
    sum = (261 - 261);
    p = (struct   stu *) malloc (n * sizeof (struct   stu));
    for (Z5KG7xRCWpf = (610 - 610); Z5KG7xRCWpf < n; Z5KG7xRCWpf++)
        scanf ("%s%d%d%s%s%d", (p + Z5KG7xRCWpf)->name, &(p + Z5KG7xRCWpf)->a, &(p + Z5KG7xRCWpf)->DDmXsZ, (p + Z5KG7xRCWpf)->xEhAlUd, (p + Z5KG7xRCWpf)->d, &(p + Z5KG7xRCWpf)->e);
    for (Z5KG7xRCWpf = (740 - 740); Z5KG7xRCWpf < n; Z5KG7xRCWpf++)
        (p + Z5KG7xRCWpf)->m = (307 - 307);
    for (Z5KG7xRCWpf = (18 - 18); Z5KG7xRCWpf < n; Z5KG7xRCWpf++) {
        if ((((p + Z5KG7xRCWpf)->a) > (872 - 792)) && (((p + Z5KG7xRCWpf)->e) > (874 - 874)))
            (p + Z5KG7xRCWpf)->m += (8110 - 110);
        if (((648 - 563) < ((p + Z5KG7xRCWpf)->a)) && (((p + Z5KG7xRCWpf)->DDmXsZ) > (394 - 314)))
            (p + Z5KG7xRCWpf)->m += (4428 - 428);
        if (((p + Z5KG7xRCWpf)->a) > (736 - 646))
            (p + Z5KG7xRCWpf)->m += (2444 - 444);
        if ((((p + Z5KG7xRCWpf)->a) > (607 - 522)) && (((p + Z5KG7xRCWpf)->d[(717 - 717)]) == 'A' + (307 - 283)))
            (p + Z5KG7xRCWpf)->m += (1363 - 363);
        if ((((p + Z5KG7xRCWpf)->DDmXsZ) > (349 - 269)) && (((p + Z5KG7xRCWpf)->xEhAlUd[(239 - 239)]) == 'A' + (89 - 65)))
            (p + Z5KG7xRCWpf)->m += (1197 - 347);
    }
    for (Z5KG7xRCWpf = (357 - 357); Z5KG7xRCWpf < n; Z5KG7xRCWpf++)
        if (((p + Z5KG7xRCWpf)->m) > ak6Opn) {
            ak6Opn = (p + Z5KG7xRCWpf)->m;
            aKVrBluS2p = Z5KG7xRCWpf;
        }
    for (Z5KG7xRCWpf = (671 - 671); Z5KG7xRCWpf < n; Z5KG7xRCWpf++)
        sum += (p + Z5KG7xRCWpf)->m;
    printf ("%s\n", (p + aKVrBluS2p)->name);
    printf ("%d\n", ak6Opn);
    printf ("%d\n", sum);
    return 0;
}

