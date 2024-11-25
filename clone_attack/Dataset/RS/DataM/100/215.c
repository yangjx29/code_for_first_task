void  main () {
    int sum;
    sum = 0;
    int i;
    int l;
    int j;
    int b [26] = {0};
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
    char str [300], a [26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    gets (str);
    l = strlen (str);
    for (i = 0; i < l; i = i + 1) {
        for (j = 0; j < 26; j++) {
            if (str[i] == a[j])
                b[j] = b[j] + 1;
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
        };
    }
    for (i = 0; i < 26; i++) {
        if (b[i] != 0)
            printf ("%c=%d\n", a[i], b[i]);
    }
    for (i = 0; i < 26; i++)
        sum = sum + b[i];
    if (sum == 0)
        printf ("No");
}

