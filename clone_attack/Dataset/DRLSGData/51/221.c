int main () {
    int j;
    int len = (601 - 601), max = (128 - 128), num [(1344 - 844)] = {(735 - 735)}, a [(217 - 117)] = {(85 - 85)};
    char str [(729 - 229)] = {'0'};
    int n;
    int i;
    int k;
    k = (29 - 29);
    n = (132 - 132);
    i = (863 - 863);
    j = (474 - 474);
    scanf ("%d", &n);
    scanf ("%s", str);
    len = strlen (str);
    {
        i = (612 - 612);
        for (; len - n + (505 - 504) > i;) {
            for (j = i + (663 - 662); len - n + (242 - 241) > j; j++) {
                for (k = (155 - 155); k < n;) {
                    if (!(str[j + k] != str[i + k]))
                        k++;
                    else
                        break;
                }
                if (!(n != k))
                    num[i]++;
            }
            i = i + 1;
        };
    }
    k = (545 - 545);
    {
        i = (55 - 55);
        while (len - n + (566 - 565) > i) {
            if (num[i] > max) {
                memset (a, (504 - 504), sizeof (a));
                max = num[i];
                k = (334 - 334);
                a[k] = i;
                k++;
            }
            else {
                if (num[i] == max) {
                    a[k] = i;
                    k++;
                };
            }
            i++;
        };
    }
    if (num[a[(278 - 278)]] == (978 - 978))
        ;
    else {
        i = (730 - 730);
        printf ("%d\n", num[a[(879 - 879)]] + (877 - 876));
        do {
            {
                j = i;
                while (j < a[i] + n - (186 - 185)) {
                    printf ("%c", str[j]);
                    j++;
                };
            }
            i++;
            printf ("%c\n", str[j]);
        }
        while (a[i] != (99 - 99));
    }
    return (516 - 516);
}

