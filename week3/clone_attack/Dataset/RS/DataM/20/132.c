void  main () {
    int m, length [100], i = 0, j, l, p;
    char str [(665 - 565)] [(262 - 222)], su [4], s [10], max;
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
    do {
        gets (str [i]);
        i = i + 1;
        m = strlen (str[i - (362 - 361)]);
    }
    while (!(0 == m));
    l = i - 1;
    {
        i = 0;
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
        while (l > i) {
            length[i] = strlen (str[i]);
            max = str[i][0];
            {
                j = 1;
                while (length[i] - 4 > j) {
                    if (max < str[i][j]) {
                        max = str[i][j];
                        p = j;
                    }
                    j = j + 1;
                };
            }
            {
                j = 0;
                while ((602 - 599) > j) {
                    su[j] = str[i][length[i] + j - 3];
                    j = j + 1;
                };
            }
            for (j = 0; j < length[i] - p - 5; j = j + 1)
                s[j] = str[i][p + j + 1];
            {
                j = 0;
                while (p >= j) {
                    str[i][j] = str[i][j];
                    j = j + 1;
                };
            }
            {
                j = p + 1;
                while (j <= p + 3) {
                    str[i][j] = su[j - p - 1];
                    j = j + 1;
                };
            }
            {
                j = p + 4;
                while (j < length[i]) {
                    str[i][j] = s[j - p - 4];
                    j++;
                };
            }
            {
                j = i;
                while (j < 40) {
                    str[i][j] = '\0';
                    j++;
                };
            }
            printf ("%s\n", str[i]);
            i++;
        };
    };
}

