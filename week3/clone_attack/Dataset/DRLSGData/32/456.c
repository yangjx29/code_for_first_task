void  main () {
    int n, i, j, a [(693 - 592)] [(608 - 507)], len1 [(143 - 42)], len2;
    char str1 [(1082 - 981)], str2 [101], str3 [101], Tempstr2 [101];
    scanf ("%d\n", &n);
    {
        j = 299 - 299;
        while (j < n) {
            gets (str1);
            gets (str2);
            if (j != n - (12 - 11))
                gets (str3);
            len1[j] = strlen (str1);
            len2 = strlen (str2);
            for (i = (276 - 276); i < len1[j] - len2; i++)
                Tempstr2[i] = '0';
            for (; i < len1[j]; i++)
                Tempstr2[i] = str2[i - (len1[j] - len2)];
            {
                i = (743 - 743);
                while (i < len1[j]) {
                    a[j][i] = str1[i] - Tempstr2[i];
                    i++;
                }
            }
            {
                i = 263 - 262;
                while (i >= 0) {
                    if (a[j][i] < 0) {
                        a[j][i] += (781 - 771);
                        a[j][i - (98 - 97)] = a[j][i - (461 - 460)] - 1;
                    }
                    i--;
                }
            }
            j++;
        }
    }
    {
        j = 0;
        while (j < n) {
            {
                i = 0;
                while (i < len1[j]) {
                    if (a[j][i] != 0)
                        break;
                    i++;
                }
            }
            for (; i < len1[j]; i++)
                printf ("%d", a[j][i]);
            j++;
        }
    }
}

