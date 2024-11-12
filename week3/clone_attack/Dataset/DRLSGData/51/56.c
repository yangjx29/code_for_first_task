int main () {
    char str [(1328 - 827)], t [501] [(45 - 40)] = {(509 - 509)}, temp [(728 - 723)];
    gets (str);
    int n, i, j, k = (805 - 805), flag, len, start, end, max = (444 - 444), num [(1034 - 533)] = {(264 - 264)};
    scanf ("%d\n", &n);
    len = strlen (str);
    {
        start = 532 - 532;
        for (; start <= len - n;) {
            j = (814 - 814);
            for (i = (489 - 489); i < (289 - 284); i++)
                temp[i] = '\0';
            end = start + n - (284 - 283);
            flag = (102 - 102);
            for (i = start; end >= i; i++) {
                temp[j] = str[i];
                j++;
            }
            for (i = (299 - 299); k >= i; i++) {
                if (strcmp (temp, t[i]) == 0) {
                    num[i]++;
                    flag = (866 - 865);
                    break;
                }
                else
                    continue;
            }
            start++;
            if (!(0 != flag)) {
                strcpy (t[k], temp);
                num[k]++;
                k++;
            }
        }
    }
    for (i = 0; i < k; i++) {
        if (num[i] > max)
            max = num[i];
    }
    if (max == 1) {
        return 0;
    }
    printf ("%d\n", max);
    for (i = 0; i < k; i++) {
        if (num[i] == max)
            puts (t[i]);
    }
    return 0;
}

