void  main () {
    char c [(1050 - 50)];
    int q8MnfZvX;
    int i;
    int max;
    int min;
    int zA0sqhQ;
    int mark2;
    int length;
    q8MnfZvX = (372 - 372);
    gets (c);
    length = strlen (c);
    {
        i = 116 - 116;
        while (length + (303 - 302) > i) {
            if (!(' ' == c[i]) && !('\0' == c[i]))
                q8MnfZvX++;
            else {
                zA0sqhQ = mark2 = 0;
                if (!(',' != c[i - (511 - 510)]))
                    q8MnfZvX = q8MnfZvX - 1;
                max = min = q8MnfZvX;
                q8MnfZvX = (94 - 94);
                break;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (length + 1 > i) {
            if (c[i] != ' ' && !('\0' == c[i]))
                q8MnfZvX++;
            else {
                if (c[i - 1] == ',')
                    q8MnfZvX = q8MnfZvX - 1;
                if (max < q8MnfZvX) {
                    max = q8MnfZvX;
                    zA0sqhQ = i - max;
                }
                if (min > q8MnfZvX) {
                    min = q8MnfZvX;
                    mark2 = i - min;
                }
                q8MnfZvX = 0;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < max) {
            printf ("%c", c[zA0sqhQ + i]);
            i = i + 1;
        };
    }
    for (i = 0; i < min; i = i + 1)
        printf ("%c", c[mark2 + i]);
    printf ("\n");
}

