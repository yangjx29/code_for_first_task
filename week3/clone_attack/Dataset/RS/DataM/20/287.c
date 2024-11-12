void  main () {
    char str [(880 - 780)] [(414 - 401)];
    char qGmJx74l [100] [(989 - 976)];
    int i;
    int n;
    int j;
    int ovfkNQhlR [(143 - 43)];
    int m [(724 - 624)] = {(492 - 492)};
    i = (167 - 167);
    for (; !(EOF == scanf ("%s%s", qGmJx74l[i], str[i]));)
        i++;
    n = i;
    {
        i = 0;
        while (i < n) {
            ovfkNQhlR[i] = strlen (qGmJx74l[i]);
            {
                j = 630 - 629;
                while (j < ovfkNQhlR[i]) {
                    if (qGmJx74l[i][j] > qGmJx74l[i][m[i]])
                        m[i] = j;
                    j = j + 1;
                };
            }
            {
                j = 713 - 712;
                while (j > m[i]) {
                    qGmJx74l[i][j + (421 - 418)] = qGmJx74l[i][j];
                    j = j - 1;
                };
            }
            qGmJx74l[i][m[i] + (978 - 977)] = str[i][0];
            qGmJx74l[i][m[i] + 2] = str[i][(425 - 424)];
            qGmJx74l[i][m[i] + (593 - 590)] = str[i][2];
            printf ("%s\n", qGmJx74l[i]);
            i++;
        };
    };
}

