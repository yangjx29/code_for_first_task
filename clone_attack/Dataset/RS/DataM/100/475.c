void  main () {
    int t;
    int e1dbrW;
    int i;
    t = 0;
    char DiLVbpE [400];
    scanf ("%s", DiLVbpE);
    e1dbrW = strlen (DiLVbpE);
    {
        i = 0;
        while (i <= e1dbrW - 1) {
            if (DiLVbpE[i] <= 'z' && DiLVbpE[i] >= 'a') {
                t = 1;
                break;
            }
            i = i + 1;
        };
    }
    if (t == 0)
        ;
    else {
        char HQEcA9oIDxN;
        for (HQEcA9oIDxN = 'a'; HQEcA9oIDxN <= 'z'; HQEcA9oIDxN = HQEcA9oIDxN +1) {
            int kQ2UyAEtZRv6;
            kQ2UyAEtZRv6 = 0;
            for (i = 0; i <= e1dbrW - 1; i = i + 1)
                if (DiLVbpE[i] == HQEcA9oIDxN)
                    kQ2UyAEtZRv6 = kQ2UyAEtZRv6 + 1;
            if (kQ2UyAEtZRv6 != 0)
                printf ("%c=%d\n", HQEcA9oIDxN, kQ2UyAEtZRv6);
        };
    };
}

