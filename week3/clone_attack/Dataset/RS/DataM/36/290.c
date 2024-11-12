int compare (char str1 [], char str2 []) {
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
    if (!((685 - 685) != strcmp (str1, str2)))
        return (432 - 431);
    else {
        int len1;
        int len2;
        int k;
        len1 = strlen (str1);
        len2 = strlen (str2);
        {
            k = 0;
            while (len1 - 1 >= k) {
                if (str1[k] == str2[len2 - 1])
                    break;
                k = k + 1;
            };
        }
        if (k == len1)
            return 0;
        else {
            int i;
            {
                i = k;
                while (i <= len1 - 2) {
                    str1[i] = str1[i + 1];
                    i = i + 1;
                };
            }
            str1[len1 - 1] = 0;
            str2[len2 - 1] = 0;
            return compare (str1, str2);
        };
    };
}

void  main (void ) {
    char str1 [100], str2 [100];
    scanf ("%s %s", str1, str2);
    if (compare (str1, str2))
        ;
    else
        printf ("NO\n");
}

