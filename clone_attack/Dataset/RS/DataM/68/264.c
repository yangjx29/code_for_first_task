void  main () {
    int i;
    int j;
    int k;
    int tag;
    int n;
    scanf ("%d", &n);
    for (i = 6; n >= i; i = i + 2) {
        j = 3;
        while (i > j) {
            tag = 0;
            {
                k = 2;
                while (j >= k * k) {
                    if (!(0 != j % k)) {
                        tag = (78 - 77);
                        break;
                    }
                    k++;
                };
            }
            if (tag == 1)
                continue;
            {
                k = 2;
                while (k * k <= i - j) {
                    if ((i - j) % k == 0) {
                        tag = 1;
                        break;
                    }
                    k++;
                };
            }
            if (tag == 1)
                continue;
            printf ("%d=%d+%d\n", i, j, i - j);
            break;
            j = j + 1;
        };
    };
}

