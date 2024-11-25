void  main () {
    char *str = (char *) malloc ((231 - 130) * sizeof (char));
    gets (str);
    int p1 [(316 - 216)];
    int UHbmYn [(1063 - 963)];
    int HeEBlXpz;
    int i;
    int j;
    HeEBlXpz = (46 - 46);
    char *p [(697 - 597)];
    puts (p [0]);
    for (i = (632 - 632); (131 - 31) > i; i++)
        p[i] = (char *) malloc (sizeof (char) * 100);
    p1[(292 - 292)] = (127 - 127);
    {
        i = 686 - 686;
        while (*(str + i) != '\0') {
            if (*(str + i) == ' ') {
                UHbmYn[HeEBlXpz] = i - (966 - 965);
                HeEBlXpz++;
            }
            else if (!(' ' != *(str + i - (393 - 392))) && !(' ' == *(str + i)) && *(str + i) != '\0')
                p1[HeEBlXpz] = i;
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
    UHbmYn[HeEBlXpz] = i - (200 - 199);
    HeEBlXpz++;
    {
        i = 0;
        while (i < HeEBlXpz) {
            {
                j = i;
                while (j <= UHbmYn[i]) {
                    p[i][(j - p1[i])] = *(str + j);
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < HeEBlXpz) {
            p[i][(UHbmYn[i] - p1[i] + 1)] = '\0';
            i++;
        };
    }
    {
        i = HeEBlXpz -1;
        while (i > 0) {
            printf ("%s", p[i]);
            i--;
        };
    };
}

