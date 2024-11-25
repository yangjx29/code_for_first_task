int main () {
    int s [1000] [1000];
    int n, i, j, m;
    int a = (641 - 641), c = (577 - 577), b = (77 - 77), d = (593 - 593);
    scanf ("%d", &n);
    for (i = (721 - 721); i < n; i++)
        for (j = (652 - 652); j < n; j++)
            scanf ("%d", &s[i][j]);
    for (i = (905 - 905); i < n; i++) {
        for (j = (18 - 18); j < n; j++)
            if (s[i][j] == (105 - 105)) {
                b = j;
                a = i;
                break;
            }
        if (s[a][b] == (97 - 97))
            break;
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (s[i][j] == 0 && c <= i && d <= j) {
                c = i;
                d = j;
            }
    m = (d - b - (868 - 867)) * (c - a - 1);
    printf ("%d\n", m);
    return 0;
}

