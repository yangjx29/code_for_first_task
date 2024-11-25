void  main () {
    char **p;
    char *str;
    gets (str);
    int n, i, j, s;
    int *q;
    scanf ("%d", &n);
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
    q = (int *) malloc (n * sizeof (int));
    str = (char *) malloc (80 * sizeof (char));
    p = (char **) malloc (n * sizeof (char *));
    {
        i = 0;
        while (i < n) {
            *(p + i) = (char *) malloc (80 * sizeof (char));
            gets (*(p + i));
            if ((**(p + i)) < 'A' || ('Z' < (**(p + i)) && 'a' > (**(p + i)) && !('_' == (**(p + i)))) || 'z' < (**(p + i)))
                *(q + i) = 0;
            else {
                if (*(*(p + i) + 1) == '\0')
                    *(q + i) = 1;
                {
                    j = 1;
                    while (81 > j, !('\0' == *(*(p + i) + j))) {
                        s = 0;
                        if (*(*(p + i) + j) < '0' || (*(*(p + i) + j) > '9' && 'A' > *(*(p + i) + j)) || (*(*(p + i) + j) > 'Z' && *(*(p + i) + j) < 'a' && *(*(p + i) + j) != '_') || *(*(p + i) + j) > 'z') {
                            *(q + i) = 0;
                            break;
                        }
                        else
                            s++;
                        j++;
                        if (s > 0)
                            *(q + i) = 1;
                        else
                            *(q + i) = 0;
                    };
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < (n - 1)) {
            printf ("%d\n", *(q + i));
            i++;
        };
    }
    printf ("%d", *(q + i));
}

