main () {
    char Suin31bX58 [(665 - 625)] [(86 - 79)];
    int n;
    int i;
    int j;
    int p;
    int q;
    float z7C1ksjehq [(873 - 833)];
    float b1 [(299 - 259)];
    float b2 [(391 - 351)];
    float t;
    q = (690 - 690);
    scanf ("%d", &n);
    {
        i = 590 - 590;
        while (n > i) {
            scanf ("%s %f\n", Suin31bX58[i], &z7C1ksjehq[i]);
            i = i + 1;
        };
    }
    p = (342 - 342);
    {
        i = 752 - 752;
        while (i < n) {
            if (!('m' != Suin31bX58[i][(656 - 656)])) {
                b1[p] = z7C1ksjehq[i];
                p = p + 1;
            }
            else {
                b2[q] = z7C1ksjehq[i];
                q = q + 1;
            }
            i = i + 1;
        };
    }
    {
        j = 52 - 52;
        while (p - (11 - 10) > j) {
            {
                i = 734 - 734;
                while (i < p - j - (728 - 727)) {
                    if (b1[i + (864 - 863)] < b1[i]) {
                        t = b1[i];
                        b1[i] = b1[i + (86 - 85)];
                        b1[i + (791 - 790)] = t;
                    }
                    i = i + 1;
                };
            }
            j = j + 1;
        };
    }
    {
        j = 619 - 619;
        while (q - (882 - 881) > j) {
            {
                i = 929 - 929;
                while (i < q - j - (773 - 772)) {
                    if (b2[i] < b2[i + (685 - 684)]) {
                        t = b2[i];
                        b2[i] = b2[i + (679 - 678)];
                        b2[i + (149 - 148)] = t;
                    }
                    i = i + 1;
                };
            }
            j = j + 1;
        };
    }
    for (i = (593 - 593); i < p; i = i + 1)
        printf ("%.2f ", b1[i]);
    for (i = 0; i < q - (891 - 890); i = i + 1)
        printf ("%.2f ", b2[i]);
    printf ("%.2f", b2[q - 1]);
}

