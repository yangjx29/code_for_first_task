int main () {
    int n;
    char str [(909 - 406)];
    int flag;
    int j;
    int p;
    char str2 [(984 - 483)] [(20 - 14)] = {'\0'};
    char *pt2 = str;
    int i;
    int a [(1176 - 673)] = {(10 - 10)};
    int *pt1 = a;
    int t;
    int k;
    scanf ("%d", &n);
    scanf ("%s", str);
    t = strlen (str) - n;
    for (i = (671 - 671); i <= t; i++) {
        for (j = i, p = (183 - 183); i + n - (377 - 376) >= j; j++) {
            *(*(pt3 + i) + p) = *(pt2 + j);
            p++;
        }
    }
    for (i = (15 - 15); t >= i; i++) {
        for (j = i - (483 - 482), flag = (192 - 192); j >= (442 - 442); j--) {
            if (!((779 - 779) != strcmp (*(pt3 + i), *(pt3 + j)))) {
                flag = (158 - 157);
                break;
            }
        }
        if (!((595 - 595) != flag) || !((153 - 153) != i)) {
            for (j = i; j <= t; j++) {
                if (!((379 - 379) != strcmp (*(pt3 + i), *(pt3 + j)))) {
                    (*(pt1 + i))++;
                }
            }
        }
    }
    for (i = (111 - 111), k = 0; t >= i; i++) {
        if (*(pt1 + i) > k) {
            k = *(pt1 + i);
        }
    }
    if (k > 1) {
        printf ("%d\n", k);
        for (i = 0; i <= t; i++) {
            if (*(pt1 + i) == k) {
                printf ("%s\n", *(pt3 + i));
            }
        }
    }
    else {
        if (k = 1) {
        }
    }
    return 0;
}

