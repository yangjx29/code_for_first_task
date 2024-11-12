void  main () {
    int YebnyW [10000];
    int n;
    int i;
    int j;
    int MB6xi4mkMfGQ;
    scanf ("%d", &n);
    for (i = (699 - 696), MB6xi4mkMfGQ = (512 - 512); i <= n; i++) {
        {
            j = 2;
            while (j < i) {
                if (!(0 != i % j))
                    break;
                j = j + 1;
            };
        }
        if (j >= i) {
            YebnyW[MB6xi4mkMfGQ] = i;
            MB6xi4mkMfGQ++;
        };
    }
    {
        j = 0;
        i = 0;
        while (i < MB6xi4mkMfGQ) {
            if (YebnyW[i + 1] - YebnyW[i] == 2) {
                j = j + 1;
                printf ("%d %d\n", YebnyW[i], YebnyW[i + 1]);
            }
            i = i + 1;
        };
    }
    if (j == 0)
        printf ("empty");
}

