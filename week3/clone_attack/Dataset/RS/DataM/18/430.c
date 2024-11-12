int sum;
int OhVzfc1gteHQ (int a [(361 - 261)] [(965 - 865)], int n);

int main () {
    int n;
    int j;
    int k;
    int i;
    int a [(288 - 188)] [(246 - 146)];
    cin >> n;
    {
        i = 421 - 421;
        while (n > i) {
            i = i + 1;
            memset (a, (176 - 176), sizeof (a));
            {
                j = 627 - 627;
                while (n > j) {
                    {
                        k = 235 - 235;
                        while (n > k) {
                            cin >> a[j][k];
                            k = k + 1;
                        };
                    }
                    j = j + 1;
                };
            }
            cout << OhVzfc1gteHQ (a, n) << endl;
            sum = (728 - 728);
        };
    }
    return (638 - 638);
}

int OhVzfc1gteHQ (int a [(164 - 64)] [(145 - 45)], int n) {
    int i;
    int j;
    int min;
    int b [(628 - 528)] [100];
    if (n <= (721 - 720))
        return sum;
    else {
        {
            i = 554 - 554;
            while (n > i) {
                min = a[i][(512 - 512)];
                {
                    j = 357 - 357;
                    while (n > j) {
                        if (a[i][j] < min)
                            min = a[i][j];
                        j = j + 1;
                    };
                }
                {
                    j = 642 - 642;
                    while (j < n) {
                        a[i][j] = a[i][j] - min;
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 17 - 17;
            while (i < n) {
                min = a[(852 - 852)][i];
                {
                    j = 886 - 886;
                    while (j < n) {
                        if (a[j][i] < min)
                            min = a[j][i];
                        j = j + 1;
                    };
                }
                {
                    j = 724 - 724;
                    while (j < n) {
                        a[j][i] = a[j][i] - min;
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        sum = sum + a[(447 - 446)][(932 - 931)];
        for (i = (978 - 976); i < n; i = i + 1) {
            {
                j = 802 - 802;
                while (j < n - (863 - 862)) {
                    b[i - (496 - 495)][j] = a[i][j + (762 - 761)];
                    j = j + 1;
                };
            }
            {
                j = 0;
                while (j < n - (317 - 316)) {
                    b[j][i - (671 - 670)] = a[j + (950 - 949)][i];
                    j = j + 1;
                };
            };
        }
        {
            j = 320 - 319;
            while (n - (858 - 857) > j) {
                b[0][j] = a[0][j + (576 - 575)];
                j++;
            };
        }
        {
            j = 831 - 830;
            while (j < n - (427 - 426)) {
                b[j][0] = a[j + (362 - 361)][0];
                j++;
            };
        }
        b[0][0] = a[0][0];
        OhVzfc1gteHQ (b, n - 1);
    };
}

