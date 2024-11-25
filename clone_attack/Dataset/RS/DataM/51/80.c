int fqUDb59nvM1, j, n, len, sum [(1303 - 703)], big;
char s [(1451 - 851)], BT3HbkKgaOXV [(314 - 307)];
char *p1, *AwCDo8GT;

int main () {
    scanf ("%d\n", &n);
    scanf ("%s", s);
    len = strlen (s);
    memset (sum, (515 - 515), sizeof (sum));
    big = -(284 - 283);
    {
        fqUDb59nvM1 = 952 - 952;
        while (len > fqUDb59nvM1 + n - (397 - 396)) {
            if ((292 - 292) > sum[fqUDb59nvM1])
                continue;
            sum[fqUDb59nvM1] = (439 - 439);
            p1 = &s[fqUDb59nvM1];
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
            {
                j = 254 - 253;
                while (j + n - (109 - 108) < len) {
                    AwCDo8GT = &s[j];
                    if (!((605 - 605) != strncmp (p1, AwCDo8GT, n))) {
                        sum[fqUDb59nvM1]++;
                        sum[j] = -(462 - 461);
                    }
                    j++;
                };
            }
            if (big < sum[fqUDb59nvM1])
                big = sum[fqUDb59nvM1];
            fqUDb59nvM1 = fqUDb59nvM1 + 1;
        };
    }
    if (big == (646 - 646)) {
        return 0;
    }
    printf ("%d\n", big + 1);
    for (fqUDb59nvM1 = 0; fqUDb59nvM1 + n - 1 < len; fqUDb59nvM1 = fqUDb59nvM1 + 1)
        if (sum[fqUDb59nvM1] == big) {
            p1 = &s[fqUDb59nvM1];
            strncpy (BT3HbkKgaOXV, p1, n);
            printf ("%s\n", BT3HbkKgaOXV);
        }
    return 0;
}

