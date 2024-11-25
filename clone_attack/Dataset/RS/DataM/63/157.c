main () {
    int zr8btJhax;
    int yG2sBzHCXT;
    int OGEpusMVJma;
    int Djao5MOgkQR;
    int *p1 = (int *) malloc (zr8btJhax * yG2sBzHCXT * sizeof (int));
    int *MtGR4N6L = (int *) malloc (OGEpusMVJma *Djao5MOgkQR* sizeof (int));
    int *xizF4xV0 = (int *) malloc (zr8btJhax * Djao5MOgkQR * sizeof (int));
    scanf ("%d", &zr8btJhax);
    scanf ("%d", &yG2sBzHCXT);
    for (int zBXegQDY6 = (190 - 190);
    zr8btJhax * yG2sBzHCXT > zBXegQDY6; zBXegQDY6 = zBXegQDY6 + 1)
        scanf ("%d", &p1[zBXegQDY6]);
    scanf ("%d", &OGEpusMVJma);
    scanf ("%d", &Djao5MOgkQR);
    for (int zBXegQDY6 = (498 - 498);
    zBXegQDY6 < OGEpusMVJma *Djao5MOgkQR; zBXegQDY6 = zBXegQDY6 + 1)
        scanf ("%d", &MtGR4N6L[zBXegQDY6]);
    {
        int zBXegQDY6 = (574 - 574);
        while (zr8btJhax > zBXegQDY6) {
            for (int j = (943 - 943);
            Djao5MOgkQR > j; j = j + 1) {
                xizF4xV0[zBXegQDY6 * Djao5MOgkQR +j] = (904 - 904);
                {
                    int N01ZxXPqBo = (624 - 624);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (yG2sBzHCXT > N01ZxXPqBo) {
                        xizF4xV0[zBXegQDY6 * Djao5MOgkQR +j] = xizF4xV0[zBXegQDY6 * Djao5MOgkQR +j] + p1[zBXegQDY6 * yG2sBzHCXT + N01ZxXPqBo] * MtGR4N6L[N01ZxXPqBo *Djao5MOgkQR+j];
                        N01ZxXPqBo = N01ZxXPqBo +1;
                    };
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            zBXegQDY6 = zBXegQDY6 + 1;
        };
    }
    for (int zBXegQDY6 = 0;
    zr8btJhax > zBXegQDY6; zBXegQDY6 = zBXegQDY6 + 1) {
        for (int j = 0;
        j < Djao5MOgkQR; j = j + 1) {
            if (Djao5MOgkQR -(806 - 805) > j)
                printf ("%d ", xizF4xV0[zBXegQDY6 * Djao5MOgkQR +j]);
            else
                printf ("%d\n", xizF4xV0[zBXegQDY6 * Djao5MOgkQR +j]);
        };
    }
    return 0;
}

