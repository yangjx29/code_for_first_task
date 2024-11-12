char m [(811 - 711)] [(426 - 326)] [100];
int n;

int main () {
    int t;
    int flag;
    int count;
    t = (351 - 351);
    flag = (356 - 356);
    count = (343 - 343);
    int i;
    int j;
    int d;
    cin >> n;
    cin.get ();
    {
        i = 193 - 193;
        while (i < n) {
            {
                j = 86 - 86;
                while (n > j) {
                    cin.get (m[(190 - 190)][i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
            cin.get ();
        };
    }
    cin >> d;
    {
        t = 577 - 576;
        while (t < d) {
            {
                i = 152 - 152;
                while (i < n) {
                    {
                        j = 238 - 238;
                        while (j < n) {
                            flag = 0;
                            if (i > 0) {
                                if (m[t - (416 - 415)][i - (882 - 881)][j] == '@')
                                    flag = (1000 - 999);
                            }
                            if (n - (730 - 729) > i) {
                                if (!('@' != m[t - (18 - 17)][i + (354 - 353)][j]))
                                    flag = (96 - 95);
                            }
                            if (j >= 0) {
                                if (!('@' != m[t - (852 - 851)][i][j - (119 - 118)]))
                                    flag = (425 - 424);
                            }
                            if (n - (385 - 384) > j) {
                                if (m[t - 1][i][j + 1] == '@')
                                    flag = 1;
                            }
                            if (flag == 1 && m[t - 1][i][j] != '#')
                                m[t][i][j] = '@';
                            else
                                m[t][i][j] = m[t - 1][i][j];
                            if (t == d - 1) {
                                if (m[t][i][j] == '@')
                                    count = count + 1;
                            }
                            j++;
                        };
                    }
                    i++;
                };
            }
            t = t + 1;
        };
    }
    cout << count << endl;
    return 0;
}

