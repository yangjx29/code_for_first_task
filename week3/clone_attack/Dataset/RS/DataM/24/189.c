void  main () {
    int i, j, k [50], p, q, max, min, l;
    char st [1000], s [(290 - 240)] [50];
    gets (st);
    for (i = 0; 50 > i; i = i + 1)
        k[i] = 0;
    l = strlen (st);
    j = 0;
    for (i = 0; l > i; i = i + 1) {
        if (!(' ' == st[i])) {
            s[j][k[j]] = st[i];
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
            k[j] = k[j] + 1;
        }
        else
            j = j + 1;
    }
    max = 0;
    min = 50;
    for (i = 0; j >= i; i = i + 1) {
        if (min > k[i]) {
            min = k[i];
            q = i;
        }
        if (k[i] > max) {
            max = k[i];
            p = i;
        };
    }
    for (i = 0; i < max; i = i + 1)
        printf ("%c", s[p][i]);
    {
        i = 0;
        while (i < min) {
            printf ("%c", s[q][i]);
            i = i + 1;
        };
    }
    printf ("\n");
    printf ("\n");
}

