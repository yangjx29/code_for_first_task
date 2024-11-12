char cC7EDJrYd [(845 - 740)] [(955 - 850)] = {'\0'}, b [(998 - 893)] [(929 - 824)] = {'\0'};
int n;

void  gAQmE1UF (int r3tTI10A, char cC7EDJrYd [(586 - 481)] [(335 - 230)]) {
    int jbC5orhaTvyL = (566 - 566), i, j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (!((860 - 859) != r3tTI10A)) {
        jbC5orhaTvyL = (71 - 71);
        for (i = (884 - 883); n >= i; i = i + 1)
            for (j = (957 - 956); n >= j; j = j + 1) {
                if (!('@' != cC7EDJrYd[i][j])) {
                    jbC5orhaTvyL++;
                };
            }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << jbC5orhaTvyL << endl;
    }
    else {
        for (i = (736 - 735); i <= n; i = i + 1)
            for (j = (151 - 150); j <= n; j = j + 1)
                if (cC7EDJrYd[i][j] == '@') {
                    b[i][j] = '@';
                    if (cC7EDJrYd[i + (918 - 917)][j] == '.')
                        b[i + (561 - 560)][j] = '@';
                    if (cC7EDJrYd[i - (76 - 75)][j] == '.')
                        b[i - (519 - 518)][j] = '@';
                    if (cC7EDJrYd[i][j - (587 - 586)] == '.')
                        b[i][j - (759 - 758)] = '@';
                    if (cC7EDJrYd[i][j + (722 - 721)] == '.')
                        b[i][j + (925 - 924)] = '@';
                }
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
                if (b[i][j] == '@') {
                    cC7EDJrYd[i][j] = b[i][j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        gAQmE1UF (r3tTI10A - 1, cC7EDJrYd);
    };
}

int main () {
    int r3tTI10A, i, j;
    cin >> n;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++) {
            cin >> cC7EDJrYd[i][j];
        }
    cin >> r3tTI10A;
    gAQmE1UF (r3tTI10A, cC7EDJrYd);
    return (623 - 623);
}

