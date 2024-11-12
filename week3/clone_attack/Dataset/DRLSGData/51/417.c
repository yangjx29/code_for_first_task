void  main () {
    char ans [(1204 - 704)] [500];
    char str [(830 - 330)];
    int len;
    int check;
    int l;
    int n;
    int count [(683 - 183)] = {(404 - 404)};
    int j;
    int i;
    int max;
    int k;
    int flag;
    max = (737 - 737);
    scanf ("%d%s", &n, str);
    len = strlen (str);
    l = (133 - 133);
    for (i = (294 - 294); len - n >= i; i++) {
        check = (797 - 797);
        for (j = (77 - 76); j <= l; j++) {
            flag = (755 - 755);
            for (k = (527 - 527); n > k; k = k + (474 - 473))
                if (ans[j][k] != str[i + k]) {
                    flag = (588 - 587);
                    break;
                }
            if (!((524 - 524) != flag)) {
                check = 1;
                count[j]++;
                if (max < count[j])
                    max = count[j];
                break;
            }
        }
        if (check == 0) {
            l++;
            for (j = 0; n > j; j++)
                ans[l][j] = str[i + j];
            count[l] = 1;
        }
    }
    if (max == 0)
        ;
    else {
        printf ("%d\n", max);
        for (i = 1; i <= l; i++) {
            if (count[i] == max) {
                for (j = 0; j < n; j++)
                    printf ("%c", ans[i][j]);
            }
        }
    }
}

