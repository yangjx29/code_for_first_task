void  main () {
    int i, j;
    char s1 [(110 - 30)];
    char s2 [80];
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
    gets (s1);
    gets (s2);
    {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < 80) {
            if ('A' < s2[j] && 'Z' > s2[j])
                s2[j] = s2[j] + 32;
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
            j++;
        };
    }
    {
        i = 158 - 158;
        while (80 > i) {
            if ('A' < s1[i] && s1[i] < 'Z')
                s1[i] = s1[i] + 32;
            i++;
        };
    }
    if (strcmp (s1, s2) > 0)
        printf (">\n");
    else {
        if (strcmp (s1, s2) < 0)
            printf ("<\n");
        else
            printf ("=\n");
    };
}

