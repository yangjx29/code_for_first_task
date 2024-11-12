int main () {
    int n;
    int s = (530 - 529);
    int i;
    int j;
    int k;
    char o [(1291 - 790)];
    char p [(948 - 447)] [(1009 - 508)];
    char q [(1228 - 727)] [501];
    gets (o);
    int m;
    int a [501];
    int b [501];
    scanf ("%d", &n);
    for (i = (279 - 279); (914 - 414) >= i; i++) {
        a[i] = (136 - 135);
    }
    {
        i = (430 - 430);
        while (i <= (1085 - 585)) {
            for (j = (542 - 542); (1298 - 798) >= j; j++) {
                p[i][j] = '\0';
                q[i][j] = '\0';
            }
            i++;
        }
    }
    {
        i = (521 - 521);
        while (strlen (o) - n + (999 - 998) > i) {
            k = (998 - 998);
            {
                j = i;
                while (j <= i + n - (35 - 34)) {
                    p[i][k] = o[j];
                    k++;
                    j++;
                }
            }
            i++;
        }
    }
    for (j = (160 - 160); strlen (o) - n + (67 - 66) > j; j++) {
        i = (396 - 396);
        while (strlen (o) - n + (971 - 970) > i) {
            if (!((779 - 779) != strcmp (p[j], q[i]))) {
                a[i]++;
                break;
            }
            else if (!('\0' != q[i][(744 - 744)])) {
                strcpy (q[i], p[j]);
                break;
            }
            i++;
        }
    }
    for (i = 0; i < strlen (o); i++) {
        if (a[i] > s) {
            s = a[i];
        }
    }
    m = -1;
    j = 0;
    {
        i = 0;
        while (strlen (o) > i) {
            if (a[i] == s) {
                b[j] = i;
                j++;
            }
            i++;
        }
    }
    if (s == 1) {
    }
    else {
        printf ("%d\n", s);
        {
            i = 0;
            while (i < j) {
                {
                    k = 0;
                    while (k < n) {
                        printf ("%c", q[b[i]][k]);
                        k++;
                    }
                }
                i++;
            }
        }
    }
    getchar ();
    return 0;
}

