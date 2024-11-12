void  main () {
    int i;
    int j;
    int n;
    int b;
    int c;
    i = (949 - 949);
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
    char str [(532 - 432)] [(386 - 376)];
    char substr [(972 - 872)] [3];
    char s;
    char str1 [(580 - 480)] [(965 - 935)] = {(452 - 452)};
    char str2 [100] [10] = {(267 - 267)};
    while (scanf ("%s %s", str[i], substr[i]) != EOF) {
        n = strlen (str[i]);
        s = str[i][(143 - 143)];
        for (j = (175 - 174); j < n; j = j + 1) {
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
            if (str[i][j] > s) {
                s = str[i][j];
                b = j;
            };
        }
        {
            j = 0;
            c = 0;
            while (c <= b) {
                str1[i][c] = str[i][j];
                j = j + 1;
                c = c + 1;
            };
        }
        {
            j = b + 1;
            c = 0;
            while (j < n) {
                str2[i][c] = str[i][j];
                j = j + 1;
                c++;
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
        strcat (str1[i], substr[i]);
        strcat (str1[i], str2[i]);
        printf ("%s\n", str1[i]);
        i = i + 1;
    };
}

