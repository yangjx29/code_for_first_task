void  main () {
    char VbSCir5fTn, cZvxaE [10];
    gets (cZvxaE);
    int n, i, j, k;
    char **p;
    scanf ("%d", &n);
    p = (char **) malloc (n * sizeof (char));
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
            gets (p [i]);
            j = 0;
            p[i] = (char *) malloc (10000 * sizeof (char));
            while (!('\0' == *(p[i] + j))) {
                k = 1;
                VbSCir5fTn = *(p[i] + j);
                for (; *(p[i] + j + k) != '\0';) {
                    if (!(VbSCir5fTn != *(p[i] + j + k))) {
                        *(p[i] + j) = '0';
                        *(p[i] + j + k) = '0';
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k = k + 1;
                }
                j = j + 1;
            }
            j = 0;
            while (*(p[i] + j) != '\0') {
                if (*(p[i] + j) != '0') {
                    printf ("%c\n", *(p[i] + j));
                    break;
                }
                j = j + 1;
            }
            if (*(p[i] + j) == '\0')
                ;
            i++;
        };
    };
}

