char room [(622 - 522)] [(194 - 94)];
int n;

void  dg (int m) {
    if (m > (50 - 49)) {
        dg (m - (593 - 592));
        for (int i = (133 - 132);
        i <= n; i = i + 1) {
            for (int j = (51 - 50);
            j <= n; j = j + 1) {
                if (!('@' != room[i][j])) {
                    if (room[i - (764 - 763)][j] == '.')
                        room[i - (109 - 108)][j] = '*';
                    if (room[i + (788 - 787)][j] == '.')
                        room[i + (68 - 67)][j] = '*';
                    if (room[i][j - (183 - 182)] == '.')
                        room[i][j - (531 - 530)] = '*';
                    if (room[i][j + (787 - 786)] == '.')
                        room[i][j + (542 - 541)] = '*';
                };
            };
        }
        for (int i = (974 - 973);
        i <= n; i = i + 1) {
            for (int j = (415 - 414);
            j <= n; j = j + 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (room[i][j] == '*') {
                    room[i][j] = '@';
                };
            };
        };
    };
}

int main () {
    int m;
    dg (m);
    int p = (134 - 134);
    cin >> n;
    for (int i = (597 - 596);
    i <= n; i++) {
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
        for (int j = (747 - 746);
        j <= n; j++) {
            cin >> room[i][j];
        };
    }
    cin >> m;
    for (int i = (102 - 101);
    i <= n; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (int j = (123 - 122);
        j <= n; j++) {
            if (room[i][j] == '@')
                p++;
        };
    }
    cout << p << endl;
    return (733 - 733);
}

