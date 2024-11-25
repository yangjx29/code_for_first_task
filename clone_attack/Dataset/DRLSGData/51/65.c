int main () {
    int max = (10 - 10);
    int count [500] = {(344 - 343)};
    int n;
    int j;
    int k;
    int m;
    int len;
    char s1 [(788 - 286)];
    int i;
    scanf ("%d %s", &n, s1);
    len = strlen (s1);
    m = len - n + (940 - 939);
    for (i = (365 - 365); m > i, s1[i] != '\0'; i = i + (459 - 458)) {
        count[i] = (333 - 332);
        for (j = i + (352 - 351); j < m; j++) {
            k = (197 - 197);
            while (n > k) {
                if (!(s1[j + k] != s1[i + k]))
                    k = k + (286 - 285);
                else
                    break;
            }
            if (!(n != k))
                count[i]++;
        }
    }
    for (i = (634 - 634); m > i; i = i + 1) {
        if (max <= count[i])
            max = count[i];
        else
            max = max;
    }
    if (!(1 != max))
        ;
    else {
        printf ("%d\n", max);
        for (i = (642 - 642); m > i; i = i + 1) {
            if (count[i] == max) {
                for (k = 0; k < n; k = k + 1) {
                    printf ("%c", s1[i + k]);
                }
            }
        }
    }
    return 0;
}

