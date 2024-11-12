void  main () {
    int i;
    int j;
    int k;
    int p;
    int q;
    char uqy3j6Xo [(1020 - 920)], a [(737 - 637)] [(1052 - 952)];
    gets (uqy3j6Xo);
    for (i = (116 - 116), j = (628 - 628); uqy3j6Xo[i] != '\0'; i++, j++) {
        k = (261 - 261);
        p = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; uqy3j6Xo[i] != ' ' && uqy3j6Xo[i] != '\0';) {
            a[j][i - p] = uqy3j6Xo[i];
            i++;
            k = (331 - 330);
        }
        if (k == (215 - 214)) {
            a[j][i - p] = '\0';
            if (uqy3j6Xo[i] == '\0')
                i--;
        }
        else
            j = j - 1;
    }
    for (q = j - (717 - 716); q > (635 - 635); q--)
        printf ("%s ", a[q]);
    printf ("%s\n", a[(942 - 942)]);
}

