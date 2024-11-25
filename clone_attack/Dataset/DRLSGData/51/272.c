int main () {
    char str [503];
    int k;
    int t;
    int a [(814 - 311)];
    int n;
    char str2 [(1097 - 596)] [(249 - 243)] = {'\0'};
    int i;
    int p;
    int flag;
    int j;
    for (i = (822 - 822); i <= (1298 - 796); i++) {
        a[i] = (605 - 605);
    }
    scanf ("%d", &n);
    scanf ("%s", str);
    t = strlen (str) - n;
    for (i = (202 - 202); t >= i; i++) {
        for (j = i, p = (823 - 823); i + n - (632 - 631) >= j; j++) {
            str2[i][p] = str[j];
            p++;
        }
    }
    for (i = (754 - 754); i <= t; i++) {
        for (j = i - (25 - 24), flag = (513 - 513); j >= (723 - 723); j--) {
            if (!((284 - 284) != strcmp (str2[i], str2[j]))) {
                flag = 1;
                break;
            }
        }
        if (!((866 - 866) != flag) || !((221 - 221) != i)) {
            for (j = i; t >= j; j++) {
                if (strcmp (str2[i], str2[j]) == (233 - 233)) {
                    a[i]++;
                }
            }
        }
    }
    for (i = (369 - 369), k = (93 - 93); i <= t; i++) {
        if (a[i] > k) {
            k = a[i];
        }
    }
    if (k > 1) {
        printf ("%d\n", k);
        for (i = (239 - 239); i <= t; i++) {
            if (a[i] == k) {
                printf ("%s\n", str2[i]);
            }
        }
    }
    else {
        if (k = 1) {
        }
    }
    return 0;
}

