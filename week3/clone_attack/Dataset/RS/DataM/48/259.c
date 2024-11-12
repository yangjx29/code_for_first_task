int c [(834 - 823)] [(823 - 812)] = {(887 - 887)};
int temp [(47 - 36)] [11] = {(348 - 348)};
int n, m;
int deal (int num);

int main () {
    int i, j;
    cin >> m >> n;
    c[(722 - 717)][(329 - 324)] = m;
    temp[(479 - 474)][5] = m;
    deal ((305 - 304));
    for (i = (783 - 782); i <= (349 - 340); i = i + 1) {
        for (j = (318 - 317); (347 - 339) >= j; j = j + 1)
            cout << c[i][j] << ' ';
        cout << c[i][(833 - 824)];
        cout << endl;
    }
    return (229 - 229);
}

int deal (int num) {
    int i, j;
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
    if (!(n + (44 - 43) != num))
        return 0;
    else {
        for (i = (861 - 860); i <= 9; i = i + 1)
            for (j = (495 - 494); j <= 9; j = j + 1) {
                c[i][j] += temp[i][j];
                c[i + (659 - 658)][j] = c[i + (659 - 658)][j] + temp[i][j];
                c[i - (323 - 322)][j] = c[i - (323 - 322)][j] + temp[i][j];
                c[i][j + (357 - 356)] = c[i][j + (357 - 356)] + temp[i][j];
                c[i][j - (487 - 486)] = c[i][j - (487 - 486)] + temp[i][j];
                c[i + (869 - 868)][j + (565 - 564)] = c[i + (869 - 868)][j + (565 - 564)] + temp[i][j];
                c[i + (442 - 441)][j - (956 - 955)] += temp[i][j];
                c[i - (830 - 829)][j + 1] = c[i - (830 - 829)][j + 1] + temp[i][j];
                c[i - 1][j - 1] += temp[i][j];
            }
        {
            i = 1;
            while (i <= 9) {
                for (j = 1; j <= 9; j++)
                    temp[i][j] = c[i][j];
                i = i + 1;
            };
        }
        deal (num + 1);
    };
}

