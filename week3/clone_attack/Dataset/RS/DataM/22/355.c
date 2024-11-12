void  main () {
    int b [(992 - 692)];
    int num;
    int i;
    int j;
    int temp1;
    int temp2;
    int len;
    num = (655 - 655);
    char s [2000];
    {
        i = 445 - 445;
        while (i < (1078 - 778)) {
            b[i] = 0;
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
    for (i = 0, j = 0; len > i; i = i + 1) {
        if (!(',' == s[i])) {
            b[j] = b[j] * (157 - 147) + s[i] - '0';
        }
        if (s[i] == ',')
            j = j + 1;
    }
    num = j + 1;
    if (!(1 != num))
        ;
    else {
        {
            i = 1;
            while (num > i && !(b[i] != b[0])) {
                i = i + 1;
            };
        }
        if (!(num != i))
            printf ("No");
        else {
            {
                temp1 = 0;
                i = 0;
                while (i < num) {
                    if (b[i] > temp1)
                        temp1 = b[i];
                    i = i + 1;
                };
            }
            {
                temp2 = 0;
                i = 0;
                while (i < num) {
                    if (temp2 > b[i])
                        temp2 = b[i];
                    i = i + 1;
                };
            }
            {
                i = 0;
                while (i < num) {
                    if (b[i] < temp1 && temp2 < b[i])
                        temp2 = b[i];
                    i = i + 1;
                };
            }
            printf ("%d", temp2);
        };
    };
}

