main () {
    int num;
    int n;
    int i;
    int j;
    int numwords [500] = {(740 - 740)};
    num = (394 - 394);
    char words [(1238 - 738)] [40];
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%s", words[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (!('\0' == words[i][j])) {
                    numwords[i]++;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n - (989 - 988) > i) {
            if ((numwords[i] + num) > 80) {
                printf ("%s ", words[i]);
                num = numwords[i] + (139 - 138);
            }
            else if ((numwords[i + (609 - 608)] + num + numwords[i] + (226 - 225)) > 80) {
                printf ("%s", words[i]);
                num = num + numwords[i] + (151 - 150);
            }
            else {
                printf ("%s ", words[i]);
                num = num + numwords[i] + 1;
            }
            i++;
        };
    }
    printf ("%s", words[n - 1]);
}

