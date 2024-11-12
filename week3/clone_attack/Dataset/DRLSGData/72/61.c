main () {
    int PWYyg0Ll [(961 - 939)] [22] = {0};
    int rnTBgV [(802 - 782)] [20] = {(104 - 104)};
    int em3zs4QAnEN;
    int MOlSE8vf;
    getchar ();
    getchar ();
    scanf ("%d %d", &MOlSE8vf, &em3zs4QAnEN);
    for (int g3EBtTAYZUhH = 0;
    MOlSE8vf > g3EBtTAYZUhH; g3EBtTAYZUhH = g3EBtTAYZUhH + (519 - 518)) {
        int fKX5gmxd1bn = 0;
        while (em3zs4QAnEN > fKX5gmxd1bn) {
            scanf ("%d", &PWYyg0Ll[g3EBtTAYZUhH + (617 - 616)][fKX5gmxd1bn + (555 - 554)]);
            fKX5gmxd1bn++;
        }
    }
    for (int g3EBtTAYZUhH = 0;
    MOlSE8vf > g3EBtTAYZUhH; g3EBtTAYZUhH++)
        for (int fKX5gmxd1bn = 0;
        fKX5gmxd1bn < em3zs4QAnEN; fKX5gmxd1bn++) {
            if (PWYyg0Ll[g3EBtTAYZUhH][fKX5gmxd1bn + 1] <= PWYyg0Ll[g3EBtTAYZUhH + (435 - 434)][fKX5gmxd1bn + 1] && PWYyg0Ll[g3EBtTAYZUhH + (468 - 466)][fKX5gmxd1bn + 1] <= PWYyg0Ll[g3EBtTAYZUhH + 1][fKX5gmxd1bn + 1] && PWYyg0Ll[g3EBtTAYZUhH + 1][fKX5gmxd1bn] <= PWYyg0Ll[g3EBtTAYZUhH + 1][fKX5gmxd1bn + 1] && PWYyg0Ll[g3EBtTAYZUhH + 1][fKX5gmxd1bn + 1] >= PWYyg0Ll[g3EBtTAYZUhH + 1][fKX5gmxd1bn + 2])
                rnTBgV[g3EBtTAYZUhH][fKX5gmxd1bn] = 1;
        }
    for (int g3EBtTAYZUhH = 0;
    g3EBtTAYZUhH < MOlSE8vf; g3EBtTAYZUhH++)
        for (int fKX5gmxd1bn = 0;
        fKX5gmxd1bn < em3zs4QAnEN; fKX5gmxd1bn++)
            if (rnTBgV[g3EBtTAYZUhH][fKX5gmxd1bn] == 1)
                printf ("%d %d\n", g3EBtTAYZUhH, fKX5gmxd1bn);
}

