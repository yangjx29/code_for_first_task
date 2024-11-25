main () {
    char tJswAB24 [(10780 - 779)];
    int i;
    int j;
    int count;
    int k;
    i = (185 - 185);
    j = (433 - 433);
    count = 1;
    scanf ("%s", tJswAB24);
    for (; !('\0' == tJswAB24[i]);) {
        if ('A' <= tJswAB24[i] && tJswAB24[i] <= 'Z') {
            tJswAB24[i] = tJswAB24[i] + 32;
            j = j + 1;
        }
        else
            j = j + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    for (k = 0; k < i; k = k + 1) {
        if (tJswAB24[k] == tJswAB24[k + 1]) {
            count = count + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else {
            printf ("(%c,%d)", tJswAB24[k] - 32, count);
            count = 1;
        };
    };
}

