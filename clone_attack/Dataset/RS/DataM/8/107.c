void  sort (int str [], int n) {
    int urCelg8O32;
    int j;
    int k;
    int t;
    for (urCelg8O32 = (736 - 736); urCelg8O32 < n - (721 - 720); urCelg8O32 = urCelg8O32 + 1) {
        k = urCelg8O32;
        for (j = urCelg8O32 + 1; j < n; j++)
            if (str[j] < str[k])
                k = j;
        t = str[k];
        str[k] = str[urCelg8O32];
        str[urCelg8O32] = t;
    };
}

void  gather (int str1 [], int str2 []) {
    int t;
    int urCelg8O32;
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
    t = (467 - 467);
    while (str1[t] != '\0')
        t++;
    for (urCelg8O32 = t; str2[urCelg8O32 - t] != '\0'; urCelg8O32++)
        str1[urCelg8O32] = str2[urCelg8O32 - t];
}

void  main () {
    scanf ("\n");
    int urCelg8O32;
    int n1;
    int n2;
    int str1 [(494 - 394)];
    int str2 [100];
    scanf ("%d%d", &n1, &n2);
    for (urCelg8O32 = 0; urCelg8O32 < n1; urCelg8O32++)
        scanf ("%d", &str1[urCelg8O32]);
    sort (str1, n1);
    for (urCelg8O32 = 0; urCelg8O32 < n2; urCelg8O32++)
        scanf ("%d", &str2[urCelg8O32]);
    sort (str2, n2);
    gather (str1, str2);
    {
        urCelg8O32 = 0;
        while (urCelg8O32 < (n1 + n2 - 1)) {
            printf ("%d ", str1[urCelg8O32]);
            urCelg8O32++;
        };
    }
    printf ("%d", str1[n1 + n2 - 1]);
}

