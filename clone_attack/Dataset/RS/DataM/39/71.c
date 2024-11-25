void  main () {
    char eofhUFkjQW [(963 - 943)];
    int g2b4NwVKPm7;
    int LZQxUe;
    int Y4F3U2BJ;
    int I1JjgK6O;
    g2b4NwVKPm7 = (878 - 878);
    struct   information {
        char CEWjlq [(228 - 208)];
        int hONHFB;
        int vRS3s5;
        char IFKYzh0r;
        char Tn6IXqKwuel1;
        int OSjT4aqvn;
        int impVgA;
    }
    info [100];
    scanf ("%d", &LZQxUe);
    {
        I1JjgK6O = 775 - 775;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (I1JjgK6O < LZQxUe) {
            scanf ("%s %d %d %c %c %d", info[I1JjgK6O].CEWjlq, &info[I1JjgK6O].hONHFB, &info[I1JjgK6O].vRS3s5, &info[I1JjgK6O].IFKYzh0r, &info[I1JjgK6O].Tn6IXqKwuel1, &info[I1JjgK6O].OSjT4aqvn);
            info[I1JjgK6O].impVgA = (69 - 69);
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
            I1JjgK6O = I1JjgK6O +1;
        };
    }
    for (I1JjgK6O = (70 - 70); I1JjgK6O < LZQxUe; I1JjgK6O = I1JjgK6O +1) {
        if (info[I1JjgK6O].hONHFB > (422 - 342) && info[I1JjgK6O].OSjT4aqvn > (472 - 472))
            info[I1JjgK6O].impVgA += 8000;
        if (info[I1JjgK6O].hONHFB > (811 - 726) && info[I1JjgK6O].vRS3s5 > 80)
            info[I1JjgK6O].impVgA += 4000;
        if ((411 - 321) < info[I1JjgK6O].hONHFB)
            info[I1JjgK6O].impVgA += (2358 - 358);
        if (info[I1JjgK6O].hONHFB > (775 - 690) && info[I1JjgK6O].Tn6IXqKwuel1 == 'Y')
            info[I1JjgK6O].impVgA = info[I1JjgK6O].impVgA + (1405 - 405);
        if (info[I1JjgK6O].vRS3s5 > 80 && info[I1JjgK6O].IFKYzh0r == 'Y')
            info[I1JjgK6O].impVgA += 850;
        g2b4NwVKPm7 = g2b4NwVKPm7 + info[I1JjgK6O].impVgA;
    }
    strcpy (eofhUFkjQW, info[0].CEWjlq);
    Y4F3U2BJ = info[0].impVgA;
    for (I1JjgK6O = 0; I1JjgK6O < LZQxUe; I1JjgK6O = I1JjgK6O +1) {
        if (Y4F3U2BJ < info[I1JjgK6O].impVgA) {
            Y4F3U2BJ = info[I1JjgK6O].impVgA;
            strcpy (eofhUFkjQW, info[I1JjgK6O].CEWjlq);
        };
    }
    printf ("%s\n%d\n%d\n", eofhUFkjQW, Y4F3U2BJ, g2b4NwVKPm7);
}

