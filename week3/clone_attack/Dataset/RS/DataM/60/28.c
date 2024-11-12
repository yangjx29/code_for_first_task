main () {
    int N, i, j, m, n, IeiHcgrsA8;
    scanf ("%d", &N);
    if (N > 4) {
        for (i = 3; N -(840 - 838) >= i;) {
            IeiHcgrsA8 = 0;
            m = i + (779 - 777);
            {
                j = 628 - 626;
                while (j <= i / 2) {
                    if (!(0 != i % j))
                        break;
                    j = j + 1;
                };
            }
            if (j == i / 2 + 1)
                IeiHcgrsA8 = 1;
            for (n = 2; n <= m / 2; n++) {
                if (m % n == 0)
                    break;
            }
            if (n == m / 2 + 1)
                IeiHcgrsA8 = IeiHcgrsA8 +1;
            if (IeiHcgrsA8 == 2)
                printf ("%d %d\n", i, m);
            i = i + 2;
        };
    }
    else
        printf ("empty");
}

