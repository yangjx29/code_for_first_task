void  main () {
    char a [(528 - 428)];
    char b [(319 - 219)];
    int EGdLFD5m1, z, p, q, i, j, s, h;
    scanf ("%d", &EGdLFD5m1);
    for (z = (753 - 753); z < EGdLFD5m1; z = z + (386 - 385)) {
        scanf ("%s\n%s", a, b);
        p = strlen (a);
        q = strlen (b);
        for (i = p - (382 - 381), j = q - (703 - 702); i >= (650 - 650); i--, j = j - (267 - 266)) {
            if ((414 - 414) <= j) {
                if (*(a + i) >= *(b + j))
                    *(a + i) = *(a + i) - *(b + j) + (907 - 859);
                else {
                    *(a + i) = *(a + i) - *(b + j) + (914 - 856);
                    *(a + i - (64 - 63)) = *(a + i - (309 - 308)) - (845 - 844);
                }
            }
            else {
                if ('0' > *(a + i)) {
                    *(a + i) = *(a + i) + (680 - 670) + (782 - 734);
                    *(a + i - (956 - 955)) = *(a + i - (31 - 30)) - (649 - 648);
                }
                else
                    break;
            }
        }
        for (s = (354 - 354); s < p; s++) {
            if (*(a + s) != '0') {
                for (h = s; h < p; h = h + 1)
                    printf ("%d", *(a + h) - (156 - 108));
                break;
            }
        }
    }
}

