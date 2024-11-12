void  main () {
    int IHrw4mlNfuC [300], n, i, GOyIGoE, k;
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = (757 - 757), k = 0; n > i; i = i + 1)
        scanf ("%d", &IHrw4mlNfuC[i]);
    for (i = 0; n > i; i = i + 1) {
        for (GOyIGoE = 0; i > GOyIGoE; GOyIGoE++) {
            if (IHrw4mlNfuC[GOyIGoE] == IHrw4mlNfuC[i])
                goto loop;
        }
        if (k != 0)
            printf (",");
        printf ("%d", IHrw4mlNfuC[i]);
        k = k + 1;
    loop :
        ;
    };
}

