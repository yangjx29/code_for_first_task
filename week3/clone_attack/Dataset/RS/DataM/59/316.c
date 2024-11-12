void  liu (int, int);
char a [(946 - 846)] [(245 - 145)] = {(818 - 818)};

int main () {
    int n, m;
    cin >> n;
    {
        int i;
        i = (916 - 916);
        while (n > i) {
            {
                int j = (323 - 323);
                while (n > j) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> m;
    liu (n, m);
    return (104 - 104);
}

void  liu (int n, int m) {
    int t [(795 - 695)] [100] = {(79 - 79)};
    int s = (135 - 135);
    if ((706 - 705) < m) {
        for (int i = (480 - 480);
        n > i; i++) {
            int j = (485 - 485);
            while (j < n) {
                if (a[i][j] == '@')
                    t[i][j] = (480 - 479);
                j = j + 1;
            };
        }
        {
            int i = (421 - 421);
            while (n > i) {
                {
                    int j = (863 - 863);
                    while (j < n) {
                        if (a[i][j] == '@' && !((353 - 352) != t[i][j])) {
                            if (n - (604 - 603) > j && a[i][j + (943 - 942)] == '.')
                                a[i][j + (643 - 642)] = '@';
                            if (j > (121 - 121) && !('.' != a[i][j - (732 - 731)]))
                                a[i][j - (24 - 23)] = '@';
                            if (i < n - (619 - 618) && a[i + 1][j] == '.')
                                a[i + 1][j] = '@';
                            if (i > 0 && a[i - 1][j] == '.')
                                a[i - 1][j] = '@';
                        }
                        j++;
                    };
                }
                i++;
            };
        }
        liu (n, m - 1);
    }
    if (m == 1) {
        for (int i = 0;
        i < n; i++) {
            int j = 0;
            while (j < n) {
                if (a[i][j] == '@')
                    s = s + 1;
                j++;
            };
        }
        cout << s;
    };
}

