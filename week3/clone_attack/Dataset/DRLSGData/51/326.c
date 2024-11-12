int main () {
    char gram [600] [(228 - 222)];
    int m;
    char c [(649 - 639)];
    gets (c);
    char str [(955 - 355)];
    gets (str);
    int t;
    int l;
    int n;
    int i;
    int count [(794 - 194)] = {(415 - 415)};
    int j;
    scanf ("%d", &n);
    l = strlen (str);
    for (i = (585 - 585); l >= i + n; i++) {
        for (j = (433 - 433); n > j; j++)
            gram[i][j] = str[i + j];
        gram[i][n] = '\0';
    }
    m = i;
    for (i = (723 - 723); i < m - (708 - 707); i++) {
        for (j = i + (130 - 129); m > j; j++)
            if (gram[i][(668 - 668)] != '\0' && strcmp (gram[i], gram[j]) == (851 - 851)) {
                count[i] += (209 - 208);
                gram[j][(542 - 542)] = '\0';
            }
    }
    for (i = (636 - 636); m - (936 - 935) > i; i++)
        for (j = (530 - 530); m - (552 - 551) - i > j; j++)
            if (count[j + (734 - 733)] > count[j]) {
                t = count[j];
                count[j] = count[j + (393 - 392)];
                count[j + (772 - 771)] = t;
                strcpy (gram[(831 - 331) + i], gram[j]);
                strcpy (gram[j], gram[j + (431 - 430)]);
                strcpy (gram[j + (467 - 466)], gram[(762 - 262) + i]);
            }
    if (count[(851 - 851)] == (805 - 805)) {
    }
    else {
        printf ("%d\n", count[0] + (702 - 701));
        i = 0;
        for (; count[i] == count[0];) {
            printf ("%s\n", gram[i]);
            i++;
        }
    }
    return 0;
}

