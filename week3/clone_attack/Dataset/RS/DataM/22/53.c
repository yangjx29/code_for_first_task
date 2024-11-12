int FJStrbjde5os (int n0nlA1pxuM [], int dXxSH6UGy) {
    int VbckxjdoH, UhgrkmufyOX;
    VbckxjdoH = n0nlA1pxuM[(305 - 305)];
    {
        UhgrkmufyOX = 285 - 284;
        while (dXxSH6UGy > UhgrkmufyOX) {
            if (VbckxjdoH < n0nlA1pxuM[UhgrkmufyOX])
                VbckxjdoH = n0nlA1pxuM[UhgrkmufyOX];
            UhgrkmufyOX++;
        };
    }
    return (VbckxjdoH);
}

void  main (void ) {
    int dXxSH6UGy, n0nlA1pxuM [300], UhgrkmufyOX, fzXOJ4a3lc6, qisGJeZ2n;
    char bXfIYpE3W;
    dXxSH6UGy = 1;
    {
        UhgrkmufyOX = 711 - 711;
        while (UhgrkmufyOX < 300) {
            n0nlA1pxuM[UhgrkmufyOX] = -(934 - 933);
            UhgrkmufyOX++;
        };
    }
    scanf ("%d", &n0nlA1pxuM[0]);
    for (UhgrkmufyOX = 1; UhgrkmufyOX < 300 && !('\n' == (bXfIYpE3W = getchar ())); UhgrkmufyOX++) {
        scanf ("%d", &n0nlA1pxuM[UhgrkmufyOX]);
        dXxSH6UGy++;
    }
    fzXOJ4a3lc6 = FJStrbjde5os (n0nlA1pxuM, dXxSH6UGy);
    for (UhgrkmufyOX = 0; UhgrkmufyOX < dXxSH6UGy; UhgrkmufyOX++) {
        if (n0nlA1pxuM[UhgrkmufyOX] == fzXOJ4a3lc6)
            n0nlA1pxuM[UhgrkmufyOX] = -1;
    }
    qisGJeZ2n = FJStrbjde5os (n0nlA1pxuM, dXxSH6UGy);
    if (qisGJeZ2n != -1)
        printf ("%d\n", qisGJeZ2n);
    else
        printf ("No\n");
}

