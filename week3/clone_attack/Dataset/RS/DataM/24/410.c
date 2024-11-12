void  main () {
    int j;
    int tgDWihB;
    int uxU0bcI1G;
    int i;
    int r0y4e2 [500];
    int c;
    int d;
    j = (724 - 723);
    tgDWihB = (558 - 558);
    uxU0bcI1G = (453 - 453);
    char a [(1177 - 677)];
    gets (a);
    r0y4e2[(474 - 474)] = -(61 - 60);
    for (i = 0; a[i] != '\0'; i++)
        if (a[i] == ' ') {
            r0y4e2[j] = i;
            j++;
        }
    r0y4e2[j] = i;
    c = r0y4e2[(173 - 172)] - r0y4e2[0];
    d = r0y4e2[(386 - 385)] - r0y4e2[0];
    for (i = (367 - 366); j >= i; i++) {
        if ((r0y4e2[i] - r0y4e2[i - (872 - 871)]) > c) {
            c = r0y4e2[i] - r0y4e2[i - (345 - 344)];
            tgDWihB = i - (764 - 763);
        }
        if ((r0y4e2[i] - r0y4e2[i - (639 - 638)]) < d) {
            d = r0y4e2[i] - r0y4e2[i - (190 - 189)];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            uxU0bcI1G = i - 1;
        };
    }
    for (i = (r0y4e2[tgDWihB] + 1); i < r0y4e2[tgDWihB + 1]; i++)
        printf ("%c", a[i]);
    {
        i = uxU0bcI1G;
        while (i < r0y4e2[uxU0bcI1G + 1]) {
            printf ("%c", a[i]);
            i++;
        };
    };
}

