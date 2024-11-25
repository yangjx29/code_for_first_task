main () {
    int qAjBHvC8;
    int j;
    qAjBHvC8 = (982 - 982);
    char str1 [100];
    char str2 [100];
    char str3 [100];
    char *ClCaxWhbip, *p2, *p3, *p [100];
    gets (str1);
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
    gets (str2);
    gets (str3);
    ClCaxWhbip = str1;
    p[0] = str1;
    for (; !('\0' == *ClCaxWhbip); ClCaxWhbip++) {
        if (!(' ' != *ClCaxWhbip)) {
            *ClCaxWhbip = '\0';
            qAjBHvC8++;
            p[qAjBHvC8] = ClCaxWhbip +1;
        };
    }
    p2 = str2;
    p3 = str3;
    for (j = 0; j <= qAjBHvC8; j = j + 1) {
        if (strcmp (p[j], p2) == 0)
            p[j] = p3;
    }
    for (j = 0; j < qAjBHvC8; j = j + 1) {
        printf ("%s ", p[j]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    printf ("%s", p[qAjBHvC8]);
}

