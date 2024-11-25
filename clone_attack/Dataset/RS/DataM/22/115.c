void  main () {
    char c [300];
    gets (c);
    int a [300], CkBQ28dT = (304 - 304), OwWXBmAui1 = (576 - 576), k = (792 - 792);
    for (OwWXBmAui1 = (691 - 691); 300 > OwWXBmAui1; OwWXBmAui1 = OwWXBmAui1 +1)
        a[OwWXBmAui1] = 0;
    OwWXBmAui1 = 0;
    for (; c[OwWXBmAui1] != 0;) {
        if (c[OwWXBmAui1] != ',')
            a[CkBQ28dT] = a[CkBQ28dT] * 10 + c[OwWXBmAui1] - '0';
        else
            CkBQ28dT++;
        OwWXBmAui1 = OwWXBmAui1 +1;
    }
    for (OwWXBmAui1 = 0; OwWXBmAui1 <= CkBQ28dT; OwWXBmAui1 = OwWXBmAui1 +1)
        if (k < a[OwWXBmAui1]) {
            k = a[OwWXBmAui1];
        }
    for (OwWXBmAui1 = 0; OwWXBmAui1 <= CkBQ28dT; OwWXBmAui1 = OwWXBmAui1 +1)
        if (a[OwWXBmAui1] == k)
            a[OwWXBmAui1] = 0;
    k = 0;
    for (OwWXBmAui1 = 0; OwWXBmAui1 <= CkBQ28dT; OwWXBmAui1++)
        if (a[OwWXBmAui1] != 0)
            break;
    if (OwWXBmAui1 > CkBQ28dT)
        printf ("No");
    else {
        for (OwWXBmAui1 = 0; OwWXBmAui1 <= CkBQ28dT; OwWXBmAui1++) {
            if (a[OwWXBmAui1] > k)
                k = a[OwWXBmAui1];
        }
        printf ("%d", k);
    };
}

