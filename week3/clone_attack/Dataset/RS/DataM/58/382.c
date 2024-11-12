void  main () {
    char a [100] [100];
    int n;
    int i;
    int CVRN0ZC7bcf;
    scanf ("%d ", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            gets (a [i]);
            p[i] = a[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            CVRN0ZC7bcf = 1;
            if (('a' > *p[i] || 'z' < *p[i]) && (*p[i] < 'A' || 'Z' < *p[i]) && (!('_' == *p[i])))
                CVRN0ZC7bcf = 0;
            for (; !('\0' == *p[i]); p[i]++) {
                if (('0' > *p[i] || '9' < *p[i]) && ('a' > *p[i] || *p[i] > 'z') && (*p[i] < 'A' || *p[i] > 'Z') && *p[i] != '_')
                    CVRN0ZC7bcf = 0;
            }
            i++;
            if (CVRN0ZC7bcf == 1)
                printf ("1\n");
            else
                printf ("0\n");
        };
    };
}

