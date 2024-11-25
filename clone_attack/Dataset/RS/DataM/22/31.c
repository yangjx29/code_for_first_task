void  main () {
    char m9VgJN3FK;
    int c [300];
    int bPVHBoy9aG;
    int b;
    int EGhCAl;
    int n;
    bPVHBoy9aG = -(752 - 751);
    b = -1;
    {
        EGhCAl = 129 - 129;
        while (EGhCAl < 300) {
            scanf ("%d%c", &c[EGhCAl], &m9VgJN3FK);
            if (m9VgJN3FK != ',') {
                n = EGhCAl;
                break;
            }
            EGhCAl = EGhCAl +1;
        };
    }
    for (EGhCAl = 0; EGhCAl <= n; EGhCAl++) {
        if (bPVHBoy9aG < c[EGhCAl])
            bPVHBoy9aG = c[EGhCAl];
    }
    for (EGhCAl = 0; EGhCAl <= n; EGhCAl++)
        if (c[EGhCAl] < bPVHBoy9aG && c[EGhCAl] > b)
            b = c[EGhCAl];
    if (b == -1)
        ;
    else
        printf ("%d\n", b);
}

