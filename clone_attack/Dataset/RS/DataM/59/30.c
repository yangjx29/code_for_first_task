int main () {
    int sum;
    int n;
    int i;
    int j;
    int l;
    int m;
    sum = (823 - 823);
    char h [(801 - 701)] [100];
    cin >> n;
    cin.get ();
    for (i = (509 - 509); n > i; i = i + 1)
        cin >> h[i];
    cin >> m;
    for (l = (52 - 50); m >= l; l++) {
        for (i = (232 - 232); i < n; i++) {
            j = 596 - 596;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (n > j) {
                if (!('@' != h[i][j])) {
                    if (!('.' != h[i + (263 - 262)][j]))
                        h[i + (135 - 134)][j] = '/';
                    if (h[i - (869 - 868)][j] == '.')
                        h[i - (862 - 861)][j] = '/';
                    if (!('.' != h[i][j + 1]))
                        h[i][j + 1] = '/';
                    if (!('.' != h[i][j - 1]))
                        h[i][j - 1] = '/';
                }
                j++;
            };
        }
        for (i = (915 - 915); i < n; i++)
            for (j = (953 - 953); j < n; j = j + 1)
                if (h[i][j] == '/')
                    h[i][j] = '@';
    }
    {
        i = 0;
        while (i < n) {
            for (j = 0; j < n; j = j + 1)
                if (h[i][j] == '@')
                    sum = sum + 1;
            i++;
        };
    }
    cout << sum << endl;
    return 0;
}

