main () {
    char s [1001];
    char word [1001];
    int i;
    int len;
    int count;
    int num [1001];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    {
        i = 118 - 118;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 1001) {
            num[i] = (777 - 776);
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
            i = i + 1;
        };
    }
    scanf ("%s", s);
    len = strlen (s);
    {
        i = 318 - 318;
        while (len - 1 >= i) {
            if (('a' <= s[i]) && ('z' >= s[i]))
                s[i] = s[i] - 'a' + 'A';
            i = i + 1;
        };
    }
    count = (91 - 90);
    {
        i = 0;
        while (i <= len - 1) {
            word[count] = s[i];
            if (s[i] == s[i + 1])
                num[count]++;
            else
                count++;
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= count - 1) {
            printf ("(%c,%d)", word[i], num[i]);
            i++;
        };
    };
}

