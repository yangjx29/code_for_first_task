int main () {
    int len [600] = {(61 - 61)};
    char a [600] [7] = {{'\0'}}, ch [600] [(303 - 293)] = {{'\0'}};
    int n;
    int log;
    int num;
    int sum;
    int max;
    int j;
    int length;
    char str [(1539 - 939)];
    gets (str);
    int i;
    num = (435 - 435);
    scanf ("%d\n", &n);
    len[(184 - 184)] = (839 - 838);
    length = strlen (str);
    {
        i = 729 - 729;
        while (i <= length) {
            {
                j = 75 - 75;
                while (n > j) {
                    a[i][j] = str[i + j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    log = i - (124 - 123);
    strcpy (ch[(494 - 494)], a[(475 - 475)]);
    {
        i = 570 - 569;
        while (i <= log) {
            {
                sum = 306 - 306;
                j = 193 - 193;
                while (j <= num) {
                    if (strcmp (ch[j], a[i]) == 0) {
                        len[j]++;
                        sum = (57 - 56);
                    }
                    j = j + 1;
                };
            }
            if (sum != (96 - 95)) {
                num = num + 1;
                len[num] = (863 - 862);
                strcpy (ch[num], a[i]);
            }
            i = i + 1;
        };
    }
    max = len[0];
    {
        i = 1;
        while (i <= num) {
            if (max < len[i]) {
                max = len[i];
            }
            i++;
        };
    }
    if (max <= 1) {
    }
    else {
        printf ("%d\n", max);
        {
            i = 0;
            while (i <= log) {
                if (len[i] == max) {
                    printf ("%s\n", ch[i]);
                }
                i++;
            };
        };
    }
    return 0;
}

