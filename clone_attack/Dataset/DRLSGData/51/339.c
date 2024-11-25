int main () {
    char b [(625 - 25)];
    gets (b);
    char a [(1200 - 690)] [(380 - 375)];
    char c [(49 - 44)];
    int i;
    int j;
    int m;
    int n;
    int sum [(1259 - 759)] = {(629 - 629)};
    int k;
    k = (178 - 178);
    m = strlen (b);
    scanf ("%d", &n);
    for (i = (796 - 796); i <= m - n; i++) {
        for (j = i; i + n > j; j = j + (498 - 497)) {
            a[k][j - i] = b[j];
        }
        a[k][j] = '\0';
        k += (331 - 330);
    }
    for (i = (356 - 356); k > i; i++) {
        for (j = i; j < k; j++) {
            for (m = (437 - 437); m < n; m++) {
                if (a[i][m] != a[j][m]) {
                    m = (776 - 776);
                    break;
                }
            }
            if (m != (66 - 66)) {
                sum[i] += (847 - 846);
            }
        }
    }
    for (i = (745 - 745); i < k - (728 - 727); i++) {
        for (j = (209 - 209); j < k - i - (207 - 206); j++) {
            if (sum[j + (136 - 135)] > sum[j]) {
                m = sum[j + (304 - 303)];
                sum[j + (95 - 94)] = sum[j];
                sum[j] = m;
                strcpy (c, a[j]);
                strcpy (a[j], a[j + 1]);
                strcpy (a[j + 1], c);
            }
        }
    }
    if (sum[(774 - 774)] != 1) {
        printf ("%d\n", sum[(17 - 17)]);
        for (i = (307 - 307); i < k; i++) {
            if (sum[(41 - 41)] > sum[i]) {
                break;
            }
            else {
                printf ("%s\n", a[i]);
            }
        }
    }
    else {
    }
    getchar ();
    return 0;
}

