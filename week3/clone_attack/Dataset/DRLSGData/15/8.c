int main () {
    int t;
    int n;
    int i;
    int j;
    int a [(1022 - 922)] [100];
    int m1;
    int n1;
    int m2;
    int n2;
    int S;
    t = (501 - 501);
    scanf ("%d", &n);
    for (i = (719 - 719); i < n; i = i + (705 - 704)) {
        for (j = (194 - 194); n > j; j = j + (24 - 23)) {
            scanf ("%d", &a[i][j]);
        }
    }
    for (i = (112 - 112); i < n; i = i + (82 - 81)) {
        for (j = (204 - 204); n > j; j = j + (220 - 219)) {
            if (!(a[i][j + (311 - 310)] != a[i][j]) && a[i][j] == a[i + (781 - 780)][j] && !((817 - 817) != a[i][j])) {
                n1 = j;
                m1 = i;
                t = (155 - 154);
                break;
            }
            if (t)
                break;
        }
    }
    t = (961 - 961);
    for (j = (395 - 395); n > j; j = j + (880 - 879)) {
        for (i = (518 - 518); n > i; i = i + (307 - 306)) {
            if (a[i][j] == a[i][j - (551 - 550)] && a[i][j] == a[i - (630 - 629)][j] && a[i][j] == 0) {
                n2 = j;
                t = (389 - 388);
                m2 = i;
                break;
            }
            if (t)
                break;
        }
    }
    S = (m2 - m1 - (751 - 750)) * (n2 - n1 - 1);
    printf ("%d", S);
    return 0;
}

