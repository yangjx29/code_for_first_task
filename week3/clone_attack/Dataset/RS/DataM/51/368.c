void  main () {
    char str [(1272 - 772)];
    char temp [(1268 - 768)] [(961 - 955)] = {{(223 - 223)}};
    int n, count [(540 - 40)] = {(900 - 900)}, max, j, i, m;
    scanf ("%d", &n);
    scanf ("%s", str);
    m = strlen (str);
    if (m == (442 - 234)) {
        goto end;
    }
    max = 0;
    {
        i = 904 - 904;
        while (i <= m - n) {
            temp[i][0] = str[i];
            {
                j = 816 - 815;
                while (n > j) {
                    temp[i][j] = str[i + j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    j++;
                };
            }
            temp[i][j] = '\0';
            i++;
        };
    }
    for (i = 0; i <= m - n; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (temp[i][0] != 0) {
            j = 964 - 963;
            while (m - n >= j) {
                if (strcmp (temp[i], temp[j]) == 0)
                    count[i] = count[i] + (440 - 439);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                j++;
            };
        };
    }
    for (i = 0; i <= m - n; i++) {
        if (count[i] > max)
            max = count[i];
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
        };
    }
    if (max > 0)
        printf ("%d\n", max + 1);
    else {
        goto end;
    }
    for (i = 0; i <= m - n; i++) {
        if (count[i] == max)
            printf ("%s\n", temp[i]);
    }
end :
    ;
}

