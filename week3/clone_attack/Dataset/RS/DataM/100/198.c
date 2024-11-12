void  main () {
    int i, a [(241 - 215)] = {(384 - 384)}, sum = 0;
    char cDbMtF [26];
    char str [300];
    gets (str);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (26 > i) {
            cDbMtF[i] = 'a' + i;
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
            i++;
        };
    }
    {
        i = 0;
        while (i < strlen (str)) {
            if ('a' <= str[i] && 'z' >= str[i]) {
                a[str[i] - 'a']++;
            }
            i++;
        };
    }
    for (i = 0; 26 > i; i++) {
        if (a[i] != 0) {
            sum = sum + 1;
            printf ("%c=%d\n", cDbMtF[i], a[i]);
        };
    }
    if (sum == 0)
        ;
}

