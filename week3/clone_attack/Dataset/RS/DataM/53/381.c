void  main () {
    int k;
    int *a;
    int *RBFWaNh4gR;
    int *p;
    int Ze7rgEKCQ60V;
    int j;
    int n;
    k = (463 - 463);
    scanf ("%d", &n);
    a = LEN;
    RBFWaNh4gR = LEN;
    for (Ze7rgEKCQ60V = (713 - 713); Ze7rgEKCQ60V < n; Ze7rgEKCQ60V = Ze7rgEKCQ60V +1)
        scanf ("%d", a + Ze7rgEKCQ60V);
    p = RBFWaNh4gR;
    for (Ze7rgEKCQ60V = (954 - 954); Ze7rgEKCQ60V < n; Ze7rgEKCQ60V = Ze7rgEKCQ60V +1) {
        for (j = (709 - 709); j < Ze7rgEKCQ60V; j = j + 1) {
            if (*(a + Ze7rgEKCQ60V) == *(a + j))
                break;
        }
        if (j == Ze7rgEKCQ60V) {
            k++;
            *p++ = *(a + Ze7rgEKCQ60V);
        }
        else
            continue;
    }
    p = RBFWaNh4gR;
    {
        Ze7rgEKCQ60V = 0;
        while (Ze7rgEKCQ60V < k - 1) {
            Ze7rgEKCQ60V = Ze7rgEKCQ60V +1;
            printf ("%d,", *p++);
        };
    }
    printf ("%d", *p);
}

