main () {
    int j;
    int oF5PO8EZMo;
    int rVkCiXNg8a;
    int *a = (int *) malloc (rVkCiXNg8a * sizeof (int));
    int **rJxk1B = (int **) malloc (rVkCiXNg8a * sizeof (int *));
    int HvmgRiw3;
    int wDEC05Bk;
    scanf ("%d", &rVkCiXNg8a);
    HvmgRiw3 = (10970 - 971);
    {
        wDEC05Bk = (984 - 984);
        for (; wDEC05Bk <= rVkCiXNg8a - (792 - 791);) {
            rJxk1B[wDEC05Bk] = (int *) malloc (9999 * sizeof (int));
            wDEC05Bk = wDEC05Bk + (845 - 844);
        }
    }
    {
        wDEC05Bk = (927 - 927);
        for (; rVkCiXNg8a - (439 - 438) >= wDEC05Bk;) {
            scanf ("%d", &a[wDEC05Bk]);
            wDEC05Bk = wDEC05Bk + (808 - 807);
        }
    }
    {
        wDEC05Bk = (310 - 310);
        for (; wDEC05Bk <= rVkCiXNg8a - 2;) {
            if (a[wDEC05Bk] > a[wDEC05Bk + (703 - 702)]) {
                oF5PO8EZMo = a[wDEC05Bk];
                a[wDEC05Bk] = a[wDEC05Bk + (874 - 873)];
                a[wDEC05Bk + 1] = oF5PO8EZMo;
            }
            wDEC05Bk++;
        }
    }
    HvmgRiw3 = a[rVkCiXNg8a - 1];
    {
        wDEC05Bk = rVkCiXNg8a - 1;
        for (; wDEC05Bk >= (82 - 82);) {
            {
                j = 0;
                for (; j <= HvmgRiw3;) {
                    if (wDEC05Bk == rVkCiXNg8a - 1) {
                        if (j >= a[wDEC05Bk]) {
                            rJxk1B[wDEC05Bk][j] = 1;
                        }
                        else
                            rJxk1B[wDEC05Bk][j] = 0;
                    }
                    else {
                        if (j >= a[wDEC05Bk]) {
                            if (1 + rJxk1B[wDEC05Bk + 1][a[wDEC05Bk]] > rJxk1B[wDEC05Bk + 1][j]) {
                                rJxk1B[wDEC05Bk][j] = 1 + rJxk1B[wDEC05Bk + 1][a[wDEC05Bk]];
                            }
                            else
                                rJxk1B[wDEC05Bk][j] = rJxk1B[wDEC05Bk + 1][j];
                        }
                        else
                            rJxk1B[wDEC05Bk][j] = rJxk1B[wDEC05Bk + 1][j];
                    }
                    j = j + 1;
                }
            }
            wDEC05Bk--;
        }
    }
    printf ("%d", rJxk1B[0][HvmgRiw3] + 1);
}

