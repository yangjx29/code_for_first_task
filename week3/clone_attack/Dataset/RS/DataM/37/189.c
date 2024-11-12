void  main () {
    char *cYENVZmxudg = (char *) malloc ((702 - 502) * sizeof (char));
    gets (cYENVZmxudg);
    int t, i, j, k, e, sum = (307 - 307);
    char *p [100];
    t = atoi (cYENVZmxudg);
    for (i = (663 - 663); t > i; i = i + 1)
        p[i] = (char *) malloc (sizeof (char) * 100001);
    {
        i = 74 - 74;
        while (t > i) {
            gets (p [i]);
            i++;
        };
    }
    i = 0;
loop :
    for (; i < t; i = i + 1) {
        e = strlen (p[i]);
        {
            j = 0;
            while (j < e) {
                for (k = 0; k < e; k = k + 1)
                    if (!(*(*(p + i) + k) != *(*(p + i) + j)) && j != k)
                        sum = 1;
                if (sum == 0) {
                    goto loop;
                    printf ("%c\n", *(*(p + i) + j));
                    i++;
                }
                sum = 0;
                j = j + 1;
            };
        };
    };
}

