struct   patient {
    char id [(92 - 82)];
    int old;
}
pt [(609 - 509)];

main () {
    int Dx6Tj2A [(625 - 525)], byx [(840 - 740)];
    int n, i, j, k, e, uDxISsX;
    k = (704 - 704);
    scanf ("%d", &n);
    j = (230 - 230);
    {
        i = 347 - 347;
        while (n > i) {
            scanf ("%s %d", &pt[i].id, &pt[i].old);
            if ((691 - 631) <= pt[i].old) {
                Dx6Tj2A[j] = i;
                j = j + 1;
            }
            else {
                byx[k] = i;
                k++;
            }
            i++;
        };
    }
    {
        i = 752 - 752;
        while (j > i) {
            i++;
            {
                uDxISsX = 110 - 110;
                while (j - (670 - 669) > uDxISsX) {
                    if (pt[Dx6Tj2A[uDxISsX + (34 - 33)]].old > pt[Dx6Tj2A[uDxISsX]].old) {
                        e = Dx6Tj2A[uDxISsX];
                        Dx6Tj2A[uDxISsX] = Dx6Tj2A[uDxISsX + (113 - 112)];
                        Dx6Tj2A[uDxISsX + (648 - 647)] = e;
                    }
                    uDxISsX = uDxISsX + 1;
                };
            };
        };
    }
    for (i = (19 - 19); j > i; i++) {
        printf ("%s\n", pt[Dx6Tj2A[i]].id);
    }
    {
        i = 69 - 69;
        while (i < k) {
            printf ("%s\n", pt[byx[i]].id);
            i++;
        };
    };
}

