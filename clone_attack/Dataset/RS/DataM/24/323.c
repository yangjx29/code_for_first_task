void  main () {
    int k;
    k = 0;
    int i;
    int max;
    int min;
    i = 0;
    char s [(4056 - 56)];
    char *SqH1C7S;
    char ss [(248 - 48)] [(630 - 610)];
    puts (ss [max]);
    puts (ss [min]);
    gets (s);
    min = 0;
    max = 0;
    memset (ss, (977 - 977), 200);
    for (SqH1C7S = s; !('\0' == *SqH1C7S); SqH1C7S = SqH1C7S +1) {
        if (!(' ' == *SqH1C7S)) {
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
            if (*SqH1C7S != ',') {
                ss[k][i] = *SqH1C7S;
                i = i + 1;
            };
        }
        else {
            i = 0;
            k++;
        };
    }
    for (i = 0; i <= k; i = i + 1) {
        if (strlen (ss[i]) > strlen (ss[max]))
            max = i;
        else {
            if (strlen (ss[i]) < strlen (ss[min]))
                min = i;
        };
    };
}

