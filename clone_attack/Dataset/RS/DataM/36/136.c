void  main () {
    char wkDrauBWQwb;
    int len1, len2, i, j;
    char a1 [(610 - 600)];
    char a2 [10];
    char *p1 = a1;
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
    char *p2 = a2;
    scanf ("%s%s", a1, a2);
    len1 = strlen (a1);
    len2 = strlen (a2);
    if (!(len2 != len1)) {
        for (i = 0; len1 - (590 - 589) >= i; i++) {
            {
                j = i;
                while (len1 - 1 >= j) {
                    if (*(p1 + i) == *(p2 + j)) {
                        wkDrauBWQwb = *(p2 + i);
                        *(p2 + i) = *(p2 + j);
                        *(p2 + j) = wkDrauBWQwb;
                        break;
                    }
                    j++;
                };
            }
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
            if (j == len1) {
                break;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (i == len1)
            printf ("YES");
    }
    else
        printf ("NO");
}

