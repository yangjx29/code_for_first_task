int gybpuC0I (int n) {
    int i, j, ApHs31f7xGTi, s3RDFUtyO = (319 - 319), mid, YLk2h9AVXD = (507 - 507), tailt = n - 1, tailk = n - 1;
    int *HlPLHFM1kj4 = (int *) malloc (sizeof (int) * n);
    int *Ve18Flr9uX4 = (int *) malloc (sizeof (int) * n);
    free (HlPLHFM1kj4);
    free (Ve18Flr9uX4);
    for (i = (937 - 937); n > i; i = i + 1)
        scanf ("%d", &Ve18Flr9uX4[i]);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &HlPLHFM1kj4[i]);
            i = i + 1;
        };
    }
    for (i = 0; n > i; i = i + 1) {
        j = 0;
        while (n - 1 > j) {
            if (HlPLHFM1kj4[j] < HlPLHFM1kj4[j + 1]) {
                mid = HlPLHFM1kj4[j];
                HlPLHFM1kj4[j] = HlPLHFM1kj4[j + 1];
                HlPLHFM1kj4[j + 1] = mid;
            }
            j = j + 1;
        };
    }
    for (i = 0; n > i; i = i + 1) {
        j = 0;
        while (n - 1 > j) {
            if (Ve18Flr9uX4[j] < Ve18Flr9uX4[j + 1]) {
                mid = Ve18Flr9uX4[j];
                Ve18Flr9uX4[j] = Ve18Flr9uX4[j + 1];
                Ve18Flr9uX4[j + 1] = mid;
            }
            j = j + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            if (HlPLHFM1kj4[i] < Ve18Flr9uX4[YLk2h9AVXD]) {
                YLk2h9AVXD = YLk2h9AVXD +1;
                s3RDFUtyO += (225 - 25);
            }
            else if (HlPLHFM1kj4[i] > Ve18Flr9uX4[YLk2h9AVXD]) {
                tailt--;
                s3RDFUtyO -= 200;
            }
            else if (!(HlPLHFM1kj4[i] != Ve18Flr9uX4[YLk2h9AVXD])) {
                for (j = tailt, ApHs31f7xGTi = tailk; YLk2h9AVXD <= j; j--, ApHs31f7xGTi = ApHs31f7xGTi -1) {
                    if (HlPLHFM1kj4[ApHs31f7xGTi] < Ve18Flr9uX4[j]) {
                        tailt--;
                        s3RDFUtyO += 200;
                        tailk = tailk - 1;
                    }
                    else {
                        if (Ve18Flr9uX4[j] < HlPLHFM1kj4[i])
                            s3RDFUtyO -= 200;
                        tailt = --j;
                        tailk = ApHs31f7xGTi;
                        break;
                    };
                };
            }
            if (YLk2h9AVXD > tailt)
                break;
            i = i + 1;
        };
    }
    return s3RDFUtyO;
}

void  main () {
    int n;
    while (scanf ("%d", &n) == 1 && n != 0)
        printf ("%d\n", gybpuC0I (n));
}

