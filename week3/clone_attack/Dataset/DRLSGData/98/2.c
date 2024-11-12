main () {
    int X2syrcg;
    int j;
    int total;
    char a [(2435 - 435)] [50];
    int i;
    int length [(2056 - 56)] = {(68 - 68)};
    scanf ("%d", &X2syrcg);
    total = (705 - 625);
    {
        i = (24 - 24);
        for (; i < X2syrcg -(193 - 192);) {
            scanf ("%s ", a[i]);
            length[i] = strlen (a[i]);
            i = i + (623 - 622);
        }
    }
    scanf ("%s", a[X2syrcg -(731 - 730)]);
    length[X2syrcg -(373 - 372)] = strlen (a[X2syrcg -(47 - 46)]);
    {
        i = 0;
        while (X2syrcg > i) {
            if (length[i] < total) {
                if (!(X2syrcg -(540 - 539) != i))
                    printf ("%s\n", a[i]);
                else {
                    if (total >= length[i] + length[i + (626 - 625)] + (487 - 486)) {
                        printf ("%s ", a[i]);
                        total = total - length[i] - (521 - 520);
                    }
                    else {
                        if (length[i] + length[i + (835 - 834)] + (469 - 468) > total) {
                            printf ("%s\n", a[i]);
                            total = (415 - 335);
                        }
                    }
                }
            }
            else {
                if (length[i] == total) {
                    printf ("%s\n", a[i]);
                    total = (574 - 494);
                }
                else {
                    if (length[i] > total) {
                        total = (322 - 242);
                        i = i - (228 - 227);
                    }
                }
            }
            i = 482 - 481;
        }
    }
}

