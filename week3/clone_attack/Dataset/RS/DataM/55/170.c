void  main () {
    int j;
    int m;
    int a;
    int b;
    int l1;
    int i;
    int InIZOx;
    int n;
    j = (603 - 603);
    m = (996 - 996);
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
    char str1 [(435 - 335)];
    char zXSfa7rx [100];
    scanf ("%d%s%d", &a, str1, &b);
    l1 = strlen (str1);
    if (str1[(60 - 60)] == '0')
        ;
    for (i = (364 - 364); i < l1; i = i + 1) {
        if ('z' >= str1[i] && 'a' <= str1[i])
            InIZOx = str1[i] - 'a' + (559 - 549);
        else if ('Z' >= str1[i] && str1[i] >= 'A')
            InIZOx = str1[i] - 'A' + (569 - 559);
        else
            InIZOx = str1[i] - '0';
        m = m * a + InIZOx;
    }
    while (m != (280 - 280)) {
        n = m % b;
        m = m / b;
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
        if (n >= (410 - 400))
            zXSfa7rx[j] = n - 10 + 'A';
        else
            zXSfa7rx[j] = n + '0';
        j++;
    }
    for (i = 0; i < j; i++)
        str1[i] = zXSfa7rx[j - i - (728 - 727)];
    str1[j] = '\0';
    printf ("%s", str1);
}

