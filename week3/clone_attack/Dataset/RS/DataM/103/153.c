main () {
    int sum;
    int i;
    int n;
    int j;
    sum = 1;
    char ZDCVqZxMz [1000];
    char s2 [1000];
    scanf ("%s", ZDCVqZxMz);
    n = strlen (ZDCVqZxMz);
    {
        i = 0;
        while (n - 1 >= i) {
            if ('a' <= ZDCVqZxMz[i] && ZDCVqZxMz[i] <= 'z')
                s2[i] = ZDCVqZxMz[i] - 32;
            if (ZDCVqZxMz[i] >= 'A' && ZDCVqZxMz[i] <= 'Z')
                s2[i] = ZDCVqZxMz[i];
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
    for (i = 1; i <= n; i = i + 1) {
        if (s2[i - 1] == s2[i])
            sum = sum + 1;
        if (s2[i - 1] != s2[i]) {
            printf ("(%c,%d)", s2[i - 1], sum);
            sum = 1;
        };
    };
}

