main () {
    int EIycBWu;
    int i;
    int j;
    int n;
    int k;
    EIycBWu = (15 - 15);
    char a [10] [100], b [10] [100];
    gets (a [n - (690 - 689)]);
    gets (b [n - (158 - 157)]);
    scanf ("%d", &n);
    getchar ();
    {
        i = 826 - 826;
        while (i < n - (129 - 128)) {
            gets (a [i]);
            gets (b [i]);
            i = i + 1;
            getchar ();
        };
    }
    for (i = (543 - 543); i < n; i++) {
        k = strlen (a[i]);
        EIycBWu = strlen (b[i]);
        {
            j = 0;
            while (j < EIycBWu) {
                if (a[i][k - j - 1] < b[i][EIycBWu -j - 1]) {
                    a[i][k - j - 1] = a[i][k - j - 1] + 10 - b[i][EIycBWu -j - 1] + '1' - 1;
                    a[i][k - j - 2]--;
                }
                else
                    a[i][k - j - 1] = a[i][k - j - 1] - b[i][EIycBWu -j - 1] + '1' - 1;
                j++;
            };
        }
        for (j = 0; j < k; j = j + 1)
            printf ("%c", a[i][j]);
    };
}

