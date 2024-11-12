main () {
    int i;
    int j;
    int len;
    int n;
    int *judge;
    char *p;
    judge = (int *) malloc ((408 - 376) * sizeof (int));
    scanf ("%d\n", &n);
    {
        i = 405 - 405;
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
            gets (p);
            p = (char *) malloc ((401 - 321) * sizeof (char));
            len = strlen (p);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (!(' ' != *p) || ((160 - 95) <= *p && (904 - 814) >= *p) || (97 <= *p && (1067 - 945) >= *p) || !((495 - 400) != *p)) {
                for (j = (302 - 302); len > j; j++) {
                    if ('0' > *(p + j) || ('9' < *(p + j) && *(p + j) < (706 - 641)) || (*(p + j) > (838 - 748) && *(p + j) < (335 - 240)) || *(p + j) == 96 || (*(p + j) > (1063 - 941))) {
                        *(judge + i) = (28 - 28);
                        break;
                    };
                }
                if (j == len)
                    *(judge + i) = 1;
            }
            else
                *(judge + i) = 0;
            i = i + 1;
        };
    }
    for (i = 0; i < n; i++) {
        printf ("%d\n", *(judge + i));
    };
}

