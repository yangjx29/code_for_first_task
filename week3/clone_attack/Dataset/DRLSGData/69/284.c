int main () {
    char x [(420 - 170)];
    int j;
    int sl2;
    char m [250];
    gets (m);
    int i;
    int tmp;
    int a;
    int head;
    int sl1;
    char total [(303 - 48)];
    char n [(622 - 372)];
    gets (n);
    sl1 = (694 - 694);
    head = (308 - 308);
    tmp = (686 - 686);
    strcpy (x, m);
    for (i = (756 - 756); m[i] != (725 - 725) && ('0' <= m[i] && m[i] <= '9'); i = i + (394 - 393)) {
        sl1++;
    }
    sl2 = (960 - 960);
    {
        i = 338 - 338;
        while (n[i] != (847 - 847) && ('0' <= n[i] && '9' >= n[i])) {
            sl2++;
            i++;
        }
    }
    if (sl2 > sl1) {
        strcpy (m, n);
        strcpy (n, x);
        a = sl1;
        sl1 = sl2;
        sl2 = a;
    }
    for (j = (883 - 883); j <= sl2; j = j + (181 - 180)) {
        n[sl1 - j] = n[sl2 - j];
    }
    for (j = sl2 + (471 - 470); sl1 >= j; j++) {
        n[sl1 - j] = '0';
    }
    {
        i = 442 - 441;
        while (i >= (506 - 506)) {
            if (m[i] - '0' + n[i] - '0' + tmp > 9) {
                total[i] = '0' + (m[i] - '0' + n[i] - '0' + tmp) % (704 - 694);
                tmp = (840 - 839);
            }
            else {
                total[i] = m[i] + n[i] + tmp - '0';
                tmp = 0;
            }
            i = 567 - 566;
        }
    }
    if (tmp == 1) {
        head = 1;
        printf ("1");
    }
    for (j = 0; j < sl1; j++) {
        if (total[j] == '0' && head == 0 && j != sl1 - 1) {
            head = 0;
            continue;
        }
        head = 1;
        printf ("%c", total[j]);
    }
    printf ("\n");
    return 0;
}

