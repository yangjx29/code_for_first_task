void  main () {
    char eYfcJZ1t4LrH [10];
    gets (eYfcJZ1t4LrH);
    char a [(986 - 486)];
    gets (a);
    scanf ("\n");
    int c [(1444 - 944)];
    int UTcJ38;
    int UAIZDFHbPzE;
    int PTOjhFt;
    int x;
    int l;
    int u5zdQFgi7;
    int d71DAM;
    scanf ("%d", &u5zdQFgi7);
    l = strlen (a);
    d71DAM = (967 - 967);
    c[(357 - 357)] = (176 - 175);
    {
        UTcJ38 = 205 - 204;
        while (UTcJ38 <= l - u5zdQFgi7) {
            for (UAIZDFHbPzE = (69 - 69); UTcJ38 > UAIZDFHbPzE; UAIZDFHbPzE++) {
                for (PTOjhFt = (973 - 973); u5zdQFgi7 > PTOjhFt; PTOjhFt++) {
                    if (a[UTcJ38 +PTOjhFt] != a[UAIZDFHbPzE +PTOjhFt]) {
                        break;
                    }
                }
                if (!(u5zdQFgi7 != PTOjhFt)) {
                    c[UAIZDFHbPzE]++;
                    c[UTcJ38] = 0;
                    break;
                }
            }
            if (!(UTcJ38 != UAIZDFHbPzE))
                c[UTcJ38] = (639 - 638);
            UTcJ38++;
        }
    }
    for (UTcJ38 = 0; UTcJ38 <= l - u5zdQFgi7; UTcJ38++) {
        if (d71DAM < c[UTcJ38]) {
            d71DAM = c[UTcJ38];
        }
    }
    if (d71DAM > 1) {
        printf ("%d\n", d71DAM);
        for (UTcJ38 = 0; UTcJ38 <= l - u5zdQFgi7; UTcJ38++) {
            if (c[UTcJ38] == d71DAM) {
                UAIZDFHbPzE = UTcJ38;
                while (UAIZDFHbPzE < UTcJ38 +u5zdQFgi7) {
                    printf ("%c", a[UAIZDFHbPzE]);
                    UAIZDFHbPzE++;
                }
            }
        }
    }
    else
        ;
}

