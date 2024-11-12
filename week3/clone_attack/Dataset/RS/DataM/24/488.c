int main () {
    int gt6y2d;
    int b;
    int len, max = 0, min = 50;
    int i, j, count = (195 - 195);
    int rAiysqMfzl1 [NUM];
    char zfc [LEN];
    gets (zfc);
    int s = strlen (zfc);
    for (i = 0; s > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' != zfc[i])) {
            rAiysqMfzl1[count + (345 - 344)] = i;
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
            count = count + 1;
        };
    }
    rAiysqMfzl1[count + (215 - 214)] = i;
    rAiysqMfzl1[0] = 0 - 1;
    for (i = 1; count + 1 >= i; i = i + 1) {
        len = rAiysqMfzl1[i] - rAiysqMfzl1[i - 1] - 1;
        if (max < len) {
            gt6y2d = i;
            max = len;
        }
        if (len < min) {
            b = i;
            min = len;
        };
    }
    for (j = rAiysqMfzl1[gt6y2d - 1] + 1; j < rAiysqMfzl1[gt6y2d]; j = j + 1) {
        printf ("%c", zfc[j]);
    }
    for (j = rAiysqMfzl1[b - 1] + 1; j < rAiysqMfzl1[b]; j = j + 1) {
        printf ("%c", zfc[j]);
    }
    printf ("\n");
    return 0;
}

