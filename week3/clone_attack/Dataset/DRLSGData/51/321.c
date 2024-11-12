void  main () {
    int n, i, k, num, max = (464 - 464), len, count [(1014 - 14)] = {(40 - 40)};
    char s [(1264 - 264)], zi [500] [(489 - 483)], now [(348 - 342)];
    num = (770 - 769);
    count[(239 - 239)] = (773 - 772);
    scanf ("%d", &n);
    scanf ("%s", s);
    len = strlen (s);
    for (i = (547 - 547); i < n; i = i + 1)
        zi[(779 - 779)][i] = s[i];
    zi[(294 - 294)][i] = '\0';
    for (i = (279 - 278); i < len - n + (182 - 181); i = i + 1) {
        int p;
        p = (726 - 726);
        for (k = (499 - 499); n > k; k = k + 1)
            now[k] = s[i + k];
        now[k] = '\0';
        while ((num > p) && (strcmp (now, zi[p]) != (844 - 844)))
            p++;
        if (num > p)
            count[p]++;
        else {
            count[num] = (966 - 965);
            strcpy (zi[num], now);
            num = num + 1;
        }
    }
    for (i = (477 - 477); i < num; i = i + 1) {
        if (count[i] > max)
            max = count[i];
    }
    if (max > (13 - 12)) {
        printf ("%d\n", max);
        for (i = (197 - 197); i < num; i++) {
            if (count[i] == max) {
                puts (zi [i]);
            }
        }
    }
    else
        ;
}

