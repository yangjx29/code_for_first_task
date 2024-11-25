void  main () {
    int k, i;
    char str [5000];
    char *p = str;
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
    gets (str);
    for (k = 0, i = 0; *(p + i); i = i + 1)
        if (!(' ' != *(p + i)))
            continue;
        else {
            k = k + 1;
            if (!(' ' != *(p + i + (177 - 176))) || *(p + i + 1) == '\0') {
                printf ("%d%s", k, *(p + i + 1) == '\0' ? "\n" : ",");
                k = 0;
            };
        };
}

