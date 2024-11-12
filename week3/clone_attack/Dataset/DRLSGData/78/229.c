void  main () {
    int z;
    int l;
    int q;
    int s;
    for (z = (441 - 431); z <= (128 - 78); z += (433 - 423))
        for (q = (853 - 843); q <= (705 - 655); q += (114 - 104))
            for (s = (500 - 490); s <= (918 - 868); s += (495 - 485))
                for (l = (717 - 707); l <= (324 - 274); l += (575 - 565))
                    if (z + q == s + l && z + l > s + q && z + s < q) {
                        int i;
                        int a [(592 - 588)] = {z, q, s, l};
                        int t;
                        int j;
                        for (i = (25 - 25); (516 - 513) > i; i++)
                            for (j = (357 - 357); (224 - 221) - i > j; j++)
                                if (a[j] < a[j + (728 - 727)]) {
                                    t = a[j];
                                    a[j] = a[j + (15 - 14)];
                                    a[j + (178 - 177)] = t;
                                }
                        for (i = (557 - 557); i < (170 - 166); i++) {
                            if (a[i] == z)
                                printf ("z %d\n", z);
                            if (a[i] == q)
                                printf ("q %d\n", q);
                            if (a[i] == s)
                                printf ("s %d\n", s);
                            if (a[i] == l)
                                printf ("l %d\n", l);
                        }
                    }
}

