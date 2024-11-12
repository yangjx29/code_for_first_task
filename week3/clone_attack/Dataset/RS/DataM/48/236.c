int m, n;
int a [(896 - 887)] [9] = {(239 - 239)}, b [9] [9] = {0};

void  xijunfanzhi (int day) {
    int i, G51Xdc0LE8hl;
    if (day == n + (782 - 781)) {
        return;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        for (i = 0; 9 > i; i = i + 1) {
            G51Xdc0LE8hl = 0;
            while (9 > G51Xdc0LE8hl) {
                if (a[i][G51Xdc0LE8hl] != 0) {
                    b[i + (567 - 566)][G51Xdc0LE8hl] = b[i + (309 - 308)][G51Xdc0LE8hl] + a[i][G51Xdc0LE8hl];
                    b[i - (679 - 678)][G51Xdc0LE8hl] = b[i - (922 - 921)][G51Xdc0LE8hl] + a[i][G51Xdc0LE8hl];
                    b[i + 1][G51Xdc0LE8hl +1] = b[i + 1][G51Xdc0LE8hl +1] + a[i][G51Xdc0LE8hl];
                    b[i + 1][G51Xdc0LE8hl -1] = b[i + 1][G51Xdc0LE8hl -1] + a[i][G51Xdc0LE8hl];
                    b[i - 1][G51Xdc0LE8hl +1] = b[i - 1][G51Xdc0LE8hl +1] + a[i][G51Xdc0LE8hl];
                    b[i - 1][G51Xdc0LE8hl -1] = b[i - 1][G51Xdc0LE8hl -1] + a[i][G51Xdc0LE8hl];
                    b[i][G51Xdc0LE8hl +1] = b[i][G51Xdc0LE8hl +1] + a[i][G51Xdc0LE8hl];
                    b[i][G51Xdc0LE8hl -1] = b[i][G51Xdc0LE8hl -1] + a[i][G51Xdc0LE8hl];
                    b[i][G51Xdc0LE8hl] = b[i][G51Xdc0LE8hl] + a[i][G51Xdc0LE8hl];
                }
                G51Xdc0LE8hl = G51Xdc0LE8hl +1;
            };
        }
        {
            i = 0;
            while (9 > i) {
                {
                    G51Xdc0LE8hl = 0;
                    while (9 > G51Xdc0LE8hl) {
                        a[i][G51Xdc0LE8hl] = a[i][G51Xdc0LE8hl] + b[i][G51Xdc0LE8hl];
                        b[i][G51Xdc0LE8hl] = 0;
                        G51Xdc0LE8hl = G51Xdc0LE8hl +1;
                    };
                }
                i = i + 1;
            };
        }
        xijunfanzhi (day + 1);
    };
}

int main () {
    int i;
    int G51Xdc0LE8hl;
    cin >> m >> n;
    a[4][4] = m;
    xijunfanzhi (1);
    {
        i = 0;
        while (i < 9) {
            {
                G51Xdc0LE8hl = 0;
                while (G51Xdc0LE8hl < 9) {
                    if (G51Xdc0LE8hl != 8)
                        cout << a[i][G51Xdc0LE8hl] << ' ';
                    else
                        cout << a[i][G51Xdc0LE8hl] << endl;
                    G51Xdc0LE8hl = G51Xdc0LE8hl +1;
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

