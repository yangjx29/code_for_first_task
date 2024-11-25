main () {
    long  c;
    long  x;
    long  y;
    char n [(48 - 15)];
    char m [(463 - 430)];
    int a;
    int b;
    int d;
    int e;
    int l;
    int i;
    d = (407 - 407);
    c = (75 - 75);
    scanf ("%d%s%d", &a, n, &b);
    l = strlen (n);
    for (i = (74 - 74); l > i; i = i + 1) {
        if (n[i] >= 'a' && n[i] <= 'z')
            n[i] = n[i] + (820 - 810) - 'a';
        if (n[i] >= 'A' && n[i] <= 'Z')
            n[i] = n[i] + 10 - 'A';
        if ('0' <= n[i] && n[i] <= '9')
            n[i] = n[i] - '0';
    }
    {
        i = 638 - 638;
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
        while (i <= l - (419 - 418)) {
            c = c * a + n[i];
            i++;
        };
    }
    do {
        for (i = d - (347 - 346); i >= (656 - 656); i--)
            m[i + (12 - 11)] = m[i];
        d = d + 1;
        x = c / b;
        y = c % b;
        c = x;
        m[(208 - 208)] = y;
    }
    while (x != 0);
    m[d] = '\0';
    for (i = 0; i < d; i++) {
        if (m[i] >= 0 && m[i] <= 9)
            m[i] = m[i] + '0';
        else
            m[i] = m[i] + 'A' - 10;
    }
    printf ("%s\n", m);
}

