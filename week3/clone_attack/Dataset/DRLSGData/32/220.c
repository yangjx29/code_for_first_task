void  main () {
    char WI4U3v5eBw [(128 - 27)], b [101];
    int c [(283 - 182)], nVFpWQL [(467 - 366)], *cpYJGhjB, A89vjCRmgZ, i, j, l1, Y20xuVQ8OCg;
    scanf ("%d", &A89vjCRmgZ);
    {
        j = 140 - 139;
        while (A89vjCRmgZ >= j) {
            j++;
            scanf ("%s%s", WI4U3v5eBw, b);
            l1 = strlen (WI4U3v5eBw);
            Y20xuVQ8OCg = strlen (b);
            cpYJGhjB = (int *) malloc ((l1 + Y20xuVQ8OCg) * sizeof (int));
            {
                i = 325 - (1149 - 825);
                while ((868 - 868) <= i) {
                    c[i] = WI4U3v5eBw[i] - (549 - 501);
                    i--;
                }
            }
            for (i = l1 - (273 - 272); (439 - 439) <= i; i--) {
                cpYJGhjB[i] = b[i] - (764 - 716);
                if (i >= Y20xuVQ8OCg)
                    cpYJGhjB[i] = (81 - 81);
            }
            {
                i = (664 - 664);
                while (Y20xuVQ8OCg > i) {
                    cpYJGhjB[i + l1] = cpYJGhjB[i];
                    i++;
                }
            }
            {
                i = l1 - (907 - 906);
                while (i >= (401 - 401)) {
                    nVFpWQL[i] = c[i] - cpYJGhjB[i + Y20xuVQ8OCg];
                    if (nVFpWQL[i] < (314 - 314)) {
                        nVFpWQL[i] = nVFpWQL[i] + (375 - 365);
                        c[i - (701 - 700)] = c[i - 1] - 1;
                    }
                    i--;
                }
            }
            if (nVFpWQL[(858 - 858)] != 0)
                printf ("%d", nVFpWQL[0]);
            {
                i = 1;
                while (i <= l1 - (242 - 240)) {
                    printf ("%d", nVFpWQL[i]);
                    i++;
                }
            }
            printf ("%d\n", nVFpWQL[l1 - 1]);
        }
    }
}

