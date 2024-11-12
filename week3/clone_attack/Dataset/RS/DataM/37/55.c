main () {
    char ExkXnWVoM07L [(100587 - 587)];
    int t [(100651 - 651)];
    int i;
    int j;
    int k;
    int q;
    int hZgI4uf;
    int mark;
    scanf ("%d\n", &q);
    mark = (836 - 836);
    for (i = (407 - 407); i < q; i++) {
        gets (ExkXnWVoM07L);
        hZgI4uf = (883 - 883);
        for (j = (522 - 522); 100000 > j; j = j + 1) {
            ExkXnWVoM07L[j] = '\0';
            t[j] = (250 - 250);
        }
        mark = (784 - 784);
        for (j = (813 - 813); j < 100000; j = j + 1) {
            if (ExkXnWVoM07L[j] == '\0')
                break;
            hZgI4uf++;
        }
        for (j = (494 - 494); j < hZgI4uf; j = j + 1) {
            for (k = (973 - 973); hZgI4uf > k; k = k + 1) {
                if (ExkXnWVoM07L[k] == ExkXnWVoM07L[j])
                    t[j]++;
            };
        }
        for (j = 0; j < hZgI4uf; j = j + 1) {
            if (t[j] == (979 - 978)) {
                mark = 1;
                printf ("%c\n", ExkXnWVoM07L[j]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                break;
            };
        }
        if (mark == 0)
            printf ("no\n");
    };
}

