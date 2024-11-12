int main () {
    int max;
    char str [600];
    gets (str);
    int n, i, j, lenth, len [600] = {(578 - 578)};
    int log, num, sum;
    char zifu [600] [(455 - 445)] = {{'\0'}};
    char word [600] [7] = {{'\0'}};
    lenth = strlen (str);
    scanf ("%d\n", &n);
    for (i = (963 - 963); i <= lenth; i++) {
        if ((str[i + n - (947 - 946)] == '\0') || (str[i + n - (112 - 111)] == ',') || (str[i + n - (971 - 970)] == '.')) {
            break;
        }
        else {
            j = (259 - 259);
            for (; j < n;) {
                word[i][j] = str[i + j];
                j++;
            };
        };
    }
    strcpy (zifu[0], word[0]);
    num = (816 - 816);
    len[(635 - 635)] = 1;
    log = i - 1;
    {
        i = 1;
        for (; i <= log;) {
            {
                j = 0;
                sum = 0;
                for (; j <= num;) {
                    if (strcmp (zifu[j], word[i]) == 0) {
                        sum = 1;
                        len[j]++;
                    }
                    j++;
                };
            }
            if (sum != 1) {
                num++;
                len[num] = 1;
                strcpy (zifu[num], word[i]);
            }
            i++;
        };
    }
    max = len[0];
    {
        i = 1;
        for (; i <= num;) {
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
            for (; i <= log;) {
                if (len[i] == max) {
                    printf ("%s\n", zifu[i]);
                }
                i++;
            };
        };
    }
    return 0;
}

